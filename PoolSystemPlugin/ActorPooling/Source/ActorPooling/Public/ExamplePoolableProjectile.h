// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Example poolable projectile demonstrating the non-replicated, per-machine pooling case
// used together with UPooledProjectileLauncherComponent.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolableActorInterface.h"
#include "PooledProjectileInterface.h"
#include "ExamplePoolableProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UPoolableComponent;

/**
 * Example poolable projectile actor. Demonstrates the minimal setup needed for a class to
 * work correctly with UActorPoolSubsystem and UPooledProjectileLauncherComponent:
 *
 *   - Implements IPoolableActorInterface, forwarding activation mechanics to UPoolableComponent.
 *   - bReplicates = false: server and every client spawn and simulate their own fully
 *     independent instance of this class. Movement is never sent over the network - see
 *     UPooledProjectileLauncherComponent for how one server-side call triggers a local
 *     acquire on every machine.
 *   - Implements IPooledProjectileInterface, forwarding ConfigureLaunch to SetLaunchVelocity()
 *     so UPooledProjectileLauncherComponent can apply launch velocity generically.
 *
 * Treat this as a template to copy into your own project and adapt (mesh, VFX, damage,
 * collision channel) rather than shipping it as-is.
 */
UCLASS()
class ACTORPOOLING_API AExamplePoolableProjectile : public AActor, public IPoolableActorInterface, public IPooledProjectileInterface
{
	GENERATED_BODY()

public:
	AExamplePoolableProjectile();

	/** Call right after acquiring this actor from the pool. Safe to call on the server's authoritative instance or on a client's cosmetic instance alike. */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void SetLaunchVelocity(const FVector& Velocity);

	// -- IPoolableActorInterface --
	virtual void OnAcquiredFromPool_Implementation() override;
	virtual void OnReturnedToPool_Implementation() override;
	virtual bool GetActiveInPool_Implementation() const override;
	virtual void SetActiveInPool_Implementation(bool bNewActive) override;

	// -- IPooledProjectileInterface --
	virtual void ConfigureLaunch_Implementation(const FVector& InitialVelocity) override;

protected:
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	/** Root collision. Swap for your game's actual projectile collision shape/profile. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pooling")
	TObjectPtr<USphereComponent> CollisionComponent;

	/** Drives local-only movement simulation. Never replicated - each machine simulates its own instance from its own SetLaunchVelocity call. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pooling")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

	/** Handles activate/deactivate mechanics (visibility, collision, tick). */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pooling")
	TObjectPtr<UPoolableComponent> PoolableComponent;

	/** Safety net: auto-returns to the pool after this many seconds if nothing else (e.g. a hit) returns it first. Set to 0 to disable. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Pooling")
	float MaxLifetimeSeconds = 5.0f;

	FTimerHandle LifetimeTimerHandle;
	void OnLifetimeExpired();
};
