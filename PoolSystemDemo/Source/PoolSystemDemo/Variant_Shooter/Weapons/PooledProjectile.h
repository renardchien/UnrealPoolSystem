// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolableActorInterface.h"
#include "PooledProjectileInterface.h"
#include "PooledProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UPoolableComponent;

/**
 *  Minimal pooled projectile: just collision + movement + pooling, deliberately with none of
 *  AShooterProjectile's damage/explosion/bounce logic. Use this to confirm the pool + launcher +
 *  velocity path works in isolation before layering gameplay back on top (or just extend this
 *  class directly instead of AShooterProjectile, if you don't need the extra features).
 *
 *  bReplicates = false: server and every client simulate their own fully independent instance
 *  from their own local pool - see UPooledProjectileLauncherComponent on AShooterWeapon.
 */
UCLASS()
class POOLSYSTEMDEMO_API APooledProjectile : public AActor, public IPoolableActorInterface, public IPooledProjectileInterface
{
	GENERATED_BODY()

public:
	APooledProjectile();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pooling")
	TObjectPtr<USphereComponent> CollisionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pooling")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pooling")
	TObjectPtr<UPoolableComponent> PoolableComponent;

	/** Safety net: returns to the pool after this many seconds if nothing else (e.g. a hit) does first. 0 disables it. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Pooling")
	float MaxLifetimeSeconds = 5.0f;

	FTimerHandle LifetimeTimerHandle;
	void OnLifetimeExpired();

	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	// -- IPoolableActorInterface --
	virtual void OnAcquiredFromPool_Implementation() override;
	virtual void OnReturnedToPool_Implementation() override;
	virtual bool GetActiveInPool_Implementation() const override;
	virtual void SetActiveInPool_Implementation(bool bNewActive) override;

	// -- IPooledProjectileInterface --
	virtual void ConfigureLaunch_Implementation(const FVector& InitialVelocity) override;
};
