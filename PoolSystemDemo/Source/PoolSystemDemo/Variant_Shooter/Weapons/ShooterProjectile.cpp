// Copyright Epic Games, Inc. All Rights Reserved.


#include "ShooterProjectile.h"
#include "PoolableComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "Engine/OverlapResult.h"
#include "Engine/World.h"
#include "TimerManager.h"

AShooterProjectile::AShooterProjectile()
{
	PrimaryActorTick.bCanEverTick = true;

	// Pooled and non-replicated: server and every client simulate their own fully independent
	// instance of this actor from their own local pool - see UPooledProjectileLauncherComponent.
	// Because bReplicates is false, HasAuthority() returns true on every machine for this class;
	// gate genuinely server-only gameplay effects (damage, impulses) on GetNetMode() != NM_Client
	// instead - see ProcessHit's caller in NotifyHit.
	bReplicates = false;

	// create the collision component and assign it as the root
	RootComponent = CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Component"));

	CollisionComponent->SetSphereRadius(16.0f);
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionComponent->SetCollisionResponseToAllChannels(ECR_Block);
	CollisionComponent->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;

	// create the projectile movement component. No need to attach it because it's not a Scene Component
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile Movement"));

	ProjectileMovement->InitialSpeed = 3000.0f;
	ProjectileMovement->MaxSpeed = 3000.0f;
	ProjectileMovement->bShouldBounce = true;
	// Deliberately left at its default (true). UMovementComponent::SetUpdatedComponent() ties the
	// component's tick-enabled state to bAutoActivate on every call (not to IsActive()) - since
	// ConfigureLaunch_Implementation calls SetUpdatedComponent() on every shot, bAutoActivate=false
	// here would silently disable the component's tick permanently after the first shot. Actual
	// start-inert/reactivate behavior is handled entirely by our own Activate()/Deactivate() calls
	// in SetActiveInPool_Implementation - see HasStoppedSimulation() in ProjectileMovementComponent.h.

	PoolableComponent = CreateDefaultSubobject<UPoolableComponent>(TEXT("Poolable Component"));

	// set the default damage type
	HitDamageType = UDamageType::StaticClass();
}

void AShooterProjectile::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// clear the destruction timer
	GetWorld()->GetTimerManager().ClearTimer(DestructionTimer);
}

void AShooterProjectile::SetActiveInPool_Implementation(bool bNewActive)
{
	if (bNewActive)
	{
		PoolableComponent->DefaultActivate();
		ProjectileMovement->Activate(true);
	}
	else
	{
		ProjectileMovement->Deactivate();
		ProjectileMovement->Velocity = FVector::ZeroVector;
		PoolableComponent->DefaultDeactivate();
	}
}

bool AShooterProjectile::GetActiveInPool_Implementation() const
{
	return PoolableComponent->bActiveInPool;
}

void AShooterProjectile::OnAcquiredFromPool_Implementation()
{
	// Reset per-shot state left over from the previous time this instance was fired - it is
	// never destroyed between shots, only recycled.
	bHit = false;
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	GetWorldTimerManager().ClearTimer(DestructionTimer);
}

void AShooterProjectile::OnReturnedToPool_Implementation()
{
	GetWorldTimerManager().ClearTimer(DestructionTimer);
}

void AShooterProjectile::ConfigureLaunch_Implementation(const FVector& InitialVelocity)
{
	// Owner/Instigator were already set by UPooledProjectileLauncherComponent before this call.
	// Stop ignoring the previous shot's instigator (if any) and ignore the new one instead -
	// otherwise MoveIgnoreActors would grow forever across this instance's pooled lifetime.
	if (AActor* PreviousInstigator = IgnoredMoveInstigator.Get())
	{
		CollisionComponent->IgnoreActorWhenMoving(PreviousInstigator, false);
	}

	IgnoredMoveInstigator = GetInstigator();
	if (AActor* CurrentInstigator = IgnoredMoveInstigator.Get())
	{
		CollisionComponent->IgnoreActorWhenMoving(CurrentInstigator, true);
	}

	ProjectileMovement->Velocity = InitialVelocity;
	ProjectileMovement->SetUpdatedComponent(CollisionComponent); // re-affirm in case it was cleared while inactive
}

void AShooterProjectile::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	// ignore if we've already hit something else, or if pooling deactivated us mid-flight
	if (bHit || !PoolableComponent->bActiveInPool)
	{
		return;
	}

	bHit = true;

	// disable collision on the projectile
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// make AI perception noise
	MakeNoise(NoiseLoudness, GetInstigator(), GetActorLocation(), NoiseRange, NoiseTag);

	// Gameplay effects (damage/impulse) must only ever run on the machine that owns gameplay
	// authority for this shot. Since this class is non-replicated, HasAuthority() is always true
	// here - GetNetMode() != NM_Client is the correct check (see HANDOFF.md in the ActorPooling
	// plugin). Client cosmetic copies still get noise/BP hit effects above/below, just no damage.
	if (GetNetMode() != NM_Client)
	{
		if (bExplodeOnHit)
		{
			// apply explosion damage centered on the projectile
			ExplosionCheck(GetActorLocation());
		}
		else
		{
			// single hit projectile. Process the collided actor
			ProcessHit(Other, OtherComp, Hit.ImpactPoint, -Hit.ImpactNormal);
		}
	}

	// pass control to BP for any extra effects
	BP_OnProjectileHit(Hit);

	// check if we should schedule deferred return-to-pool of the projectile
	if (DeferredDestructionTime > 0.0f)
	{
		GetWorldTimerManager().SetTimer(DestructionTimer, this, &AShooterProjectile::OnDeferredDestruction, DeferredDestructionTime, false);

	} else {

		// return to the pool right away
		PoolableComponent->RequestReturnToPool();
	}
}

void AShooterProjectile::ExplosionCheck(const FVector& ExplosionCenter)
{
	// do a sphere overlap check look for nearby actors to damage
	TArray<FOverlapResult> Overlaps;

	FCollisionShape OverlapShape;
	OverlapShape.SetSphere(ExplosionRadius);

	FCollisionObjectQueryParams ObjectParams;
	ObjectParams.AddObjectTypesToQuery(ECC_Pawn);
	ObjectParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	ObjectParams.AddObjectTypesToQuery(ECC_PhysicsBody);

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	if (!bDamageOwner)
	{
		QueryParams.AddIgnoredActor(GetInstigator());
	}

	GetWorld()->OverlapMultiByObjectType(Overlaps, ExplosionCenter, FQuat::Identity, ObjectParams, OverlapShape, QueryParams);

	TArray<AActor*> DamagedActors;

	// process the overlap results
	for (const FOverlapResult& CurrentOverlap : Overlaps)
	{
		// overlaps may return the same actor multiple times per each component overlapped
		// ensure we only damage each actor once by adding it to a damaged list
		if (DamagedActors.Find(CurrentOverlap.GetActor()) == INDEX_NONE)
		{
			DamagedActors.Add(CurrentOverlap.GetActor());

			// apply physics force away from the explosion
			const FVector& ExplosionDir = CurrentOverlap.GetActor()->GetActorLocation() - GetActorLocation();

			// push and/or damage the overlapped actor
			ProcessHit(CurrentOverlap.GetActor(), CurrentOverlap.GetComponent(), GetActorLocation(), ExplosionDir.GetSafeNormal());
		}

	}
}

void AShooterProjectile::ProcessHit(AActor* HitActor, UPrimitiveComponent* HitComp, const FVector& HitLocation, const FVector& HitDirection)
{
	// have we hit a character?
	if (ACharacter* HitCharacter = Cast<ACharacter>(HitActor))
	{
		// ignore the owner of this projectile
		if (HitCharacter != GetOwner() || bDamageOwner)
		{
			// apply damage to the character
			UGameplayStatics::ApplyDamage(HitCharacter, HitDamage, GetInstigator()->GetController(), this, HitDamageType);
		}
	}

	// have we hit a physics object?
	if (HitComp->IsSimulatingPhysics())
	{
		// give some physics impulse to the object
		HitComp->AddImpulseAtLocation(HitDirection * PhysicsForce, HitLocation);
	}
}

void AShooterProjectile::OnDeferredDestruction()
{
	// return this actor to the pool
	PoolableComponent->RequestReturnToPool();
}
