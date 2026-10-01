# API Reference

*Copyright (c) 2026 Cody Van De Mark. Licensed under the MIT License. Contact: cody.a.vandemark@gmail.com*

← [README](../README.md) · [Architecture](Architecture.md) · [Data Flow](DataFlow.md)

All functions below are `BlueprintCallable` or `BlueprintPure` unless noted otherwise, so everything here is usable from both C++ and Blueprint.

## `UActorPoolSubsystem`

Get it with `GetWorld()->GetSubsystem<UActorPoolSubsystem>()` (C++) or a **Get Actor Pool Subsystem** node (Blueprint).

### `RegisterPoolClass`
```cpp
void RegisterPoolClass(TSubclassOf<AActor> ActorClass, int32 PoolSize, bool bRecyclable,
                        bool bPrewarmAtStart = false, bool bDebugGrowPoolWhenExhausted = false,
                        FVector PoolLocation = FVector::ZeroVector, bool bSyncWithReplication = false);
```
Registers or overrides pooling configuration for a class **before it's first used**. Once the pool has been spawned (first `AcquireActor` call, or an earlier `PrewarmPool`), this is a no-op (logs a warning) — call it early, e.g. from `GameMode`/`GameState` `BeginPlay`. `PoolSize` is clamped to a minimum of 1.

### `AcquireActor`
```cpp
AActor* AcquireActor(TSubclassOf<AActor> ActorClass, const FTransform& SpawnTransform,
                      AActor* NewOwner = nullptr, APawn* NewInstigator = nullptr);
```
Acquires an actor of the given class, activates it at `SpawnTransform`, and returns it. Returns `nullptr` if the class is non-recyclable and exhausted (unless `bDebugGrowPoolWhenExhausted` is set — see below). Creates and spawns the pool for this class on first call if it wasn't already prewarmed. `NewOwner`/`NewInstigator` are applied before `SetActiveInPool`/`OnAcquiredFromPool` run; omit them to leave Owner/Instigator untouched. See [Data Flow](DataFlow.md#acquire-flow) for the full sequence.

### `AcquireActorBatch`
```cpp
bool AcquireActorBatch(TSubclassOf<AActor> ActorClass, const TArray<FTransform>& SpawnTransforms,
                        TArray<AActor*>& AcquiredActors, AActor* NewOwner = nullptr,
                        APawn* NewInstigator = nullptr);
```
Calls `AcquireActor` once per entry in `SpawnTransforms`. `AcquiredActors` gets one entry per success, in order — a failed entry simply contributes nothing, so `AcquiredActors.Num()` can be less than `SpawnTransforms.Num()`. Returns `true` only if every requested actor was acquired.

### `GetLocationVariance` *(static)*
```cpp
static TArray<FTransform> GetLocationVariance(const FTransform& BaseTransform, int32 NumLocations,
                                               float VarianceOffset = 200.0f);
```
Builds a `SpawnTransforms` array for `AcquireActorBatch` from one base transform. Result[0] is an exact copy of `BaseTransform`. Each entry after that is offset in X/Y only (Z/rotation/scale untouched) along one of 8 compass directions, cycling every 8 entries, with magnitude `index * VarianceOffset` — so offsets grow every entry and no two ever coincide. Returns an empty array for `NumLocations <= 0`.

### `ReturnActor`
```cpp
void ReturnActor(AActor* Actor);
```
Deactivates the actor and returns it to its class pool. No-op if the actor isn't currently tracked as active (already returned, or never acquired through this pool). See [Data Flow](DataFlow.md#return-flow).

### `ReturnActorBatch`
```cpp
void ReturnActorBatch(const TArray<AActor*>& Actors);
```
Calls `ReturnActor` once per entry.

### `PrewarmPool`
```cpp
void PrewarmPool(TSubclassOf<AActor> ActorClass);
```
Forces immediate spawn of the full configured pool for a class, if not already spawned. Equivalent to what happens automatically at world `BeginPlay` for any class with `bPrewarmAtStart` set.

### `GetPoolStats`
```cpp
void GetPoolStats(TSubclassOf<AActor> ActorClass, int32& MaxPoolSize, int32& AvailableCount,
                   int32& UnavailableCount) const;
```
Read-only, side-effect-free (never creates a pool entry). `MaxPoolSize` is the class's current capacity — falls back to what it *would* be, from settings, if the class was never used. `AvailableCount`/`UnavailableCount` are inactive/active instance counts. For a class with `bSyncWithReplication` on, `AvailableCount` is derived (`MaxPoolSize - UnavailableCount`) rather than counted directly — see [Data Flow](DataFlow.md#replication-sync-flow) for why.

### `NotifySyncedActiveStateChanged` *(not Blueprint-exposed)*
```cpp
void NotifySyncedActiveStateChanged(AActor* Actor, bool bNewActive);
```
Internal plumbing, called by `UPoolableComponent::OnRep_ActiveInPool`. You shouldn't need to call this yourself — see [Data Flow](DataFlow.md#replication-sync-flow).

---

## `FPoolClassConfig`

Per-class configuration struct (`BlueprintType`). Set via a `UActorPoolSettings::ClassOverrides` entry (Project Settings) or via `RegisterPoolClass`.

| Field | Type | Default | Meaning |
|---|---|---|---|
| `ActorClass` | `TSoftClassPtr<AActor>` | — | Which class this entry configures (only used when matching entries in `ClassOverrides`). |
| `PoolSize` | `int32` | `10` | How many instances to maintain. Clamped to a minimum of 1. |
| `bRecyclable` | `bool` | `true` | See [Core Concepts](../README.md#core-concepts). |
| `bPrewarmAtStart` | `bool` | `false` | Spawn the full pool at world `BeginPlay` instead of lazily on first `Acquire`. |
| `bDebugGrowPoolWhenExhausted` | `bool` | `false` | Debug aid. Only applies while `bRecyclable` is false: instead of returning `nullptr` when exhausted, spawns one more instance, permanently grows `PoolSize`, and logs a warning. Not intended to stay on in a shipped build — it defeats the actor-count cap pooling exists to enforce. |
| `PoolLocation` | `FVector` | `(0,0,0)` | Where instances are spawned before first use, and moved back to on every Return. Purely a parking spot — inactive instances are already hidden/non-colliding/non-ticking regardless. |
| `bSyncWithReplication` | `bool` | `false` | For a pool that *this machine* never calls Acquire/Return for itself (typically a client's copy of a replicated class). Keeps this pool's bookkeeping in sync with `UPoolableComponent`'s replicated flag instead of spawning/acquiring anything. See [Data Flow](DataFlow.md#replication-sync-flow). |

## `UActorPoolSettings`

Project Settings asset (`config = Game, defaultconfig` — ships identically to server and client builds), under **Project Settings > Game > Actor Pool Settings**.

| Field | Type | Default | Meaning |
|---|---|---|---|
| `DefaultPoolSize` | `int32` | `10` | Used by any class without a matching `ClassOverrides` entry. |
| `bDefaultRecyclable` | `bool` | `true` | Ditto. |
| `bDefaultPrewarmAtStart` | `bool` | `false` | Ditto. |
| `DefaultPoolLocation` | `FVector` | `(0,0,0)` | Ditto. |
| `ClassOverrides` | `TArray<FPoolClassConfig>` | empty | Per-class entries. An entry fully replaces the defaults for its `ActorClass` (including `bDebugGrowPoolWhenExhausted`/`bSyncWithReplication`, which have no separate project-wide default — only per-class). |

---

## `IPoolableActorInterface`

Implement on any `AActor` subclass you want pooled (C++: override the `_Implementation` functions; Blueprint: override the events under Class Settings > Interfaces).

| Function | Called when | Use it for |
|---|---|---|
| `SetActiveInPool(bool bNewActive)` | Mechanical activate/deactivate | Visibility, collision, tick — typically just forwards to `UPoolableComponent::DefaultActivate`/`DefaultDeactivate`. |
| `OnAcquiredFromPool()` | After `SetActiveInPool(true)` | Gameplay setup: reset health/state, re-enable VFX, start behavior. |
| `OnReturnedToPool()` | Before `SetActiveInPool(false)` | Gameplay teardown: stop timers, clear VFX, unbind delegates, cancel abilities. |
| `GetActiveInPool() const` | On demand | Report whether the actor currently considers itself active. |

**Call-order guarantee:** `SetActiveInPool(true)` → `OnAcquiredFromPool()` on Acquire; `OnReturnedToPool()` → `SetActiveInPool(false)` on Return. Gameplay notifications always run while the actor is mechanically "active."

## `IPooledProjectileInterface`

Companion interface for actors fired through `UPooledProjectileLauncherComponent`.

| Function | Called when |
|---|---|
| `ConfigureLaunch(const FVector& InitialVelocity)` | Once per acquire, immediately after `AcquireActor` returns — after `OnAcquiredFromPool()` and after Owner/Instigator are already applied. |

A class that doesn't implement this interface is simply skipped by the launcher (Owner/Instigator are still applied; a warning is logged that velocity wasn't).

---

## `UPoolableComponent`

Optional convenience component (`BlueprintSpawnableComponent`).

| Member | Kind | Notes |
|---|---|---|
| `RequestReturnToPool()` | Function | Calls `UActorPoolSubsystem::ReturnActor` for the owner. Only has effect with authority — safe to expose to Blueprint event graphs without an extra check. |
| `DefaultActivate()` | Function | Unhide, enable collision, enable tick. Sets `bActiveInPool = true` and broadcasts `OnPoolActiveStateChanged`. |
| `DefaultDeactivate()` | Function | The reverse. |
| `bActiveInPool` | `bool`, replicated | `BlueprintReadOnly`. Drives `OnRep_ActiveInPool` on clients. |
| `OnPoolActiveStateChanged` | `FOnPoolActiveStateChanged(bool)`, `BlueprintAssignable` | Fires on every transition, server (`Default*`) or client (`OnRep`). Hook up VFX/SFX here without subclassing. |
| `OnRep_ActiveInPool()` | Function | Mirrors mechanical state on clients and feeds `bSyncWithReplication` tracking — see [Data Flow](DataFlow.md#replication-sync-flow). |

## `UPooledProjectileLauncherComponent`

Attach to a weapon/pawn that fires pooled, non-replicated actors (`BlueprintSpawnableComponent`).

### `LaunchProjectile`
```cpp
AActor* LaunchProjectile(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform,
                          const FVector& InitialVelocity, AActor* ProjectileOwner = nullptr,
                          APawn* ProjectileInstigator = nullptr);
```
Call only on the server, from already-validated fire logic. Acquires the authoritative projectile from the server's own local pool, then triggers a cosmetic acquire on every client via an unreliable multicast. Returns the authoritative (server-side) actor, or `nullptr` if the pool couldn't provide one. See [Data Flow](DataFlow.md#non-replicated-projectile-fan-out-flow).
