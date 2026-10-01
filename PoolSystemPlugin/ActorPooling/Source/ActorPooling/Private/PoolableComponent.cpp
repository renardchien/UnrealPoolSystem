// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Implementation of UPoolableComponent.

#include "PoolableComponent.h"
#include "ActorPoolSubsystem.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

UPoolableComponent::UPoolableComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

void UPoolableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UPoolableComponent, bActiveInPool);
}

void UPoolableComponent::RequestReturnToPool()
{
	AActor* Owner = GetOwner();
	if (!Owner || !Owner->HasAuthority())
	{
		// Pooling decisions are server-authoritative. If you need a client-requested return
		// (e.g. for a predicted local effect), route it through a Server RPC on your own
		// actor/weapon class rather than calling this directly from a client.
		return;
	}

	if (UWorld* World = Owner->GetWorld())
	{
		if (UActorPoolSubsystem* Subsystem = World->GetSubsystem<UActorPoolSubsystem>())
		{
			Subsystem->ReturnActor(Owner);
		}
	}
}

void UPoolableComponent::DefaultActivate()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	Owner->SetActorHiddenInGame(false);
	Owner->SetActorEnableCollision(true);
	Owner->SetActorTickEnabled(true);

	bActiveInPool = true;
	OnPoolActiveStateChanged.Broadcast(true);
}

void UPoolableComponent::DefaultDeactivate()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	Owner->SetActorHiddenInGame(true);
	Owner->SetActorEnableCollision(false);
	Owner->SetActorTickEnabled(false);

	bActiveInPool = false;
	OnPoolActiveStateChanged.Broadcast(false);
}

void UPoolableComponent::OnRep_ActiveInPool()
{
	// Clients mirror the mechanical activation state here. Gameplay notifications
	// (OnAcquiredFromPool/OnReturnedToPool) are driven directly by whichever machine's
	// subsystem actually performed the acquire/return. See UActorPoolSubsystem.
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	Owner->SetActorHiddenInGame(!bActiveInPool);
	Owner->SetActorEnableCollision(bActiveInPool);
	Owner->SetActorTickEnabled(bActiveInPool);

	OnPoolActiveStateChanged.Broadcast(bActiveInPool);

	// This only ever runs on a machine that received bActiveInPool over the network rather than
	// authoring it locally. This is the case FPoolClassConfig::bSyncWithReplication exists for
	// (e.g. a client keeping its own pool bookkeeping in sync with a server-authoritative class).
	if (UWorld* World = Owner->GetWorld())
	{
		if (UActorPoolSubsystem* Subsystem = World->GetSubsystem<UActorPoolSubsystem>())
		{
			Subsystem->NotifySyncedActiveStateChanged(Owner, bActiveInPool);
		}
	}
}
