// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// UActorPoolSubsystem, the world-scoped subsystem that owns and manages all actor pools:
// acquire/return, recycling, batch operations, pool stats, and replication sync.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ActorPoolSettings.h"
#include "ActorPoolSubsystem.generated.h"

/** Internal bookkeeping for a single poolable class. Not exposed to Blueprint directly. */
USTRUCT()
struct FActorClassPool
{
	GENERATED_BODY()

	/** Available (inactive) actors for this class. Treated as a stack - Pop() from the end is O(1). */
	UPROPERTY()
	TArray<TObjectPtr<AActor>> InactiveActors;

	/** Active actors for this class, ordered oldest (index 0) to newest (back). Doubles as the recycle queue for recyclable pools. */
	UPROPERTY()
	TArray<TObjectPtr<AActor>> ActiveActorsOrdered;

	UPROPERTY()
	FPoolClassConfig Config;

	UPROPERTY()
	bool bHasSpawnedInitialPool = false;
};

/**
 * World-scoped subsystem that owns and manages all actor pools for the current world.
 * Exists separately on the server and on each client (each has its own UWorld / subsystem
 * instance) - server and client pools for the same class never communicate directly. The one
 * exception is FPoolClassConfig::bSyncWithReplication, which lets a class's pool passively
 * observe another machine's pooling decisions purely via that class's own actor replication
 * (see its comment). It's still never a direct subsystem-to-subsystem link.
 * For actors that must NOT replicate their movement (e.g. cosmetic projectiles), pair this
 * with UPooledProjectileLauncherComponent, which handles triggering local acquires on every
 * machine from a single server-side call.
 */
UCLASS()
class ACTORPOOLING_API UActorPoolSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;

	/**
	 * Registers or overrides pooling configuration for a class before it is first used.
	 * Has no effect if the pool for this class has already been spawned (first Acquire call,
	 * or an earlier prewarm) - call this early, e.g. from GameMode/GameState BeginPlay.
	 * PoolSize is clamped to a minimum of 1.
	 */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void RegisterPoolClass(TSubclassOf<AActor> ActorClass, int32 PoolSize, bool bRecyclable, bool bPrewarmAtStart = false, bool bDebugGrowPoolWhenExhausted = false, FVector PoolLocation = FVector::ZeroVector, bool bSyncWithReplication = false);

	/**
	 * Acquires an actor of the given class from its pool, activates it at the given transform,
	 * and returns it. Returns nullptr if the class is non-recyclable and no inactive instances
	 * remain - unless FPoolClassConfig::bDebugGrowPoolWhenExhausted is set for this class, in
	 * which case a new instance is spawned, PoolSize is permanently grown by one, and a warning
	 * is logged instead. The pool for this class is created (and, if never used before, fully
	 * spawned) on first call unless it was already prewarmed.
	 *
	 * NewOwner/NewInstigator are applied via SetOwner()/SetInstigator() before the actor's
	 * mechanical activation and OnAcquiredFromPool() gameplay notification run, so both are
	 * already correct by the time either of those sees the actor. Omit them to leave
	 * Owner/Instigator untouched (they retain whatever they were last set to).
	 */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	AActor* AcquireActor(TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform, AActor* NewOwner = nullptr, APawn* NewInstigator = nullptr);

	/**
	 * Returns NumLocations transforms copied from BaseTransform, each nudged apart in X/Y only -
	 * Z, rotation, and scale are always copied through untouched. Handy for building the
	 * SpawnTransforms array for AcquireActorBatch so a batch doesn't spawn everything on top of
	 * itself.
	 *
	 * Result[0] is always an exact copy of BaseTransform (zero offset). Each entry at index i
	 * (i > 0) is offset from BaseTransform's location by i * VarianceOffset along one of 8
	 * compass directions, cycling every 8 entries - so offsets grow steadily larger as the array
	 * progresses and no two entries land on the same spot. VarianceOffset defaults to 200.
	 * Returns an empty array if NumLocations <= 0.
	 */
	UFUNCTION(BlueprintPure, Category = "Pooling")
	static TArray<FTransform> GetLocationVariance(const FTransform& BaseTransform, int32 NumLocations, float VarianceOffset = 200.0f);

	/**
	 * Calls AcquireActor once per entry in SpawnTransforms, using the same ActorClass/NewOwner/
	 * NewInstigator for each. AcquiredActors receives one entry per successful Acquire, in the
	 * same order as SpawnTransforms - a transform whose Acquire fails (e.g. non-recyclable pool
	 * exhausted) simply contributes no entry, so AcquiredActors.Num() can be less than
	 * SpawnTransforms.Num(). Returns true if every requested actor was acquired, false if the
	 * pool couldn't provide the full batch.
	 */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	bool AcquireActorBatch(TSubclassOf<AActor> ActorClass, const TArray<FTransform>& SpawnTransforms, TArray<AActor*>& AcquiredActors, AActor* NewOwner = nullptr, APawn* NewInstigator = nullptr);

	/** Deactivates the given actor and returns it to its class pool. No-op if the actor is not currently tracked as active. */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void ReturnActor(AActor* Actor);

	/** Calls ReturnActor once per entry in Actors. */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void ReturnActorBatch(const TArray<AActor*>& Actors);

	/** Forces immediate spawn of the full configured pool for a class, if not already spawned. */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void PrewarmPool(TSubclassOf<AActor> ActorClass);

	/**
	 * Reports pooling stats for a class - useful for debug HUDs/overlays.
	 * MaxPoolSize: this class's current configured capacity (FPoolClassConfig::PoolSize - can
	 *   grow at runtime if bDebugGrowPoolWhenExhausted is set). If the class has never been
	 *   registered/acquired/prewarmed, this reports what it WOULD be (falling back to project
	 *   settings) without creating a pool entry as a side effect of the query.
	 * AvailableCount: instances currently inactive and ready to Acquire.
	 * UnavailableCount: instances currently active/in use.
	 * AvailableCount + UnavailableCount normally equals MaxPoolSize once the pool has been
	 * spawned - it can be less if some instances failed to spawn (e.g. a misconfigured class
	 * that doesn't implement IPoolableActorInterface), and both are 0 if the pool hasn't been
	 * spawned yet.
	 *
	 * For a class with FPoolClassConfig::bSyncWithReplication enabled, AvailableCount is instead
	 * derived as MaxPoolSize - UnavailableCount rather than counting InactiveActors directly -
	 * a pooled replicated actor stays net-dormant (invisible to this machine) until first
	 * activated, so InactiveActors can only ever contain instances that already went active at
	 * least once, never a pool member this machine hasn't met yet.
	 */
	UFUNCTION(BlueprintPure, Category = "Pooling")
	void GetPoolStats(TSubclassOf<AActor> ActorClass, int32& MaxPoolSize, int32& AvailableCount, int32& UnavailableCount) const;

	/**
	 * Internal hook: called by UPoolableComponent::OnRep_ActiveInPool whenever a replicated
	 * bActiveInPool arrives on a machine other than the one that authored it (i.e. a client
	 * observing a server-authoritative pooling decision). No-op unless Actor's class has
	 * FPoolClassConfig::bSyncWithReplication enabled - see that flag's comment for the full
	 * rationale. Not exposed to Blueprint: this is plumbing for the pooling system itself, not a
	 * decision game code should ever trigger manually.
	 */
	void NotifySyncedActiveStateChanged(AActor* Actor, bool bNewActive);

protected:
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

private:
	UPROPERTY()
	TMap<TSubclassOf<AActor>, FActorClassPool> ClassPools;

	FDelegateHandle ActorDestroyedDelegateHandle;

	FActorClassPool& FindOrCreatePoolEntry(TSubclassOf<AActor> ActorClass);
	FPoolClassConfig BuildDefaultConfigFor(TSubclassOf<AActor> ActorClass) const;
	void SpawnInitialPoolIfNeeded(TSubclassOf<AActor> ActorClass, FActorClassPool& Pool);
	AActor* SpawnPooledInstance(TSubclassOf<AActor> ActorClass, const FVector& PoolLocation);

	void ActivateActor(AActor* Actor, const FTransform& SpawnTransform, AActor* NewOwner, APawn* NewInstigator);
	void DeactivateActor(AActor* Actor, const FVector& PoolLocation);

	/** Prunes a synced class's pool bookkeeping when one of its tracked actors is destroyed (e.g. a client losing relevancy to a replicated actor), so stale pointers don't accumulate. */
	void HandleActorDestroyed(AActor* DestroyedActor);
};
