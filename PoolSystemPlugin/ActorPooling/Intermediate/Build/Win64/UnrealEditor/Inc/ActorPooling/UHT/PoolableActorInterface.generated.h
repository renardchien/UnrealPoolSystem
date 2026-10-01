// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoolableActorInterface.h"

#ifdef ACTORPOOLING_PoolableActorInterface_generated_h
#error "PoolableActorInterface.generated.h already included, missing '#pragma once' in PoolableActorInterface.h"
#endif
#define ACTORPOOLING_PoolableActorInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPoolableActorInterface **********************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetActiveInPool_Implementation(bool bNewActive) {}; \
	virtual bool GetActiveInPool_Implementation() const { return false; }; \
	virtual void OnReturnedToPool_Implementation() {}; \
	virtual void OnAcquiredFromPool_Implementation() {}; \
	DECLARE_FUNCTION(execSetActiveInPool); \
	DECLARE_FUNCTION(execGetActiveInPool); \
	DECLARE_FUNCTION(execOnReturnedToPool); \
	DECLARE_FUNCTION(execOnAcquiredFromPool);


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPoolableActorInterface_Statics;
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableActorInterface_NoRegister();

#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoolableActorInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolableActorInterface(UPoolableActorInterface&&) = delete; \
	UPoolableActorInterface(const UPoolableActorInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolableActorInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolableActorInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoolableActorInterface) \
	virtual ~UPoolableActorInterface() = default;


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPoolableActorInterface(); \
	friend struct ::Z_Construct_UClass_UPoolableActorInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPOOLING_API UClass* ::Z_Construct_UClass_UPoolableActorInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoolableActorInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActorPooling"), Z_Construct_UClass_UPoolableActorInterface_NoRegister) \
	DECLARE_SERIALIZER(UPoolableActorInterface)


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPoolableActorInterface() {} \
public: \
	typedef UPoolableActorInterface UClassType; \
	typedef IPoolableActorInterface ThisClass; \
	static bool Execute_GetActiveInPool(const UObject* O); \
	static void Execute_OnAcquiredFromPool(UObject* O); \
	static void Execute_OnReturnedToPool(UObject* O); \
	static void Execute_SetActiveInPool(UObject* O, bool bNewActive); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_14_PROLOG
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_CALLBACK_WRAPPERS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolableActorInterface;

// ********** End Interface UPoolableActorInterface ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
