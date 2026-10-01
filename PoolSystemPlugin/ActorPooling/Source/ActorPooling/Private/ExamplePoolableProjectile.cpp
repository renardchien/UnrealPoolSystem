// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Implementation of the example non-replicated poolable projectile.

#include "ExamplePoolableProjectile.h"
#include "PoolableComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TimerManager.h"

AExamplePoolableProjectile::AExamplePoolableProjectile()
{
	PrimaryActorTick.bCanEverTick = false;

	// Non-replicated: server and each client spawn/simulate their own fully independent
	// instance of this actor from their own local pool. Note that because bReplicates is
	// false, AActor::HasAuthority() returns true for this class on every machine (server
	// and client alike). This is intentional and is what lets RequestReturnToPool /
	// gameplay logic below run identically regardless of which machine's instance it is.
	bReplicates = false;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->InitSphereRadius(8.0f);
	CollisionComponent->SetCollisionProfileName(TEXT("Projectile"));
	RootComponent = CollisionComponent;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = CollisionComponent;
	ProjectileMovement->InitialSpeed = 0.0f;           // set via SetLaunchVelocity, not a fixed speed
	ProjectileMovement->MaxSpeed = 0.0f;                // 0 = no cap; adjust per-project
	ProjectileMovement->ProjectileGravityScale = 0.0f;  // adjust per-project (e.g. arcing projectiles)
	// Deliberately left at its default (true), NOT false. UMovementComponent::SetUpdatedComponent()
	// ties the component's tick-enabled state to bAutoActivate on every call it makes (not to
	// IsActive()) and SetLaunchVelocity() below calls SetUpdatedComponent() on every shot, so
	// bAutoActivate=false here would silently and permanently disable the component's tick after
	// the first shot. Start-inert/reactivate behavior is handled entirely by our own explicit
	// Activate()/Deactivate() calls in SetActiveInPool_Implementation. See HasStoppedSimulation()
	// in ProjectileMovementComponent.h for how IsActive() (not bAutoActivate) gates actual movement.

	PoolableComponent = CreateDefaultSubobject<UPoolableComponent>(TEXT("PoolableComponent"));
}

void AExamplePoolableProjectile::SetLaunchVelocity(const FVector& Velocity)
{
	ProjectileMovement->Velocity = Velocity;
	ProjectileMovement->SetUpdatedComponent(CollisionComponent); // re-affirm in case it was cleared while inactive
}

void AExamplePoolableProjectile::ConfigureLaunch_Implementation(const FVector& InitialVelocity)
{
	SetLaunchVelocity(InitialVelocity);
}

void AExamplePoolableProjectile::SetActiveInPool_Implementation(bool bNewActive)
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

bool AExamplePoolableProjectile::GetActiveInPool_Implementation() const
{
	return PoolableComponent->bActiveInPool;
}

void AExamplePoolableProjectile::OnAcquiredFromPool_Implementation()
{
	if (MaxLifetimeSeconds > 0.0f)
	{
		GetWorldTimerManager().SetTimer(LifetimeTimerHandle, this, &AExamplePoolableProjectile::OnLifetimeExpired, MaxLifetimeSeconds, false);
	}

	// Add VFX/audio start here - e.g. activate a trail particle system, play a launch sound.
}

void AExamplePoolableProjectile::OnReturnedToPool_Implementation()
{
	GetWorldTimerManager().ClearTimer(LifetimeTimerHandle);

	// Add VFX/audio stop/cleanup here - e.g. deactivate the trail particle system.
}

void AExamplePoolableProjectile::OnLifetimeExpired()
{
	PoolableComponent->RequestReturnToPool();
}

void AExamplePoolableProjectile::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (!PoolableComponent->bActiveInPool)
	{
		return; // ignore overlaps that arrive while inactive/pooled
	}

	// Only the server's authoritative instance should ever apply gameplay effects (damage,
	// knockback, etc.). Client cosmetic instances should be limited to local hit VFX/SFX.
	if (GetNetMode() != NM_Client)
	{
		// Apply damage / gameplay effect to OtherActor here.
	}

	// Add local impact VFX/SFX here. Runs on every instance (server and cosmetic clients).

	PoolableComponent->RequestReturnToPool();
}
