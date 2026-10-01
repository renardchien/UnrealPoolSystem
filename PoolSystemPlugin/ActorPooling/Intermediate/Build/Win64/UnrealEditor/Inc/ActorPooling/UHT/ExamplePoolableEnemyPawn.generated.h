// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExamplePoolableEnemyPawn.h"

#ifdef ACTORPOOLING_ExamplePoolableEnemyPawn_generated_h
#error "ExamplePoolableEnemyPawn.generated.h already included, missing '#pragma once' in ExamplePoolableEnemyPawn.h"
#endif
#define ACTORPOOLING_ExamplePoolableEnemyPawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AExamplePoolableEnemyPawn;

// ********** Begin Delegate FOnExampleEnemyDied ***************************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_16_DELEGATE \
ACTORPOOLING_API void FOnExampleEnemyDied_DelegateWrapper(const FMulticastScriptDelegate& OnExampleEnemyDied, AExamplePoolableEnemyPawn* DeadEnemy);


// ********** End Delegate FOnExampleEnemyDied *****************************************************

// ********** Begin Class AExamplePoolableEnemyPawn ************************************************
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentHealth); \
	DECLARE_FUNCTION(execApplyDamage);


struct Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics;
ACTORPOOLING_API UClass* Z_Construct_UClass_AExamplePoolableEnemyPawn_NoRegister();

#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExamplePoolableEnemyPawn(); \
	friend struct ::Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPOOLING_API UClass* ::Z_Construct_UClass_AExamplePoolableEnemyPawn_NoRegister(); \
public: \
	DECLARE_CLASS2(AExamplePoolableEnemyPawn, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorPooling"), Z_Construct_UClass_AExamplePoolableEnemyPawn_NoRegister) \
	DECLARE_SERIALIZER(AExamplePoolableEnemyPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AExamplePoolableEnemyPawn*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentHealth	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AExamplePoolableEnemyPawn(AExamplePoolableEnemyPawn&&) = delete; \
	AExamplePoolableEnemyPawn(const AExamplePoolableEnemyPawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExamplePoolableEnemyPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExamplePoolableEnemyPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExamplePoolableEnemyPawn) \
	NO_API virtual ~AExamplePoolableEnemyPawn();


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_41_PROLOG
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_44_INCLASS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AExamplePoolableEnemyPawn;

// ********** End Class AExamplePoolableEnemyPawn **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
