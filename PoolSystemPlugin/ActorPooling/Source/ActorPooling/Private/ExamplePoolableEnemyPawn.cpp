// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Implementation of the example replicated poolable enemy pawn.

#include "ExamplePoolableEnemyPawn.h"
#include "PoolableComponent.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/CharacterMovementComponent.h"

AExamplePoolableEnemyPawn::AExamplePoolableEnemyPawn()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true; // default for ACharacter, stated explicitly since it's the key difference from AExamplePoolableProjectile

	PoolableComponent = CreateDefaultSubobject<UPoolableComponent>(TEXT("PoolableComponent"));

	// If you want an AI controller to persist across pool cycles rather than being spawned
	// and destroyed each time, keep AutoPossessAI on and pause/resume its brain component
	// in SetActiveInPool_Implementation below instead of unpossessing.
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void AExamplePoolableEnemyPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AExamplePoolableEnemyPawn, CurrentHealth);
}

void AExamplePoolableEnemyPawn::SetActiveInPool_Implementation(bool bNewActive)
{
	if (bNewActive)
	{
		PoolableComponent->DefaultActivate();

		if (UCharacterMovementComponent* Movement = GetCharacterMovement())
		{
			Movement->StopMovementImmediately();
			Movement->SetMovementMode(MOVE_Walking);
		}

		// Resume AI behavior here - e.g. if (AAIController* AIC = Cast<AAIController>(GetController())) { AIC->BrainComponent->RestartLogic(); }
	}
	else
	{
		if (UCharacterMovementComponent* Movement = GetCharacterMovement())
		{
			Movement->StopMovementImmediately();
			Movement->SetMovementMode(MOVE_None);
		}

		// Pause AI behavior here - e.g. if (AAIController* AIC = Cast<AAIController>(GetController())) { AIC->BrainComponent->StopLogic(TEXT("Pooled")); }

		PoolableComponent->DefaultDeactivate();
	}
}

bool AExamplePoolableEnemyPawn::GetActiveInPool_Implementation() const
{
	return PoolableComponent->bActiveInPool;
}

void AExamplePoolableEnemyPawn::OnAcquiredFromPool_Implementation()
{
	// This runs on the server only. Clients never call AcquireActor/OnAcquiredFromPool
	// directly for a replicated class, they simply observe the results (transform, health,
	// PoolableComponent::bActiveInPool) via normal actor replication.
	CurrentHealth = MaxHealth;
	HandleHealthChanged();

	// Add server-side gameplay setup here - e.g. reset AI blackboard values, re-enable abilities.
}

void AExamplePoolableEnemyPawn::OnReturnedToPool_Implementation()
{
	OnEnemyDied.Broadcast(this);

	// Add server-side gameplay teardown here - e.g. clear AI blackboard, cancel active abilities.
}

void AExamplePoolableEnemyPawn::ApplyDamage(float DamageAmount)
{
	if (!HasAuthority())
	{
		return; // damage is a server-authoritative decision, same as the pooling decisions themselves
	}

	CurrentHealth = FMath::Clamp(CurrentHealth - DamageAmount, 0.0f, MaxHealth);
	HandleHealthChanged();

	if (CurrentHealth <= 0.0f)
	{
		PoolableComponent->RequestReturnToPool();
	}
}

void AExamplePoolableEnemyPawn::OnRep_CurrentHealth()
{
	HandleHealthChanged();
}

void AExamplePoolableEnemyPawn::HandleHealthChanged()
{
	// Add shared server+client reactions here - e.g. update a health bar widget, play a hit flinch.
}
