// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoolableComponent.h"

#ifdef ACTORPOOLING_PoolableComponent_generated_h
#error "PoolableComponent.generated.h already included, missing '#pragma once' in PoolableComponent.h"
#endif
#define ACTORPOOLING_PoolableComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnPoolActiveStateChanged *********************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_14_DELEGATE \
ACTORPOOLING_API void FOnPoolActiveStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPoolActiveStateChanged, bool bIsActive);


// ********** End Delegate FOnPoolActiveStateChanged ***********************************************

// ********** Begin Class UPoolableComponent *******************************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ActiveInPool); \
	DECLARE_FUNCTION(execDefaultDeactivate); \
	DECLARE_FUNCTION(execDefaultActivate); \
	DECLARE_FUNCTION(execRequestReturnToPool);


struct Z_Construct_UClass_UPoolableComponent_Statics;
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableComponent_NoRegister();

#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoolableComponent(); \
	friend struct ::Z_Construct_UClass_UPoolableComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPOOLING_API UClass* ::Z_Construct_UClass_UPoolableComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoolableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorPooling"), Z_Construct_UClass_UPoolableComponent_NoRegister) \
	DECLARE_SERIALIZER(UPoolableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bActiveInPool=NETFIELD_REP_START, \
		NETFIELD_REP_END=bActiveInPool	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolableComponent(UPoolableComponent&&) = delete; \
	UPoolableComponent(const UPoolableComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolableComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoolableComponent) \
	NO_API virtual ~UPoolableComponent();


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_28_PROLOG
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolableComponent;

// ********** End Class UPoolableComponent *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
