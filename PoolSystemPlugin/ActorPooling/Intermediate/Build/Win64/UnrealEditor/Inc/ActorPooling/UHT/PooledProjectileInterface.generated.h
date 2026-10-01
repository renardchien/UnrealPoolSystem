// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PooledProjectileInterface.h"

#ifdef ACTORPOOLING_PooledProjectileInterface_generated_h
#error "PooledProjectileInterface.generated.h already included, missing '#pragma once' in PooledProjectileInterface.h"
#endif
#define ACTORPOOLING_PooledProjectileInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPooledProjectileInterface *******************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ConfigureLaunch_Implementation(FVector const& InitialVelocity) {}; \
	DECLARE_FUNCTION(execConfigureLaunch);


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UPooledProjectileInterface_Statics;
ACTORPOOLING_API UClass* Z_Construct_UClass_UPooledProjectileInterface_NoRegister();

#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPooledProjectileInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPooledProjectileInterface(UPooledProjectileInterface&&) = delete; \
	UPooledProjectileInterface(const UPooledProjectileInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPooledProjectileInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPooledProjectileInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPooledProjectileInterface) \
	virtual ~UPooledProjectileInterface() = default;


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPooledProjectileInterface(); \
	friend struct ::Z_Construct_UClass_UPooledProjectileInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPOOLING_API UClass* ::Z_Construct_UClass_UPooledProjectileInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPooledProjectileInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActorPooling"), Z_Construct_UClass_UPooledProjectileInterface_NoRegister) \
	DECLARE_SERIALIZER(UPooledProjectileInterface)


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPooledProjectileInterface() {} \
public: \
	typedef UPooledProjectileInterface UClassType; \
	typedef IPooledProjectileInterface ThisClass; \
	static void Execute_ConfigureLaunch(UObject* O, FVector const& InitialVelocity); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_14_PROLOG
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_CALLBACK_WRAPPERS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPooledProjectileInterface;

// ********** End Interface UPooledProjectileInterface *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
