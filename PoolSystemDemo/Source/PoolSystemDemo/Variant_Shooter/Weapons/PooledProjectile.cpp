// Copyright Epic Games, Inc. All Rights Reserved.

#include "PooledProjectile.h"
#include "PoolableComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "TimerManager.h"

APooledProjectile::APooledProjectile()
{
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = false;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->InitSphereRadius(16.0f);
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CollisionComponent->SetCollisionResponseToAllChannels(ECR_Block);
	RootComponent = CollisionComponent;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = CollisionComponent;
	ProjectileMovement->InitialSpeed = 0.0f;          // velocity is set explicitly via ConfigureLaunch
	ProjectileMovement->MaxSpeed = 0.0f;               // 0 = no cap
	ProjectileMovement->ProjectileGravityScale = 0.0f; // straight line for now; adjust once movement is confirmed
	ProjectileMovement->bShouldBounce = false;
	// NOTE: do NOT set bAutoActivate = false here - see HANDOFF.md in the ActorPooling plugin for
	// exactly why that silently breaks movement on pooled/reactivated projectiles.

	PoolableComponent = CreateDefaultSubobject<UPoolableComponent>(TEXT("PoolableComponent"));
}

void APooledProjectile::SetActiveInPool_Implementation(bool bNewActive)
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

bool APooledProjectile::GetActiveInPool_Implementation() const
{
	return PoolableComponent->bActiveInPool;
}

void APooledProjectile::OnAcquiredFromPool_Implementation()
{
	if (MaxLifetimeSeconds > 0.0f)
	{
		GetWorldTimerManager().SetTimer(LifetimeTimerHandle, this, &APooledProjectile::OnLifetimeExpired, MaxLifetimeSeconds, false);
	}
}

void APooledProjectile::OnReturnedToPool_Implementation()
{
	GetWorldTimerManager().ClearTimer(LifetimeTimerHandle);
}

void APooledProjectile::ConfigureLaunch_Implementation(const FVector& InitialVelocity)
{
	ProjectileMovement->Velocity = InitialVelocity;

	// TEMP: remove once you've confirmed movement works. Confirms this actually ran and with
	// what value - if this never prints when you fire, the bug is upstream (interface dispatch /
	// LaunchProjectile not being reached), not in this class.
	UE_LOG(LogTemp, Warning, TEXT("APooledProjectile::ConfigureLaunch_Implementation: Velocity=%s"), *InitialVelocity.ToString());
}

void APooledProjectile::NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	if (!PoolableComponent->bActiveInPool)
	{
		return; // ignore hits that arrive while inactive/pooled
	}

	UE_LOG(LogTemp, Warning, TEXT("APooledProjectile::NotifyHit: hit %s"), *GetNameSafe(Other));

	PoolableComponent->RequestReturnToPool();
}

void APooledProjectile::OnLifetimeExpired()
{
	PoolableComponent->RequestReturnToPool();
}
