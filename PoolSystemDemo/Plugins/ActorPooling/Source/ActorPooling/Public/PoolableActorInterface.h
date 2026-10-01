// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// IPoolableActorInterface, the contract every pooled actor class implements to be managed
// by UActorPoolSubsystem.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PoolableActorInterface.generated.h"

UINTERFACE(BlueprintType)
class ACTORPOOLING_API UPoolableActorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * WARNING: This interface does not support the replication features on its own because it cannot contain functions. 
 * Use the UPoolableComponent to get replication support for pooled actors. See docs for the ActorPooling plugin for more details.
 * 
 * Implement this interface on any Actor class that should be managed by UActorPoolSubsystem.
 * Can be implemented in C++ (override the _Implementation functions) or in Blueprint
 * (override the events directly on the class defaults / Class Settings > Interfaces).
 *
 * Call order guarantee made by the subsystem:
 *   Acquire: SetActiveInPool(true)  is called BEFORE OnAcquiredFromPool().
 *   Return:  OnReturnedToPool()     is called BEFORE SetActiveInPool(false).
 * i.e. gameplay notifications always run on an actor that is currently in its "active" state.
 */
class ACTORPOOLING_API IPoolableActorInterface
{
	GENERATED_BODY()

public:
	/**
	 * Called after the actor has been mechanically activated (visible/collidable/ticking).
	 * Use this for gameplay setup: reset health/state, re-enable VFX, start behavior, etc.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pooling")
	void OnAcquiredFromPool();

	/**
	 * Called before the actor is mechanically deactivated.
	 * Use this for gameplay teardown: stop timers, clear VFX, unbind delegates, cancel abilities, etc.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pooling")
	void OnReturnedToPool();

	/** Returns whether this actor currently considers itself active in the pool. */
	UFUNCTION(BlueprintNativeEvent, Category = "Pooling")
	bool GetActiveInPool() const;

	/**
	 * Called by the pool subsystem to mechanically toggle the actor's active state
	 * (visibility, collision, tick). If this actor has a UPoolableComponent attached,
	 * the simplest implementation is to just forward to its DefaultActivate/DefaultDeactivate.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Pooling")
	void SetActiveInPool(bool bNewActive);
};
