// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Per-class (FPoolClassConfig) and project-wide (UActorPoolSettings) configuration for actor
// pooling: pool size, recyclable/non-recyclable, prewarm, pool location, debug growth, and
// replication sync.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ActorPoolSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPoolClassConfig
{
	GENERATED_BODY()

	/** The poolable actor class this configuration applies to. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pooling")
	TSoftClassPtr<AActor> ActorClass;

	/** Number of instances of this class to maintain in the pool. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pooling", meta = (ClampMin = "1"))
	int32 PoolSize = 10;

	/**
	 * Recyclable: when the pool is exhausted, acquiring forcibly deactivates and reuses the
	 * oldest currently-active instance. Non-recyclable: acquiring fails (returns nullptr) if
	 * no inactive instances remain; instances only return to the pool via explicit ReturnActor calls.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pooling")
	bool bRecyclable = true;

	/** If true, the full pool for this class is spawned during world BeginPlay rather than lazily on first Acquire request. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pooling")
	bool bPrewarmAtStart = false;

	/**
	 * Debug aid, off by default. Only applies while bRecyclable is false: instead of returning
	 * nullptr when this class's pool is exhausted, Acquire spawns one extra instance, permanently
	 * grows PoolSize to account for it, and logs a warning. Use this to keep testing unblocked
	 * while you find the right PoolSize for a class - not intended to stay on in a shipped build,
	 * since it defeats the actor-count cap pooling exists to enforce.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pooling")
	bool bDebugGrowPoolWhenExhausted = false;

	/**
	 * World location this class's instances are spawned at (before their first Acquire) and
	 * moved back to every time they're returned to the pool (Return, or forced recycle). Purely
	 * a "parking spot" for inactive instances, which are already hidden/non-colliding/non-ticking
	 * regardless of where this is - it exists so inactive actors aren't left sitting wherever they
	 * last were (e.g. mid-air, inside geometry) between uses.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pooling")
	FVector PoolLocation = FVector::ZeroVector;

	/**
	 * For a pool that THIS machine's subsystem never calls AcquireActor/ReturnActor for itself -
	 * typically a replicated class's pool on a CLIENT, where the server is the sole authority on
	 * pooling decisions (see AExamplePoolableEnemyPawn's class comment). A replicated pooled
	 * actor stays net-dormant while inactive, so a client doesn't even know an instance exists
	 * until the moment the server activates it - before that, this machine's pool has no idea
	 * it's there. With this enabled, this class's pool listens to
	 * UPoolableComponent::bActiveInPool replication (UPoolableComponent::OnRep_ActiveInPool) and
	 * keeps its own InactiveActors/ActiveActorsOrdered bookkeeping (and GetPoolStats) in sync
	 * with those instances automatically, without ever spawning or Acquiring anything itself.
	 *
	 * Only takes effect for actors using UPoolableComponent's replicated flag - a class that
	 * implements IPoolableActorInterface without this component (fully custom C++/Blueprint)
	 * won't be tracked by this option. Safe to also leave on wherever this class IS normally
	 * Acquired/Returned (e.g. the server's copy of the same project-settings entry) - it causes
	 * no double-counting there, since OnRep never fires on the machine that authored the change.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pooling")
	bool bSyncWithReplication = false;
};

/**
 * Project-wide pooling configuration, edited under Project Settings > Game > Actor Pooling.
 * This is a compiled/config asset shipped identically to server and client builds, so pool
 * sizes for any given class always agree between server and client instances.
 */
UCLASS(config = Game, defaultconfig, meta = (DisplayName = "Actor Pool Settings"))
class ACTORPOOLING_API UActorPoolSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UActorPoolSettings();

	/** Default pool size for any poolable class without an explicit entry in ClassOverrides. */
	UPROPERTY(config, EditAnywhere, Category = "Pooling", meta = (ClampMin = "1"))
	int32 DefaultPoolSize = 10;

	/** Default recyclable behavior for any poolable class without an explicit entry in ClassOverrides. */
	UPROPERTY(config, EditAnywhere, Category = "Pooling")
	bool bDefaultRecyclable = true;

	/** Default prewarm behavior for any poolable class without an explicit entry in ClassOverrides. */
	UPROPERTY(config, EditAnywhere, Category = "Pooling")
	bool bDefaultPrewarmAtStart = false;

	/** Default pool location for any poolable class without an explicit entry in ClassOverrides. */
	UPROPERTY(config, EditAnywhere, Category = "Pooling")
	FVector DefaultPoolLocation = FVector::ZeroVector;

	/** Per-class overrides. Add an entry to customize pool size / recyclable / prewarm / location for a specific class. */
	UPROPERTY(config, EditAnywhere, Category = "Pooling")
	TArray<FPoolClassConfig> ClassOverrides;
};
