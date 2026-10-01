// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Example poolable enemy pawn demonstrating the replicated, server-authoritative pooling case.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PoolableActorInterface.h"
#include "ExamplePoolableEnemyPawn.generated.h"

class UPoolableComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExampleEnemyDied, AExamplePoolableEnemyPawn*, DeadEnemy);

/**
 * Example poolable enemy pawn. Demonstrates the REPLICATED case for actor pooling. Unlike
 * AExamplePoolableProjectile, this class leaves bReplicates at its default (true, inherited
 * from ACharacter) because its movement, health, and other gameplay state genuinely need to
 * reach clients.
 *
 * UActorPoolSubsystem automatically applies net dormancy (DORM_DormantAll) to this actor
 * while it sits inactive in the pool, and flushes dormancy the moment it's acquired - see
 * UActorPoolSubsystem::ActivateActor/DeactivateActor, gated on GetIsReplicated(). You don't
 * need to do anything dormancy-related in this class yourself.
 *
 * Also unlike the projectile example: AcquireActor/ReturnActor for this class are only ever
 * called on the server (this pawn's one authoritative instance lives on the server; clients
 * simply observe the results via normal actor replication + PoolableComponent's replicated
 * bActiveInPool flag). Treat this as a template: swap in your own AI controller possession,
 * behavior tree, animation, and damage logic.
 *
 * Since a client's own UActorPoolSubsystem never Acquires/Returns this class itself, its pool
 * bookkeeping for this class (InactiveActors/ActiveActorsOrdered, GetPoolStats) has nothing to
 * go on by default. Enable FPoolClassConfig::bSyncWithReplication for this class (in Project
 * Settings, or via RegisterPoolClass) to have each client's pool passively track these
 * server-authoritative instances via PoolableComponent's replicated flag instead.
 */
UCLASS()
class ACTORPOOLING_API AExamplePoolableEnemyPawn : public ACharacter, public IPoolableActorInterface
{
	GENERATED_BODY()

public:
	AExamplePoolableEnemyPawn();

	UPROPERTY(BlueprintAssignable, Category = "Pooling")
	FOnExampleEnemyDied OnEnemyDied;

	/** Server-only: applies damage and, if it drops health to zero, returns this pawn to its pool. */
	UFUNCTION(BlueprintCallable, Category = "Pooling")
	void ApplyDamage(float DamageAmount);

	// -- IPoolableActorInterface --
	virtual void OnAcquiredFromPool_Implementation() override;
	virtual void OnReturnedToPool_Implementation() override;
	virtual bool GetActiveInPool_Implementation() const override;
	virtual void SetActiveInPool_Implementation(bool bNewActive) override;

protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** Handles activate/deactivate mechanics and replicates the active-state flag to clients. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pooling")
	TObjectPtr<UPoolableComponent> PoolableComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Pooling")
	float MaxHealth = 100.0f;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth, BlueprintReadOnly, Category = "Pooling")
	float CurrentHealth = 100.0f;

	UFUNCTION()
	void OnRep_CurrentHealth();

	/** Runs on every machine whenever CurrentHealth changes (server via ApplyDamage, clients via OnRep). Hook up hit reactions/health bar updates here. */
	void HandleHealthChanged();
};
