// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// UPooledProjectileLauncherComponent, for firing pooled, non-replicated cosmetic projectiles
// consistently across the server and every client.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PooledProjectileLauncherComponent.generated.h"

/**
 * Attach to a weapon/pawn that fires pooled, NON-replicated projectiles (bReplicates = false
 * on the projectile class itself). Each machine, server and every client, maintains its own
 * fully independent local pool for the projectile class; they never synchronize over the
 * network beyond this one triggering call.
 *
 * On the server: LaunchProjectile acquires and initializes the authoritative projectile from
 * the server's own local pool (this is the only instance that counts for gameplay/damage),
 * then fires an unreliable multicast so every client acquires and initializes its own purely
 * cosmetic copy from its own local pool. Each client-side projectile then simulates entirely
 * locally (e.g. via its own UProjectileMovementComponent) with no further network involvement.
 *
 * Listen-server note: on a listen server, NetMulticast RPCs also execute locally on the host
 * itself. Multicast_SpawnCosmeticProjectile guards against this to avoid the host spawning two
 * projectiles per shot (one authoritative, one redundant cosmetic).
 */
UCLASS(ClassGroup = (Pooling), meta = (BlueprintSpawnableComponent))
class ACTORPOOLING_API UPooledProjectileLauncherComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPooledProjectileLauncherComponent();

	/**
	 * Call ONLY on the server, from already-validated fire logic (e.g. after your own ammo/cooldown
	 * checks). Acquires the authoritative projectile locally and triggers cosmetic spawns on all
	 * clients. Returns the authoritative (server-side) projectile actor, or nullptr if the pool
	 * could not provide one (e.g. a non-recyclable pool that is currently exhausted).
	 *
	 * ProjectileOwner/ProjectileInstigator are forwarded straight to UActorPoolSubsystem::AcquireActor,
	 * which applies them via SetOwner()/SetInstigator() before InitialVelocity is applied, on both
	 * the authoritative instance and every client's cosmetic instance. See
	 * ApplyLaunchConfiguration(). ProjectileClass must implement IPooledProjectileInterface for
	 * InitialVelocity to actually be applied (a warning is logged otherwise); Owner/Instigator are
	 * set regardless.
	 */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	AActor* LaunchProjectile(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, const FVector& InitialVelocity, AActor* ProjectileOwner = nullptr, APawn* ProjectileInstigator = nullptr);

protected:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_SpawnCosmeticProjectile(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, const FVector& InitialVelocity, AActor* ProjectileOwner, APawn* ProjectileInstigator);

	/** Performs the local acquire + setup for a projectile actor on whichever machine calls it. */
	void AcquireAndInitializeLocalProjectile(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, const FVector& InitialVelocity, AActor* ProjectileOwner, APawn* ProjectileInstigator);

	/**
	 * Applies InitialVelocity to a freshly-acquired projectile actor (authoritative or cosmetic)
	 * via IPooledProjectileInterface::ConfigureLaunch. Owner/Instigator are already set by this
	 * point. They're applied by UActorPoolSubsystem::AcquireActor itself, before this runs, so
	 * ConfigureLaunch already sees them via GetOwner()/GetInstigator().
	 */
	void ApplyLaunchConfiguration(AActor* Actor, const FVector& InitialVelocity);
};
