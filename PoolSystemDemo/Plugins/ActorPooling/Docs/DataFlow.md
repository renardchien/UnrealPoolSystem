# Data Flow

*Copyright (c) 2026 Cody Van De Mark. Licensed under the MIT License. Contact: cody.a.vandemark@gmail.com*

← [README](../README.md) · [Architecture](Architecture.md) · [API Reference](API-Reference.md)

Four flows cover everything the plugin does. Each one has two views: a **high-level flowchart** for the overall shape of what happens, and a **detailed sequence diagram** underneath showing the exact call path in the current code (not a simplification) — read the first for the gist, the second for precision.

## Acquire flow

`AcquireActor` has three possible outcomes depending on pool state and configuration:

### High-level view

```mermaid
flowchart TD
    Start(["AcquireActor called"]) --> Ensure["Find or create the pool, spawning it on first use"]
    Ensure --> Q1{"Inactive instance available?"}
    Q1 -->|Yes| PopInactive["Pop an instance from InactiveActors"]
    Q1 -->|No| Q2{"Pool is recyclable?"}
    Q2 -->|Yes| Recycle["Force-recycle the oldest active instance"]
    Q2 -->|No| Q3{"Debug growth enabled?"}
    Q3 -->|Yes| SpawnNew["Spawn one new instance, grow PoolSize by one"]
    Q3 -->|No| Fail(["Return nullptr"])
    PopInactive --> Activate["Activate: transform, Owner, Instigator, mark active, gameplay setup"]
    Recycle --> Activate
    SpawnNew --> Activate
    Activate --> Done(["Return the actor"])
```

### Detailed sequence

```mermaid
sequenceDiagram
    participant GameCode as Game code
    participant Sub as UActorPoolSubsystem
    participant PoolEntry as FActorClassPool
    participant PooledActor as Pooled actor
    participant Comp as UPoolableComponent

    GameCode->>Sub: AcquireActor(Class, Transform, Owner, Instigator)
    Sub->>PoolEntry: FindOrCreatePoolEntry
    Sub->>PoolEntry: SpawnInitialPoolIfNeeded, first time only

    alt Inactive instance available
        Sub->>PoolEntry: Pop from InactiveActors
    else Recyclable pool exhausted
        Sub->>PoolEntry: Take oldest entry in ActiveActorsOrdered
        Sub->>PooledActor: DeactivateActor, OnReturnedToPool then SetActiveInPool false
        PooledActor->>Comp: DefaultDeactivate
        Sub->>PooledActor: SetActorLocation(PoolLocation)
    else Non-recyclable, exhausted, debug grow enabled
        Sub->>PooledActor: SpawnPooledInstance, new instance
        Sub->>PoolEntry: PoolSize plus one, log warning
    else Non-recyclable, exhausted, no debug flag
        Sub-->>GameCode: return nullptr
    end

    Sub->>PooledActor: SetActorTransform(Transform)
    Sub->>PooledActor: SetOwner(Owner), SetInstigator(Instigator)
    opt Actor is replicated and this is not a client
        Sub->>PooledActor: FlushNetDormancy
    end
    Sub->>PooledActor: SetActiveInPool(true)
    PooledActor->>Comp: DefaultActivate
    Sub->>PooledActor: OnAcquiredFromPool, Owner and Instigator already correct
    Sub->>PoolEntry: Add to ActiveActorsOrdered
    Sub-->>GameCode: return actor
```

Key ordering guarantees:
- **Owner/Instigator are set before `SetActiveInPool`/`OnAcquiredFromPool` run**, so any gameplay setup code can already read `GetOwner()`/`GetInstigator()`.
- **Mechanical activation runs before the gameplay notification** (`SetActiveInPool(true)` before `OnAcquiredFromPool()`), per `IPoolableActorInterface`'s contract.

`AcquireActorBatch` is just this flow called once per entry in a `SpawnTransforms` array, collecting every non-null result — see [API Reference](API-Reference.md#acquireactorbatch).

## Return flow

### High-level view

```mermaid
flowchart TD
    Start(["ReturnActor called"]) --> Q1{"Actor currently tracked as active?"}
    Q1 -->|No| NoOp(["No-op: already returned, or never acquired here"])
    Q1 -->|Yes| Remove["Remove from ActiveActorsOrdered"]
    Remove --> Deactivate["Deactivate: gameplay teardown, mark inactive"]
    Deactivate --> Move["Move to PoolLocation, apply net dormancy if replicated"]
    Move --> Push["Push onto InactiveActors"]
    Push --> Done(["Ready to be acquired again"])
```

### Detailed sequence

```mermaid
sequenceDiagram
    participant GameCode as Game code
    participant Sub as UActorPoolSubsystem
    participant PoolEntry as FActorClassPool
    participant PooledActor as Pooled actor
    participant Comp as UPoolableComponent

    GameCode->>Sub: ReturnActor(Actor)
    Sub->>PoolEntry: Remove from ActiveActorsOrdered
    alt Actor was not tracked as active
        Sub-->>GameCode: no-op, already returned or never acquired
    end
    Sub->>PooledActor: OnReturnedToPool, actor still at its real last location
    Sub->>PooledActor: SetActiveInPool(false)
    PooledActor->>Comp: DefaultDeactivate
    opt Actor is replicated and this is not a client
        Sub->>PooledActor: SetNetDormancy DormantAll
    end
    Sub->>PooledActor: SetActorLocation(PoolLocation)
    Sub->>PoolEntry: Push onto InactiveActors
```

The most common entry point for this on a replicated actor is `UPoolableComponent::RequestReturnToPool()`, which gates on `HasAuthority()` before calling `ReturnActor` — so a client can never trigger this directly for a server-authoritative class.

`ReturnActorBatch` just calls this once per entry in an array — `ReturnActor` already no-ops safely on `nullptr` or an untracked actor, so no extra logic is needed.

## Replication sync flow

Only relevant for a class with `FPoolClassConfig::bSyncWithReplication` enabled — normally the *client's* copy of a replicated class's config, since the client never calls `AcquireActor`/`ReturnActor` for such a class itself.

### High-level view

```mermaid
flowchart TD
    A["Server: Acquire activates the actor, flushes net dormancy"] --> B["Network: actor replicates to the client for the first time"]
    B --> C["Client: OnRep_ActiveInPool fires, active becomes true"]
    C --> D{"bSyncWithReplication enabled for this class?"}
    D -->|No| E(["Client pool stays empty, nothing tracked"])
    D -->|Yes| F["Client pool adds the actor to ActiveActorsOrdered"]
    F --> G["Server: later Returns the actor, sets it net-dormant"]
    G --> H["Network: replicates active becomes false"]
    H --> I["Client: OnRep_ActiveInPool fires again"]
    I --> J["Client pool moves the actor to InactiveActors"]
```

### Detailed sequence

```mermaid
sequenceDiagram
    participant ServerSub as Server UActorPoolSubsystem
    participant ServerActor as Server actor, dormant while inactive
    participant Net as Replication
    participant ClientActor as Client local mirror actor
    participant ClientSub as Client UActorPoolSubsystem

    Note over ServerSub,ServerActor: Normal Acquire flow runs on the server only
    ServerSub->>ServerActor: ActivateActor, then FlushNetDormancy
    Note over ServerActor,Net: First moment this instance is visible to the network at all
    Net->>ClientActor: Spawn local actor, replicate bActiveInPool true
    ClientActor->>ClientActor: OnRep_ActiveInPool mirrors visuals
    ClientActor->>ClientSub: NotifySyncedActiveStateChanged(Actor, true)
    ClientSub->>ClientSub: If bSyncWithReplication, add actor to ActiveActorsOrdered

    Note over ServerSub,ClientSub: Later, the server returns the actor
    ServerSub->>ServerActor: DeactivateActor, then SetNetDormancy DormantAll
    Net->>ClientActor: Replicate bActiveInPool false
    ClientActor->>ClientSub: NotifySyncedActiveStateChanged(Actor, false)
    ClientSub->>ClientSub: Move actor from ActiveActorsOrdered to InactiveActors
```

Why this is safe from double-counting: `OnRep_ActiveInPool` only ever fires on a machine that *received* the value over the network — never on the machine that authored the change locally (the server's own `DefaultActivate`/`DefaultDeactivate` set the variable directly and don't trigger their own `OnRep`). So `NotifySyncedActiveStateChanged` can never fire on the same machine that's running the normal Acquire/Return flow above, even if the flag is left on everywhere via shared Project Settings.

Why `GetPoolStats`' `AvailableCount` is derived rather than counted directly for a synced pool: a client only ever learns an instance *exists* the first time it goes active (dormancy withholds it before that), so `InactiveActors` can only ever contain instances that have *already* been active at least once — never a pool member the client hasn't met yet. `GetPoolStats` compensates by reporting `AvailableCount = MaxPoolSize - UnavailableCount` for a synced pool instead of trusting the array size.

Cleanup: if a tracked instance is ever actually destroyed (not just deactivated) — e.g. a client losing relevancy — `HandleActorDestroyed` (hooked to `UWorld`'s actor-destroyed delegate) prunes it from both arrays so stale pointers don't accumulate.

## Non-replicated projectile fan-out flow

For a projectile class with `bReplicates = false`, fired via `UPooledProjectileLauncherComponent`:

### High-level view

```mermaid
flowchart TD
    A(["LaunchProjectile called, server only"]) --> B["Server acquires the authoritative projectile from its own pool"]
    B --> C["Server applies launch velocity via ConfigureLaunch"]
    B --> D["Server fires an unreliable multicast to every client"]
    D --> E["Each client acquires its own cosmetic projectile from its own pool"]
    E --> F["Each client applies launch velocity via ConfigureLaunch"]
    F --> G(["Every instance now simulates locally, no further network traffic"])
```

### Detailed sequence

```mermaid
sequenceDiagram
    participant Weapon as Server firing logic
    participant Launcher as UPooledProjectileLauncherComponent
    participant ServerSub as Server UActorPoolSubsystem
    participant Clients as Every client, unreliable multicast
    participant ClientSub as Client UActorPoolSubsystem

    Weapon->>Launcher: LaunchProjectile(Class, Transform, Velocity, Owner, Instigator)
    Launcher->>ServerSub: AcquireActor, server's own local pool
    Launcher->>Launcher: ApplyLaunchConfiguration, then ConfigureLaunch(Velocity)
    Note over Launcher: This is the authoritative instance, the only one that counts for damage
    Launcher->>Clients: Multicast_SpawnCosmeticProjectile
    Clients->>ClientSub: AcquireActor, each client's own independent local pool
    Clients->>Clients: ApplyLaunchConfiguration, then ConfigureLaunch(Velocity)
    Note over ServerSub,ClientSub: Each instance now simulates entirely locally, no further network traffic
```

Listen-server note: a listen server's own client also receives the multicast. `Multicast_SpawnCosmeticProjectile_Implementation` checks `HasAuthority() && GetNetMode() == NM_ListenServer` and skips, so the host doesn't spawn a redundant second cosmetic copy alongside its authoritative one.
