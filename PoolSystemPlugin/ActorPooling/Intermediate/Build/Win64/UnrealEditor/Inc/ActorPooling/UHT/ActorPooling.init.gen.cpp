// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPooling_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	ACTORPOOLING_API UFunction* Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature();
	ACTORPOOLING_API UFunction* Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ActorPooling;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ActorPooling()
	{
		if (!Z_Registration_Info_UPackage__Script_ActorPooling.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ActorPooling",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xEFD6EAFB,
			0x007E9F87,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ActorPooling.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ActorPooling.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ActorPooling(Z_Construct_UPackage__Script_ActorPooling, TEXT("/Script/ActorPooling"), Z_Registration_Info_UPackage__Script_ActorPooling, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEFD6EAFB, 0x007E9F87));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
