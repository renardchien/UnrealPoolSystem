// Copyright (c) 2026 Cody Van De Mark. All rights reserved.
// Licensed under the MIT License.
// Contact: cody.a.vandemark@gmail.com
//
// Implementation of UPooledProjectileLauncherComponent.

#include "PooledProjectileLauncherComponent.h"
#include "ActorPoolSubsystem.h"
#include "PooledProjectileInterface.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

UPooledProjectileLauncherComponent::UPooledProjectileLauncherComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
	SetIsReplicatedByDefault(true);
}

AActor* UPooledProjectileLauncherComponent::LaunchProjectile(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, const FVector& InitialVelocity, AActor* ProjectileOwner, APawn* ProjectileInstigator)
{
	AActor* Owner = GetOwner();
	if (!Owner || !Owner->HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("LaunchProjectile called without authority: ignoring. Only call this on the server."));
		return nullptr;
	}

	UWorld* World = Owner->GetWorld();
	if (!World)
	{
		return nullptr;
	}

	UActorPoolSubsystem* Subsystem = World->GetSubsystem<UActorPoolSubsystem>();
	if (!Subsystem)
	{
		return nullptr;
	}

	AActor* Authoritative = Subsystem->AcquireActor(ProjectileClass, SpawnTransform, ProjectileOwner, ProjectileInstigator);
	if (!Authoritative)
	{
		// Pool exhausted (non-recyclable) or otherwise unavailable, caller decides how to handle.
		return nullptr;
	}

	ApplyLaunchConfiguration(Authoritative, InitialVelocity);

	Multicast_SpawnCosmeticProjectile(ProjectileClass, SpawnTransform, InitialVelocity, ProjectileOwner, ProjectileInstigator);

	return Authoritative;
}

void UPooledProjectileLauncherComponent::Multicast_SpawnCosmeticProjectile_Implementation(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, const FVector& InitialVelocity, AActor* ProjectileOwner, APawn* ProjectileInstigator)
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	// Listen-server host: the authoritative projectile was already spawned in LaunchProjectile
	// above on this same machine - don't spawn a second, redundant cosmetic copy locally.
	if (Owner->HasAuthority() && Owner->GetNetMode() == NM_ListenServer)
	{
		return;
	}

	AcquireAndInitializeLocalProjectile(ProjectileClass, SpawnTransform, InitialVelocity, ProjectileOwner, ProjectileInstigator);
}

void UPooledProjectileLauncherComponent::AcquireAndInitializeLocalProjectile(TSubclassOf<AActor> ProjectileClass, const FTransform& SpawnTransform, const FVector& InitialVelocity, AActor* ProjectileOwner, APawn* ProjectileInstigator)
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	UWorld* World = Owner->GetWorld();
	if (!World)
	{
		return;
	}

	UActorPoolSubsystem* Subsystem = World->GetSubsystem<UActorPoolSubsystem>();
	if (!Subsystem)
	{
		return;
	}

	AActor* Cosmetic = Subsystem->AcquireActor(ProjectileClass, SpawnTransform, ProjectileOwner, ProjectileInstigator);
	if (!Cosmetic)
	{
		return;
	}

	ApplyLaunchConfiguration(Cosmetic, InitialVelocity);
}

void UPooledProjectileLauncherComponent::ApplyLaunchConfiguration(AActor* Actor, const FVector& InitialVelocity)
{
	// AcquireActor has already applied Owner/Instigator and run SetActiveInPool(true)/
	// OnAcquiredFromPool() by the time it returns, per its own contract - so velocity is safe to
	// apply immediately here rather than waiting on a delegate.
	if (Actor->Implements<UPooledProjectileInterface>())
	{
		IPooledProjectileInterface::Execute_ConfigureLaunch(Actor, InitialVelocity);
	}
	else
	{
		// ProjectileClass doesn't implement IPooledProjectileInterface - Owner/Instigator were
		// still applied by AcquireActor, but nothing will apply InitialVelocity. Implement the
		// interface on your projectile class (see
		// AExamplePoolableProjectile::ConfigureLaunch_Implementation for a minimal example) if it
		// needs launch velocity.
		UE_LOG(LogTemp, Warning, TEXT("UPooledProjectileLauncherComponent: %s does not implement IPooledProjectileInterface - InitialVelocity was not applied."), *GetNameSafe(Actor->GetClass()));
	}
}
