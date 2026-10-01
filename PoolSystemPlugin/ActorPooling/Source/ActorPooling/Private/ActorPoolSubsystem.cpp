// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Implementation of UActorPoolSubsystem: acquiring, returning, recycling, prewarming, and
// replication-syncing pooled actors.

#include "ActorPoolSubsystem.h"
#include "PoolableActorInterface.h"
#include "Engine/World.h"

void UActorPoolSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UActorPoolSubsystem::Deinitialize()
{
	if (UWorld* World = GetWorld())
	{
		World->RemoveOnActorDestroyedHandler(ActorDestroyedDelegateHandle);
	}

	ClassPools.Empty();
	Super::Deinitialize();
}

bool UActorPoolSubsystem::DoesSupportWorldType(const EWorldType::Type WorldType) const
{
	return WorldType == EWorldType::Game || WorldType == EWorldType::PIE;
}

void UActorPoolSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	// Prewarm any classes already registered (e.g. via RegisterPoolClass called earlier from
	// GameMode/GameState BeginPlay) that requested bPrewarmAtStart.
	for (auto& Pair : ClassPools)
	{
		if (Pair.Value.Config.bPrewarmAtStart && !Pair.Value.bHasSpawnedInitialPool)
		{
			SpawnInitialPoolIfNeeded(Pair.Key, Pair.Value);
		}
	}

	// Cheap, always-on: prunes a bSyncWithReplication class's bookkeeping when one of its tracked
	// actors is destroyed. A no-op TMap lookup for any class this subsystem isn't tracking.
	ActorDestroyedDelegateHandle = InWorld.AddOnActorDestroyedHandler(FOnActorDestroyed::FDelegate::CreateUObject(this, &UActorPoolSubsystem::HandleActorDestroyed));
}

FPoolClassConfig UActorPoolSubsystem::BuildDefaultConfigFor(TSubclassOf<AActor> ActorClass) const
{
	FPoolClassConfig Config;

	if (const UActorPoolSettings* Settings = GetDefault<UActorPoolSettings>())
	{
		Config.PoolSize = Settings->DefaultPoolSize;
		Config.bRecyclable = Settings->bDefaultRecyclable;
		Config.bPrewarmAtStart = Settings->bDefaultPrewarmAtStart;
		Config.PoolLocation = Settings->DefaultPoolLocation;

		for (const FPoolClassConfig& Override : Settings->ClassOverrides)
		{
			if (Override.ActorClass.Get() == ActorClass)
			{
				Config = Override;
				break;
			}
		}
	}

	Config.ActorClass = ActorClass;
	Config.PoolSize = FMath::Max(1, Config.PoolSize);
	return Config;
}

FActorClassPool& UActorPoolSubsystem::FindOrCreatePoolEntry(TSubclassOf<AActor> ActorClass)
{
	if (FActorClassPool* Existing = ClassPools.Find(ActorClass))
	{
		return *Existing;
	}

	FActorClassPool& NewPool = ClassPools.Add(ActorClass);
	NewPool.Config = BuildDefaultConfigFor(ActorClass);
	return NewPool;
}

void UActorPoolSubsystem::RegisterPoolClass(TSubclassOf<AActor> ActorClass, int32 PoolSize, bool bRecyclable, bool bPrewarmAtStart, bool bDebugGrowPoolWhenExhausted, FVector PoolLocation, bool bSyncWithReplication)
{
	if (!ActorClass)
	{
		return;
	}

	FActorClassPool& Pool = FindOrCreatePoolEntry(ActorClass);
	if (Pool.bHasSpawnedInitialPool)
	{
		UE_LOG(LogTemp, Warning, TEXT("RegisterPoolClass called for %s after its pool was already spawned - override ignored."), *ActorClass->GetName());
		return;
	}

	Pool.Config.PoolSize = FMath::Max(1, PoolSize);
	Pool.Config.bRecyclable = bRecyclable;
	Pool.Config.bPrewarmAtStart = bPrewarmAtStart;
	Pool.Config.bDebugGrowPoolWhenExhausted = bDebugGrowPoolWhenExhausted;
	Pool.Config.PoolLocation = PoolLocation;
	Pool.Config.bSyncWithReplication = bSyncWithReplication;
}

void UActorPoolSubsystem::PrewarmPool(TSubclassOf<AActor> ActorClass)
{
	if (!ActorClass)
	{
		return;
	}

	FActorClassPool& Pool = FindOrCreatePoolEntry(ActorClass);
	SpawnInitialPoolIfNeeded(ActorClass, Pool);
}

void UActorPoolSubsystem::GetPoolStats(TSubclassOf<AActor> ActorClass, int32& MaxPoolSize, int32& AvailableCount, int32& UnavailableCount) const
{
	MaxPoolSize = 0;
	AvailableCount = 0;
	UnavailableCount = 0;

	if (!ActorClass)
	{
		return;
	}

	if (const FActorClassPool* Pool = ClassPools.Find(ActorClass))
	{
		MaxPoolSize = Pool->Config.PoolSize;
		UnavailableCount = Pool->ActiveActorsOrdered.Num();

		if (Pool->Config.bSyncWithReplication)
		{
			// InactiveActors is structurally incomplete for a synced pool: a pooled replicated
			// actor stays net-dormant (and so invisible to this machine) until the moment it's
			// first activated, so InactiveActors can only ever contain instances that have
			// already gone active at least once and were later returned, never a pool member
			// this machine hasn't met yet. MaxPoolSize/UnavailableCount don't have that blind
			// spot (every active instance is a normal, non-dormant replicated actor), so derive
			// Available from those instead of trusting the array's literal size.
			AvailableCount = FMath::Max(0, MaxPoolSize - UnavailableCount);
		}
		else
		{
			AvailableCount = Pool->InactiveActors.Num();
		}
	}
	else
	{
		// Not yet registered/acquired/prewarmed, report what its capacity would be without
		// creating a pool entry as a side effect of this query.
		MaxPoolSize = BuildDefaultConfigFor(ActorClass).PoolSize;
	}
}

void UActorPoolSubsystem::NotifySyncedActiveStateChanged(AActor* Actor, bool bNewActive)
{
	if (!Actor)
	{
		return;
	}

	TSubclassOf<AActor> ActorClass = Actor->GetClass();
	FActorClassPool* Pool = ClassPools.Find(ActorClass);
	if (!Pool)
	{
		if (!BuildDefaultConfigFor(ActorClass).bSyncWithReplication)
		{
			// This class isn't opted into sync tracking. Ignore, don't create a pool entry for it.
			return;
		}
		Pool = &FindOrCreatePoolEntry(ActorClass);
	}
	else if (!Pool->Config.bSyncWithReplication)
	{
		return;
	}

	// Unconditionally remove then add so this is correct and idempotent regardless of whether
	// this is the first time we're hearing about Actor (a newly discovered replicated instance)
	// or a state flip on one we're already tracking.
	Pool->InactiveActors.RemoveSingle(Actor);
	Pool->ActiveActorsOrdered.RemoveSingle(Actor);

	if (bNewActive)
	{
		Pool->ActiveActorsOrdered.Add(Actor);
	}
	else
	{
		Pool->InactiveActors.Add(Actor);
	}
}

void UActorPoolSubsystem::HandleActorDestroyed(AActor* DestroyedActor)
{
	if (!DestroyedActor)
	{
		return;
	}

	if (FActorClassPool* Pool = ClassPools.Find(DestroyedActor->GetClass()))
	{
		if (Pool->Config.bSyncWithReplication)
		{
			Pool->InactiveActors.RemoveSingle(DestroyedActor);
			Pool->ActiveActorsOrdered.RemoveSingle(DestroyedActor);
		}
	}
}

AActor* UActorPoolSubsystem::SpawnPooledInstance(TSubclassOf<AActor> ActorClass, const FVector& PoolLocation)
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return nullptr;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	AActor* NewActor = World->SpawnActor<AActor>(ActorClass, FTransform(PoolLocation), SpawnParams);
	if (!NewActor)
	{
		return nullptr;
	}

	if (!NewActor->Implements<UPoolableActorInterface>())
	{
		UE_LOG(LogTemp, Error, TEXT("Pooled class %s does not implement IPoolableActorInterface - destroying it instead of pooling it."), *ActorClass->GetName());
		NewActor->Destroy();
		return nullptr;
	}

	// Spawn inactive, hidden/no collision/no tick, until first Acquire.
	IPoolableActorInterface::Execute_SetActiveInPool(NewActor, false);

	if (NewActor->GetIsReplicated() && World->GetNetMode() != NM_Client)
	{
		NewActor->SetNetDormancy(DORM_DormantAll);
	}

	return NewActor;
}

void UActorPoolSubsystem::SpawnInitialPoolIfNeeded(TSubclassOf<AActor> ActorClass, FActorClassPool& Pool)
{
	if (Pool.bHasSpawnedInitialPool || !ActorClass)
	{
		return;
	}

	Pool.InactiveActors.Reserve(Pool.Config.PoolSize);
	for (int32 i = 0; i < Pool.Config.PoolSize; ++i)
	{
		if (AActor* NewActor = SpawnPooledInstance(ActorClass, Pool.Config.PoolLocation))
		{
			Pool.InactiveActors.Add(NewActor);
		}
	}

	Pool.bHasSpawnedInitialPool = true;
}

void UActorPoolSubsystem::ActivateActor(AActor* Actor, const FTransform& SpawnTransform, AActor* NewOwner, APawn* NewInstigator)
{
	if (!Actor)
	{
		return;
	}

	Actor->SetActorTransform(SpawnTransform);
	Actor->SetOwner(NewOwner);
	Actor->SetInstigator(NewInstigator);

	if (Actor->GetIsReplicated() && GetWorld() && GetWorld()->GetNetMode() != NM_Client)
	{
		Actor->FlushNetDormancy();
	}

	// Mechanical activation first, then gameplay notification. See interface contract. Owner/
	// Instigator are already set above, so both are safe to read via GetOwner()/GetInstigator()
	// from either of these.
	IPoolableActorInterface::Execute_SetActiveInPool(Actor, true);
	IPoolableActorInterface::Execute_OnAcquiredFromPool(Actor);
}

void UActorPoolSubsystem::DeactivateActor(AActor* Actor, const FVector& PoolLocation)
{
	if (!Actor)
	{
		return;
	}

	// Gameplay teardown first, then mechanical deactivation last. See interface contract.
	// This runs while the actor is still at its real last-active location, so teardown logic
	// (e.g. broadcasting a death event) still sees where it actually was.
	IPoolableActorInterface::Execute_OnReturnedToPool(Actor);
	IPoolableActorInterface::Execute_SetActiveInPool(Actor, false);

	if (Actor->GetIsReplicated() && GetWorld() && GetWorld()->GetNetMode() != NM_Client)
	{
		Actor->SetNetDormancy(DORM_DormantAll);
	}

	// Park it at its class's pool location now that it's fully deactivated.
	Actor->SetActorLocation(PoolLocation);
}

AActor* UActorPoolSubsystem::AcquireActor(TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, AActor* NewOwner, APawn* NewInstigator)
{
	if (!ActorClass)
	{
		return nullptr;
	}

	FActorClassPool& Pool = FindOrCreatePoolEntry(ActorClass);
	SpawnInitialPoolIfNeeded(ActorClass, Pool);

	AActor* Acquired = nullptr;

	if (Pool.InactiveActors.Num() > 0)
	{
		Acquired = Pool.InactiveActors.Pop();
	}
	else if (Pool.Config.bRecyclable && Pool.ActiveActorsOrdered.Num() > 0)
	{
		// Pool exhausted but recyclable. force-recycle the oldest active instance.
		Acquired = Pool.ActiveActorsOrdered[0];
		Pool.ActiveActorsOrdered.RemoveAt(0);
		DeactivateActor(Acquired, Pool.Config.PoolLocation);
	}
	else if (!Pool.Config.bRecyclable && Pool.Config.bDebugGrowPoolWhenExhausted)
	{
		// Debug escape hatch - permanently grow this class's non-recyclable pool by one instead
		// of failing the Acquire. See FPoolClassConfig::bDebugGrowPoolWhenExhausted.
		Acquired = SpawnPooledInstance(ActorClass, Pool.Config.PoolLocation);
		if (!Acquired)
		{
			return nullptr;
		}

		++Pool.Config.PoolSize;

		FString DebugMsg = FString::Printf(TEXT("Actor pool for %s exhausted - bDebugGrowPoolWhenExhausted is enabled,growing PoolSize to %d."), *ActorClass->GetName(), Pool.Config.PoolSize);

		// This sends it to the Output Log (keeping your original behavior)
		UE_LOG(LogTemp, Warning, TEXT("%s"), *DebugMsg);

		// This sends it to the PIE viewport screen
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, DebugMsg);
		}
	}
	else
	{
		// Non-recyclable and exhausted (or PoolSize == 0). Cannot provide an actor.
		return nullptr;
	}

	ActivateActor(Acquired, SpawnTransform, NewOwner, NewInstigator);
	Pool.ActiveActorsOrdered.Add(Acquired);

	return Acquired;
}

void UActorPoolSubsystem::ReturnActor(AActor* Actor)
{
	if (!Actor)
	{
		return;
	}

	FActorClassPool* Pool = ClassPools.Find(Actor->GetClass());
	if (!Pool)
	{
		UE_LOG(LogTemp, Warning, TEXT("ReturnActor called for %s but it has no registered pool - ignoring."), *Actor->GetName());
		return;
	}

	if (Pool->ActiveActorsOrdered.RemoveSingle(Actor) == 0)
	{
		// Not currently tracked as active, already returned, or never acquired through this pool.
		return;
	}

	DeactivateActor(Actor, Pool->Config.PoolLocation);
	Pool->InactiveActors.Push(Actor);
}

TArray<FTransform> UActorPoolSubsystem::GetLocationVariance(const FTransform& BaseTransform, int32 NumLocations, float VarianceOffset)
{
	TArray<FTransform> Result;

	if (NumLocations <= 0)
	{
		return Result;
	}

	// 8 compass directions, cycled for entries after the first. Each axis is -1, 0, or 1, so
	// combined with a magnitude that grows every entry this reproduces "at least one axis offset
	// by i * VarianceOffset, optionally both" while guaranteeing no two entries coincide.
	static const FVector2D Directions[8] =
	{
		FVector2D(1.0f, -1.0f),
		FVector2D(0.0f, -1.0f),
		FVector2D(-1.0f, -1.0f),
		FVector2D(-1.0f, 0.0f),
		FVector2D(-1.0f, 1.0f),
		FVector2D(0.0f, 1.0f),
		FVector2D(1.0f, 1.0f),
		FVector2D(1.0f, 0.0f),
	};

	Result.Reserve(NumLocations);

	const FVector BaseLocation = BaseTransform.GetLocation();

	for (int32 i = 0; i < NumLocations; ++i)
	{
		FTransform Variant = BaseTransform;

		if (i > 0)
		{
			const FVector2D& Direction = Directions[(i - 1) % 8];
			const float Magnitude = i * VarianceOffset;

			FVector NewLocation = BaseLocation;
			NewLocation.X += Direction.X * Magnitude;
			NewLocation.Y += Direction.Y * Magnitude;

			Variant.SetLocation(NewLocation);
		}

		Result.Add(Variant);
	}

	return Result;
}

bool UActorPoolSubsystem::AcquireActorBatch(TSubclassOf<AActor> ActorClass, const TArray<FTransform>& SpawnTransforms, TArray<AActor*>& AcquiredActors, AActor* NewOwner, APawn* NewInstigator)
{
	AcquiredActors.Reset(SpawnTransforms.Num());

	for (const FTransform& SpawnTransform : SpawnTransforms)
	{
		if (AActor* Acquired = AcquireActor(ActorClass, SpawnTransform, NewOwner, NewInstigator))
		{
			AcquiredActors.Add(Acquired);
		}
	}

	return AcquiredActors.Num() == SpawnTransforms.Num();
}

void UActorPoolSubsystem::ReturnActorBatch(const TArray<AActor*>& Actors)
{
	for (AActor* Actor : Actors)
	{
		ReturnActor(Actor);
	}
}
