// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolableActorInterface.h"
#include "PooledProjectileInterface.h"
#include "ShooterProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class ACharacter;
class UPrimitiveComponent;
class UPoolableComponent;

/**
 *  Simple projectile class for a first person shooter game.
 *
 *  Pooled via the ActorPooling plugin: bReplicates = false, so server and every client simulate
 *  their own fully independent local instance (see UPooledProjectileLauncherComponent on
 *  AShooterWeapon for how one server-side fire call triggers a local acquire on every machine).
 *  Because instances are recycled rather than destroyed, ConfigureLaunch_Implementation and
 *  OnAcquiredFromPool_Implementation reset all the per-shot state that BeginPlay used to own.
 */
UCLASS(abstract)
class POOLSYSTEMDEMO_API AShooterProjectile : public AActor, public IPoolableActorInterface, public IPooledProjectileInterface
{
	GENERATED_BODY()

	/** Provides collision detection for the projectile */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USphereComponent* CollisionComponent;

	/** Handles movement for the projectile */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

	/** Handles activate/deactivate mechanics (visibility, collision, tick) for pooling. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UPoolableComponent* PoolableComponent;

protected:

	/** Loudness of the AI perception noise done by this projectile on hit */
	UPROPERTY(EditAnywhere, Category="Projectile|Noise", meta = (ClampMin = 0, ClampMax = 100))
	float NoiseLoudness = 3.0f;

	/** Range of the AI perception noise done by this projectile on hit */
	UPROPERTY(EditAnywhere, Category="Projectile|Noise", meta = (ClampMin = 0, ClampMax = 100000, Units = "cm"))
	float NoiseRange = 3000.0f;

	/** Tag of the AI perception noise done by this projectile on hit */
	UPROPERTY(EditAnywhere, Category="Noise")
	FName NoiseTag = FName("Projectile");

	/** Physics force to apply on hit */
	UPROPERTY(EditAnywhere, Category="Projectile|Hit", meta = (ClampMin = 0, ClampMax = 50000))
	float PhysicsForce = 100.0f;

	/** Damage to apply on hit */
	UPROPERTY(EditAnywhere, Category="Projectile|Hit", meta = (ClampMin = 0, ClampMax = 100))
	float HitDamage = 25.0f;

	/** Type of damage to apply. Can be used to represent specific types of damage such as fire, explosion, etc. */
	UPROPERTY(EditAnywhere, Category="Projectile|Hit")
	TSubclassOf<UDamageType> HitDamageType;

	/** If true, the projectile can damage the character that shot it */
	UPROPERTY(EditAnywhere, Category="Projectile|Hit")
	bool bDamageOwner = false;

	/** If true, the projectile will explode and apply radial damage to all actors in range */
	UPROPERTY(EditAnywhere, Category="Projectile|Explosion")
	bool bExplodeOnHit = false;

	/** Max distance for actors to be affected by explosion damage */
	UPROPERTY(EditAnywhere, Category="Projectile|Explosion", meta = (ClampMin = 0, ClampMax = 5000, Units = "cm"))
	float ExplosionRadius = 500.0f;

	/** If true, this projectile has already hit another surface since its last acquire from the pool */
	bool bHit = false;

	/** How long to wait after a hit before returning this projectile to the pool */
	UPROPERTY(EditAnywhere, Category="Projectile|Destruction", meta = (ClampMin = 0, ClampMax = 10, Units = "s"))
	float DeferredDestructionTime = 5.0f;

	/** Timer to handle deferred return-to-pool of this projectile after a hit */
	FTimerHandle DestructionTimer;

	/** The instigator CollisionComponent was told to ignore for the shot currently in flight, so it can be un-ignored when a new instigator is set. */
	TWeakObjectPtr<AActor> IgnoredMoveInstigator;

public:

	/** Constructor */
	AShooterProjectile();

protected:

	/** Gameplay cleanup */
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;

	/** Handles collision */
	virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	// -- IPoolableActorInterface --
	virtual void OnAcquiredFromPool_Implementation() override;
	virtual void OnReturnedToPool_Implementation() override;
	virtual bool GetActiveInPool_Implementation() const override;
	virtual void SetActiveInPool_Implementation(bool bNewActive) override;

	// -- IPooledProjectileInterface --
	virtual void ConfigureLaunch_Implementation(const FVector& InitialVelocity) override;

protected:

	/** Looks up actors within the explosion radius and damages them */
	void ExplosionCheck(const FVector& ExplosionCenter);

	/** Processes a projectile hit for the given actor. Applies gameplay effects (damage/impulse) - only call this on the machine that owns gameplay authority for this projectile. */
	void ProcessHit(AActor* HitActor, UPrimitiveComponent* HitComp, const FVector& HitLocation, const FVector& HitDirection);

	/** Passes control to Blueprint to implement any effects on hit. */
	UFUNCTION(BlueprintImplementableEvent, Category="Projectile", meta = (DisplayName = "On Projectile Hit"))
	void BP_OnProjectileHit(const FHitResult& Hit);

	/** Called from the destruction timer to return this projectile to the pool */
	void OnDeferredDestruction();

};
