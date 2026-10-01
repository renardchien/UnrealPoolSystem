// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExamplePoolableProjectile.h"

#ifdef ACTORPOOLING_ExamplePoolableProjectile_generated_h
#error "ExamplePoolableProjectile.generated.h already included, missing '#pragma once' in ExamplePoolableProjectile.h"
#endif
#define ACTORPOOLING_ExamplePoolableProjectile_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AExamplePoolableProjectile ***********************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLaunchVelocity);


struct Z_Construct_UClass_AExamplePoolableProjectile_Statics;
ACTORPOOLING_API UClass* Z_Construct_UClass_AExamplePoolableProjectile_NoRegister();

#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExamplePoolableProjectile(); \
	friend struct ::Z_Construct_UClass_AExamplePoolableProjectile_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPOOLING_API UClass* ::Z_Construct_UClass_AExamplePoolableProjectile_NoRegister(); \
public: \
	DECLARE_CLASS2(AExamplePoolableProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorPooling"), Z_Construct_UClass_AExamplePoolableProjectile_NoRegister) \
	DECLARE_SERIALIZER(AExamplePoolableProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AExamplePoolableProjectile*>(this); }


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h_38_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AExamplePoolableProjectile(AExamplePoolableProjectile&&) = delete; \
	AExamplePoolableProjectile(const AExamplePoolableProjectile&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExamplePoolableProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExamplePoolableProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExamplePoolableProjectile) \
	NO_API virtual ~AExamplePoolableProjectile();


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h_35_PROLOG
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h_38_INCLASS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AExamplePoolableProjectile;

// ********** End Class AExamplePoolableProjectile *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
