// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorPoolSettings.h"

#ifdef ACTORPOOLING_ActorPoolSettings_generated_h
#error "ActorPoolSettings.generated.h already included, missing '#pragma once' in ActorPoolSettings.h"
#endif
#define ACTORPOOLING_ActorPoolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPoolClassConfig **************************************************
struct Z_Construct_UScriptStruct_FPoolClassConfig_Statics;
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoolClassConfig_Statics; \
	ACTORPOOLING_API static class UScriptStruct* StaticStruct();


struct FPoolClassConfig;
// ********** End ScriptStruct FPoolClassConfig ****************************************************

// ********** Begin Class UActorPoolSettings *******************************************************
struct Z_Construct_UClass_UActorPoolSettings_Statics;
ACTORPOOLING_API UClass* Z_Construct_UClass_UActorPoolSettings_NoRegister();

#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorPoolSettings(); \
	friend struct ::Z_Construct_UClass_UActorPoolSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORPOOLING_API UClass* ::Z_Construct_UClass_UActorPoolSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorPoolSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorPooling"), Z_Construct_UClass_UActorPoolSettings_NoRegister) \
	DECLARE_SERIALIZER(UActorPoolSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h_91_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorPoolSettings(UActorPoolSettings&&) = delete; \
	UActorPoolSettings(const UActorPoolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorPoolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorPoolSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorPoolSettings) \
	NO_API virtual ~UActorPoolSettings();


#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h_88_PROLOG
#define FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h_91_INCLASS_NO_PURE_DECLS \
	FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorPoolSettings;

// ********** End Class UActorPoolSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
