// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PooledProjectileLauncherComponent.h"

#ifdef ACTORPOOLING_PooledProjectileLauncherComponent_generated_h
#error "PooledProjectileLauncherComponent.generated.h already included, missing '#pragma once' in PooledProjectileLauncherComponent.h"
#endif
#define ACTORPOOLING_PooledProjectileLauncherComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UClass;

// ********** Begin Class UPooledProjectileLauncherComponent ***************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SpawnCosmeticProjectile_Implementation(TSubclassOf<AActor> ProjectileClass, FTransform const& SpawnTransform, FVector const& InitialVelocity, AActor* ProjectileOwner, APawn* ProjectileInstigator); \
	DECLARE_FUNCTION(execMulticast_SpawnCosmeticProjectile); \
	DECLARE_FUNCTION(execLaunchProjectile);


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics;
ACTORPOOLING_API UClass* Z_Construct_UClass_UPooledProjectileLauncherComponent_NoRegister();

#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPooledProjectileLauncherComponent(); \
	friend struct ::Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPOOLING_API UClass* ::Z_Construct_UClass_UPooledProjectileLauncherComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPooledProjectileLauncherComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorPooling"), Z_Construct_UClass_UPooledProjectileLauncherComponent_NoRegister) \
	DECLARE_SERIALIZER(UPooledProjectileLauncherComponent)


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPooledProjectileLauncherComponent(UPooledProjectileLauncherComponent&&) = delete; \
	UPooledProjectileLauncherComponent(const UPooledProjectileLauncherComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPooledProjectileLauncherComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPooledProjectileLauncherComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPooledProjectileLauncherComponent) \
	NO_API virtual ~UPooledProjectileLauncherComponent();


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_30_PROLOG
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_CALLBACK_WRAPPERS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_INCLASS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPooledProjectileLauncherComponent;

// ********** End Class UPooledProjectileLauncherComponent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
