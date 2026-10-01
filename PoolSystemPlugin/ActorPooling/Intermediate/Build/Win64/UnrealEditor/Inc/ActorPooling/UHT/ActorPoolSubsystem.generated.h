// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorPoolSubsystem.h"

#ifdef ACTORPOOLING_ActorPoolSubsystem_generated_h
#error "ActorPoolSubsystem.generated.h already included, missing '#pragma once' in ActorPoolSubsystem.h"
#endif
#define ACTORPOOLING_ActorPoolSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class UClass;

// ********** Begin ScriptStruct FActorClassPool ***************************************************
struct Z_Construct_UScriptStruct_FActorClassPool_Statics;
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FActorClassPool_Statics; \
	ACTORPOOLING_API static class UScriptStruct* StaticStruct();


struct FActorClassPool;
// ********** End ScriptStruct FActorClassPool *****************************************************

// ********** Begin Class UActorPoolSubsystem ******************************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPoolStats); \
	DECLARE_FUNCTION(execPrewarmPool); \
	DECLARE_FUNCTION(execReturnActorBatch); \
	DECLARE_FUNCTION(execReturnActor); \
	DECLARE_FUNCTION(execAcquireActorBatch); \
	DECLARE_FUNCTION(execGetLocationVariance); \
	DECLARE_FUNCTION(execAcquireActor); \
	DECLARE_FUNCTION(execRegisterPoolClass);


struct Z_Construct_UClass_UActorPoolSubsystem_Statics;
ACTORPOOLING_API UClass* Z_Construct_UClass_UActorPoolSubsystem_NoRegister();

#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorPoolSubsystem(); \
	friend struct ::Z_Construct_UClass_UActorPoolSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPOOLING_API UClass* ::Z_Construct_UClass_UActorPoolSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorPoolSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorPooling"), Z_Construct_UClass_UActorPoolSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UActorPoolSubsystem)


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorPoolSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorPoolSubsystem(UActorPoolSubsystem&&) = delete; \
	UActorPoolSubsystem(const UActorPoolSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorPoolSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorPoolSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorPoolSubsystem) \
	NO_API virtual ~UActorPoolSubsystem();


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_47_PROLOG
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_50_INCLASS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorPoolSubsystem;

// ********** End Class UActorPoolSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
