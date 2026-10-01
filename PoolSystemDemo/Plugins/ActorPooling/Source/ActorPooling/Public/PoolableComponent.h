// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// UPoolableComponent, an optional helper component providing default activate/deactivate
// mechanics and replicated pool state for any IPoolableActorInterface actor.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PoolableComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPoolActiveStateChanged, bool, bIsActive);

/**
 * Optional convenience component. Attach to any actor that implements IPoolableActorInterface
 * to get default activate/deactivate mechanics (visibility, collision, tick) for free, plus a
 * replicated active-state flag so clients learn about pool state changes automatically.
 *
 * Typical usage: the owning actor's SetActiveInPool (interface function) implementation simply
 * calls DefaultActivate() / DefaultDeactivate() on this component. A Blueprint-only actor can
 * wire the SetActiveInPool event straight to this component's functions with no other code.
 *
 * Pooling decisions are server-authoritative: RequestReturnToPool only has effect when called
 * with authority. bActiveInPool is replicated so clients mirror activation state automatically.
 */
UCLASS(ClassGroup = (Pooling), meta = (BlueprintSpawnableComponent))
class ACTORPOOLING_API UPoolableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPoolableComponent();

	/** Asks the pool subsystem to return the owning actor to its pool. Only has effect when the owning actor has authority. */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void RequestReturnToPool();

	/** Default mechanical activation: unhide actor, enable collision, enable tick. */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void DefaultActivate();

	/** Default mechanical deactivation: hide actor, disable collision, disable tick. */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void DefaultDeactivate();

	UPROPERTY(ReplicatedUsing = OnRep_ActiveInPool, BlueprintReadOnly, Category = "Pooling")
	bool bActiveInPool = false;

	/** Broadcast locally whenever active state changes, on server (via Default*) or client (via OnRep). Useful for hooking up visual/audio side effects without subclassing. */
	UPROPERTY(BlueprintAssignable, Category = "Pooling")
	FOnPoolActiveStateChanged OnPoolActiveStateChanged;

	UFUNCTION()
	void OnRep_ActiveInPool();

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
