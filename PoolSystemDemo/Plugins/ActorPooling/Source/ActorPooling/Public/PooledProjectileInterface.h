// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// IPooledProjectileInterface, a companion interface for projectile-shaped poolable actors
// fired via UPooledProjectileLauncherComponent.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PooledProjectileInterface.generated.h"

UINTERFACE(BlueprintType)
class ACTORPOOLING_API UPooledProjectileInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Optional companion to IPoolableActorInterface for projectile-shaped poolable actors. Implement
 * this on any actor class you intend to fire via UPooledProjectileLauncherComponent. It's how
 * the (generic, gameplay-agnostic) launcher applies per-shot data that UActorPoolSubsystem's
 * AcquireActor has no way to know about, without the launcher needing to hardcode a cast to any
 * particular project's concrete projectile class.
 *
 * Like IPoolableActorInterface's BlueprintNativeEvents, UHT auto-generates a no-op default
 * _Implementation for this on the interface itself. Do NOT hand-write one in a .cpp (see
 * PoolableActorInterface.h for why that causes a "already has a body" compile error). Classes
 * that don't implement this interface at all are simply skipped by the launcher (with a warning).
 */
class ACTORPOOLING_API IPooledProjectileInterface
{
	GENERATED_BODY()

public:
	/**
	 * Called once per acquire, immediately after UActorPoolSubsystem::AcquireActor returns - i.e.
	 * after SetActiveInPool(true) and OnAcquiredFromPool() have already run, and after AcquireActor
	 * has already applied Owner/Instigator for this shot (so GetOwner() / GetInstigator() are
	 * already correct by the time this runs). Use this to set initial velocity and any other
	 * per-shot reset that depends on Owner/Instigator (e.g. re-arming a move-ignore list against
	 * the new instigator).
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pooling")
	void ConfigureLaunch(const FVector& InitialVelocity);
};
