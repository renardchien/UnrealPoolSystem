// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorPoolSubsystem.h"
#include "ActorPoolSettings.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActorPoolSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ACTORPOOLING_API UClass* Z_Construct_UClass_UActorPoolSubsystem();
ACTORPOOLING_API UClass* Z_Construct_UClass_UActorPoolSubsystem_NoRegister();
ACTORPOOLING_API UScriptStruct* Z_Construct_UScriptStruct_FActorClassPool();
ACTORPOOLING_API UScriptStruct* Z_Construct_UScriptStruct_FPoolClassConfig();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_ActorPooling();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActorClassPool ***************************************************
struct Z_Construct_UScriptStruct_FActorClassPool_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FActorClassPool); }
	static inline consteval int16 GetStructAlignment() { return alignof(FActorClassPool); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal bookkeeping for a single poolable class. Not exposed to Blueprint directly. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal bookkeeping for a single poolable class. Not exposed to Blueprint directly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Available (inactive) actors for this class. Treated as a stack - Pop() from the end is O(1). */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Available (inactive) actors for this class. Treated as a stack - Pop() from the end is O(1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveActorsOrdered_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Active actors for this class, ordered oldest (index 0) to newest (back). Doubles as the recycle queue for recyclable pools. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active actors for this class, ordered oldest (index 0) to newest (back). Doubles as the recycle queue for recyclable pools." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpawnedInitialPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FActorClassPool constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InactiveActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InactiveActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveActorsOrdered_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveActorsOrdered;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Config;
	static void NewProp_bHasSpawnedInitialPool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpawnedInitialPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FActorClassPool constinit property declarations *********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorClassPool>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FActorClassPool_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorClassPool;
class UScriptStruct* FActorClassPool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorClassPool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorClassPool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorClassPool, (UObject*)Z_Construct_UPackage__Script_ActorPooling(), TEXT("ActorClassPool"));
	}
	return Z_Registration_Info_UScriptStruct_FActorClassPool.OuterSingleton;
	}

// ********** Begin ScriptStruct FActorClassPool Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_InactiveActors_Inner = { "InactiveActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_InactiveActors = { "InactiveActors", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorClassPool, InactiveActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveActors_MetaData), NewProp_InactiveActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_ActiveActorsOrdered_Inner = { "ActiveActorsOrdered", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_ActiveActorsOrdered = { "ActiveActorsOrdered", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorClassPool, ActiveActorsOrdered), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveActorsOrdered_MetaData), NewProp_ActiveActorsOrdered_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorClassPool, Config), Z_Construct_UScriptStruct_FPoolClassConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) }; // 3363840462
void Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_bHasSpawnedInitialPool_SetBit(void* Obj)
{
	((FActorClassPool*)Obj)->bHasSpawnedInitialPool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_bHasSpawnedInitialPool = { "bHasSpawnedInitialPool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActorClassPool), &Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_bHasSpawnedInitialPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSpawnedInitialPool_MetaData), NewProp_bHasSpawnedInitialPool_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorClassPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_InactiveActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_InactiveActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_ActiveActorsOrdered_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_ActiveActorsOrdered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorClassPool_Statics::NewProp_bHasSpawnedInitialPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassPool_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FActorClassPool Property Definitions ********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorClassPool_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
	nullptr,
	&NewStructOps,
	"ActorClassPool",
	Z_Construct_UScriptStruct_FActorClassPool_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassPool_Statics::PropPointers),
	sizeof(FActorClassPool),
	alignof(FActorClassPool),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorClassPool_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorClassPool_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorClassPool()
{
	if (!Z_Registration_Info_UScriptStruct_FActorClassPool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorClassPool.InnerSingleton, Z_Construct_UScriptStruct_FActorClassPool_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FActorClassPool.InnerSingleton);
}
// ********** End ScriptStruct FActorClassPool *****************************************************

// ********** Begin Class UActorPoolSubsystem Function AcquireActor ********************************
struct Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics
{
	struct ActorPoolSubsystem_eventAcquireActor_Parms
	{
		TSubclassOf<AActor> ActorClass;
		FTransform SpawnTransform;
		AActor* NewOwner;
		APawn* NewInstigator;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Acquires an actor of the given class from its pool, activates it at the given transform,\n\x09 * and returns it. Returns nullptr if the class is non-recyclable and no inactive instances\n\x09 * remain - unless FPoolClassConfig::bDebugGrowPoolWhenExhausted is set for this class, in\n\x09 * which case a new instance is spawned, PoolSize is permanently grown by one, and a warning\n\x09 * is logged instead. The pool for this class is created (and, if never used before, fully\n\x09 * spawned) on first call unless it was already prewarmed.\n\x09 *\n\x09 * NewOwner/NewInstigator are applied via SetOwner()/SetInstigator() before the actor's\n\x09 * mechanical activation and OnAcquiredFromPool() gameplay notification run, so both are\n\x09 * already correct by the time either of those sees the actor. Omit them to leave\n\x09 * Owner/Instigator untouched (they retain whatever they were last set to).\n\x09 */" },
#endif
		{ "CPP_Default_NewInstigator", "None" },
		{ "CPP_Default_NewOwner", "None" },
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Acquires an actor of the given class from its pool, activates it at the given transform,\nand returns it. Returns nullptr if the class is non-recyclable and no inactive instances\nremain - unless FPoolClassConfig::bDebugGrowPoolWhenExhausted is set for this class, in\nwhich case a new instance is spawned, PoolSize is permanently grown by one, and a warning\nis logged instead. The pool for this class is created (and, if never used before, fully\nspawned) on first call unless it was already prewarmed.\n\nNewOwner/NewInstigator are applied via SetOwner()/SetInstigator() before the actor's\nmechanical activation and OnAcquiredFromPool() gameplay notification run, so both are\nalready correct by the time either of those sees the actor. Omit them to leave\nOwner/Instigator untouched (they retain whatever they were last set to)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AcquireActor constinit property declarations **************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AcquireActor constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AcquireActor Property Definitions *************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActor_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActor_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActor_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActor_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_NewOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_NewInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::PropPointers) < 2048);
// ********** End Function AcquireActor Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPoolSubsystem, nullptr, "AcquireActor", 	Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::ActorPoolSubsystem_eventAcquireActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::ActorPoolSubsystem_eventAcquireActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPoolSubsystem::execAcquireActor)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
	P_GET_OBJECT(AActor,Z_Param_NewOwner);
	P_GET_OBJECT(APawn,Z_Param_NewInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->AcquireActor(Z_Param_ActorClass,Z_Param_Out_SpawnTransform,Z_Param_NewOwner,Z_Param_NewInstigator);
	P_NATIVE_END;
}
// ********** End Class UActorPoolSubsystem Function AcquireActor **********************************

// ********** Begin Class UActorPoolSubsystem Function AcquireActorBatch ***************************
struct Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics
{
	struct ActorPoolSubsystem_eventAcquireActorBatch_Parms
	{
		TSubclassOf<AActor> ActorClass;
		TArray<FTransform> SpawnTransforms;
		TArray<AActor*> AcquiredActors;
		AActor* NewOwner;
		APawn* NewInstigator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calls AcquireActor once per entry in SpawnTransforms, using the same ActorClass/NewOwner/\n\x09 * NewInstigator for each. AcquiredActors receives one entry per successful Acquire, in the\n\x09 * same order as SpawnTransforms - a transform whose Acquire fails (e.g. non-recyclable pool\n\x09 * exhausted) simply contributes no entry, so AcquiredActors.Num() can be less than\n\x09 * SpawnTransforms.Num(). Returns true if every requested actor was acquired, false if the\n\x09 * pool couldn't provide the full batch.\n\x09 */" },
#endif
		{ "CPP_Default_NewInstigator", "None" },
		{ "CPP_Default_NewOwner", "None" },
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls AcquireActor once per entry in SpawnTransforms, using the same ActorClass/NewOwner/\nNewInstigator for each. AcquiredActors receives one entry per successful Acquire, in the\nsame order as SpawnTransforms - a transform whose Acquire fails (e.g. non-recyclable pool\nexhausted) simply contributes no entry, so AcquiredActors.Num() can be less than\nSpawnTransforms.Num(). Returns true if every requested actor was acquired, false if the\npool couldn't provide the full batch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransforms_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AcquireActorBatch constinit property declarations *********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransforms_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnTransforms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcquiredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AcquiredActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInstigator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AcquireActorBatch constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AcquireActorBatch Property Definitions ********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActorBatch_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_SpawnTransforms_Inner = { "SpawnTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_SpawnTransforms = { "SpawnTransforms", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActorBatch_Parms, SpawnTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransforms_MetaData), NewProp_SpawnTransforms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_AcquiredActors_Inner = { "AcquiredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_AcquiredActors = { "AcquiredActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActorBatch_Parms, AcquiredActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActorBatch_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_NewInstigator = { "NewInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventAcquireActorBatch_Parms, NewInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorPoolSubsystem_eventAcquireActorBatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorPoolSubsystem_eventAcquireActorBatch_Parms), &Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_SpawnTransforms_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_SpawnTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_AcquiredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_AcquiredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_NewOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_NewInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::PropPointers) < 2048);
// ********** End Function AcquireActorBatch Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPoolSubsystem, nullptr, "AcquireActorBatch", 	Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::ActorPoolSubsystem_eventAcquireActorBatch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::ActorPoolSubsystem_eventAcquireActorBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPoolSubsystem::execAcquireActorBatch)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_SpawnTransforms);
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_AcquiredActors);
	P_GET_OBJECT(AActor,Z_Param_NewOwner);
	P_GET_OBJECT(APawn,Z_Param_NewInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AcquireActorBatch(Z_Param_ActorClass,Z_Param_Out_SpawnTransforms,Z_Param_Out_AcquiredActors,Z_Param_NewOwner,Z_Param_NewInstigator);
	P_NATIVE_END;
}
// ********** End Class UActorPoolSubsystem Function AcquireActorBatch *****************************

// ********** Begin Class UActorPoolSubsystem Function GetLocationVariance *************************
struct Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics
{
	struct ActorPoolSubsystem_eventGetLocationVariance_Parms
	{
		FTransform BaseTransform;
		int32 NumLocations;
		float VarianceOffset;
		TArray<FTransform> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns NumLocations transforms copied from BaseTransform, each nudged apart in X/Y only -\n\x09 * Z, rotation, and scale are always copied through untouched. Handy for building the\n\x09 * SpawnTransforms array for AcquireActorBatch so a batch doesn't spawn everything on top of\n\x09 * itself.\n\x09 *\n\x09 * Result[0] is always an exact copy of BaseTransform (zero offset). Each entry at index i\n\x09 * (i > 0) is offset from BaseTransform's location by i * VarianceOffset along one of 8\n\x09 * compass directions, cycling every 8 entries - so offsets grow steadily larger as the array\n\x09 * progresses and no two entries land on the same spot. VarianceOffset defaults to 200.\n\x09 * Returns an empty array if NumLocations <= 0.\n\x09 */" },
#endif
		{ "CPP_Default_VarianceOffset", "200.000000" },
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns NumLocations transforms copied from BaseTransform, each nudged apart in X/Y only -\nZ, rotation, and scale are always copied through untouched. Handy for building the\nSpawnTransforms array for AcquireActorBatch so a batch doesn't spawn everything on top of\nitself.\n\nResult[0] is always an exact copy of BaseTransform (zero offset). Each entry at index i\n(i > 0) is offset from BaseTransform's location by i * VarianceOffset along one of 8\ncompass directions, cycling every 8 entries - so offsets grow steadily larger as the array\nprogresses and no two entries land on the same spot. VarianceOffset defaults to 200.\nReturns an empty array if NumLocations <= 0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLocationVariance constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLocations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VarianceOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLocationVariance constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLocationVariance Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventGetLocationVariance_Parms, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTransform_MetaData), NewProp_BaseTransform_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_NumLocations = { "NumLocations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventGetLocationVariance_Parms, NumLocations), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_VarianceOffset = { "VarianceOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventGetLocationVariance_Parms, VarianceOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventGetLocationVariance_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_BaseTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_NumLocations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_VarianceOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::PropPointers) < 2048);
// ********** End Function GetLocationVariance Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPoolSubsystem, nullptr, "GetLocationVariance", 	Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::ActorPoolSubsystem_eventGetLocationVariance_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::ActorPoolSubsystem_eventGetLocationVariance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPoolSubsystem::execGetLocationVariance)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_BaseTransform);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumLocations);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VarianceOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FTransform>*)Z_Param__Result=UActorPoolSubsystem::GetLocationVariance(Z_Param_Out_BaseTransform,Z_Param_NumLocations,Z_Param_VarianceOffset);
	P_NATIVE_END;
}
// ********** End Class UActorPoolSubsystem Function GetLocationVariance ***************************

// ********** Begin Class UActorPoolSubsystem Function GetPoolStats ********************************
struct Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics
{
	struct ActorPoolSubsystem_eventGetPoolStats_Parms
	{
		TSubclassOf<AActor> ActorClass;
		int32 MaxPoolSize;
		int32 AvailableCount;
		int32 UnavailableCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Reports pooling stats for a class - useful for debug HUDs/overlays.\n\x09 * MaxPoolSize: this class's current configured capacity (FPoolClassConfig::PoolSize - can\n\x09 *   grow at runtime if bDebugGrowPoolWhenExhausted is set). If the class has never been\n\x09 *   registered/acquired/prewarmed, this reports what it WOULD be (falling back to project\n\x09 *   settings) without creating a pool entry as a side effect of the query.\n\x09 * AvailableCount: instances currently inactive and ready to Acquire.\n\x09 * UnavailableCount: instances currently active/in use.\n\x09 * AvailableCount + UnavailableCount normally equals MaxPoolSize once the pool has been\n\x09 * spawned - it can be less if some instances failed to spawn (e.g. a misconfigured class\n\x09 * that doesn't implement IPoolableActorInterface), and both are 0 if the pool hasn't been\n\x09 * spawned yet.\n\x09 *\n\x09 * For a class with FPoolClassConfig::bSyncWithReplication enabled, AvailableCount is instead\n\x09 * derived as MaxPoolSize - UnavailableCount rather than counting InactiveActors directly -\n\x09 * a pooled replicated actor stays net-dormant (invisible to this machine) until first\n\x09 * activated, so InactiveActors can only ever contain instances that already went active at\n\x09 * least once, never a pool member this machine hasn't met yet.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reports pooling stats for a class - useful for debug HUDs/overlays.\nMaxPoolSize: this class's current configured capacity (FPoolClassConfig::PoolSize - can\n  grow at runtime if bDebugGrowPoolWhenExhausted is set). If the class has never been\n  registered/acquired/prewarmed, this reports what it WOULD be (falling back to project\n  settings) without creating a pool entry as a side effect of the query.\nAvailableCount: instances currently inactive and ready to Acquire.\nUnavailableCount: instances currently active/in use.\nAvailableCount + UnavailableCount normally equals MaxPoolSize once the pool has been\nspawned - it can be less if some instances failed to spawn (e.g. a misconfigured class\nthat doesn't implement IPoolableActorInterface), and both are 0 if the pool hasn't been\nspawned yet.\n\nFor a class with FPoolClassConfig::bSyncWithReplication enabled, AvailableCount is instead\nderived as MaxPoolSize - UnavailableCount rather than counting InactiveActors directly -\na pooled replicated actor stays net-dormant (invisible to this machine) until first\nactivated, so InactiveActors can only ever contain instances that already went active at\nleast once, never a pool member this machine hasn't met yet." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetPoolStats constinit property declarations **************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPoolSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AvailableCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnavailableCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPoolStats constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPoolStats Property Definitions *************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventGetPoolStats_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::NewProp_MaxPoolSize = { "MaxPoolSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventGetPoolStats_Parms, MaxPoolSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::NewProp_AvailableCount = { "AvailableCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventGetPoolStats_Parms, AvailableCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::NewProp_UnavailableCount = { "UnavailableCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventGetPoolStats_Parms, UnavailableCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::NewProp_MaxPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::NewProp_AvailableCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::NewProp_UnavailableCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::PropPointers) < 2048);
// ********** End Function GetPoolStats Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPoolSubsystem, nullptr, "GetPoolStats", 	Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::ActorPoolSubsystem_eventGetPoolStats_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::ActorPoolSubsystem_eventGetPoolStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPoolSubsystem::execGetPoolStats)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxPoolSize);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AvailableCount);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnavailableCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetPoolStats(Z_Param_ActorClass,Z_Param_Out_MaxPoolSize,Z_Param_Out_AvailableCount,Z_Param_Out_UnavailableCount);
	P_NATIVE_END;
}
// ********** End Class UActorPoolSubsystem Function GetPoolStats **********************************

// ********** Begin Class UActorPoolSubsystem Function PrewarmPool *********************************
struct Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics
{
	struct ActorPoolSubsystem_eventPrewarmPool_Parms
	{
		TSubclassOf<AActor> ActorClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Forces immediate spawn of the full configured pool for a class, if not already spawned. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forces immediate spawn of the full configured pool for a class, if not already spawned." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function PrewarmPool constinit property declarations ***************************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function PrewarmPool constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function PrewarmPool Property Definitions **************************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventPrewarmPool_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::PropPointers) < 2048);
// ********** End Function PrewarmPool Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPoolSubsystem, nullptr, "PrewarmPool", 	Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::ActorPoolSubsystem_eventPrewarmPool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::ActorPoolSubsystem_eventPrewarmPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPoolSubsystem::execPrewarmPool)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrewarmPool(Z_Param_ActorClass);
	P_NATIVE_END;
}
// ********** End Class UActorPoolSubsystem Function PrewarmPool ***********************************

// ********** Begin Class UActorPoolSubsystem Function RegisterPoolClass ***************************
struct Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics
{
	struct ActorPoolSubsystem_eventRegisterPoolClass_Parms
	{
		TSubclassOf<AActor> ActorClass;
		int32 PoolSize;
		bool bRecyclable;
		bool bPrewarmAtStart;
		bool bDebugGrowPoolWhenExhausted;
		FVector PoolLocation;
		bool bSyncWithReplication;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Registers or overrides pooling configuration for a class before it is first used.\n\x09 * Has no effect if the pool for this class has already been spawned (first Acquire call,\n\x09 * or an earlier prewarm) - call this early, e.g. from GameMode/GameState BeginPlay.\n\x09 * PoolSize is clamped to a minimum of 1.\n\x09 */" },
#endif
		{ "CPP_Default_bDebugGrowPoolWhenExhausted", "false" },
		{ "CPP_Default_bPrewarmAtStart", "false" },
		{ "CPP_Default_bSyncWithReplication", "false" },
		{ "CPP_Default_PoolLocation", "" },
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers or overrides pooling configuration for a class before it is first used.\nHas no effect if the pool for this class has already been spawned (first Acquire call,\nor an earlier prewarm) - call this early, e.g. from GameMode/GameState BeginPlay.\nPoolSize is clamped to a minimum of 1." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterPoolClass constinit property declarations *********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PoolSize;
	static void NewProp_bRecyclable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecyclable;
	static void NewProp_bPrewarmAtStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrewarmAtStart;
	static void NewProp_bDebugGrowPoolWhenExhausted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugGrowPoolWhenExhausted;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PoolLocation;
	static void NewProp_bSyncWithReplication_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSyncWithReplication;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterPoolClass constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterPoolClass Property Definitions ********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventRegisterPoolClass_Parms, ActorClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventRegisterPoolClass_Parms, PoolSize), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bRecyclable_SetBit(void* Obj)
{
	((ActorPoolSubsystem_eventRegisterPoolClass_Parms*)Obj)->bRecyclable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bRecyclable = { "bRecyclable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorPoolSubsystem_eventRegisterPoolClass_Parms), &Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bRecyclable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bPrewarmAtStart_SetBit(void* Obj)
{
	((ActorPoolSubsystem_eventRegisterPoolClass_Parms*)Obj)->bPrewarmAtStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bPrewarmAtStart = { "bPrewarmAtStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorPoolSubsystem_eventRegisterPoolClass_Parms), &Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bPrewarmAtStart_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bDebugGrowPoolWhenExhausted_SetBit(void* Obj)
{
	((ActorPoolSubsystem_eventRegisterPoolClass_Parms*)Obj)->bDebugGrowPoolWhenExhausted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bDebugGrowPoolWhenExhausted = { "bDebugGrowPoolWhenExhausted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorPoolSubsystem_eventRegisterPoolClass_Parms), &Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bDebugGrowPoolWhenExhausted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_PoolLocation = { "PoolLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventRegisterPoolClass_Parms, PoolLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bSyncWithReplication_SetBit(void* Obj)
{
	((ActorPoolSubsystem_eventRegisterPoolClass_Parms*)Obj)->bSyncWithReplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bSyncWithReplication = { "bSyncWithReplication", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorPoolSubsystem_eventRegisterPoolClass_Parms), &Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bSyncWithReplication_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_PoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bRecyclable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bPrewarmAtStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bDebugGrowPoolWhenExhausted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_PoolLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::NewProp_bSyncWithReplication,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::PropPointers) < 2048);
// ********** End Function RegisterPoolClass Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPoolSubsystem, nullptr, "RegisterPoolClass", 	Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::ActorPoolSubsystem_eventRegisterPoolClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::ActorPoolSubsystem_eventRegisterPoolClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPoolSubsystem::execRegisterPoolClass)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_GET_PROPERTY(FIntProperty,Z_Param_PoolSize);
	P_GET_UBOOL(Z_Param_bRecyclable);
	P_GET_UBOOL(Z_Param_bPrewarmAtStart);
	P_GET_UBOOL(Z_Param_bDebugGrowPoolWhenExhausted);
	P_GET_STRUCT(FVector,Z_Param_PoolLocation);
	P_GET_UBOOL(Z_Param_bSyncWithReplication);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPoolClass(Z_Param_ActorClass,Z_Param_PoolSize,Z_Param_bRecyclable,Z_Param_bPrewarmAtStart,Z_Param_bDebugGrowPoolWhenExhausted,Z_Param_PoolLocation,Z_Param_bSyncWithReplication);
	P_NATIVE_END;
}
// ********** End Class UActorPoolSubsystem Function RegisterPoolClass *****************************

// ********** Begin Class UActorPoolSubsystem Function ReturnActor *********************************
struct Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics
{
	struct ActorPoolSubsystem_eventReturnActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Deactivates the given actor and returns it to its class pool. No-op if the actor is not currently tracked as active. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Deactivates the given actor and returns it to its class pool. No-op if the actor is not currently tracked as active." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ReturnActor constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReturnActor constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReturnActor Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventReturnActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::PropPointers) < 2048);
// ********** End Function ReturnActor Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPoolSubsystem, nullptr, "ReturnActor", 	Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::ActorPoolSubsystem_eventReturnActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::ActorPoolSubsystem_eventReturnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPoolSubsystem::execReturnActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UActorPoolSubsystem Function ReturnActor ***********************************

// ********** Begin Class UActorPoolSubsystem Function ReturnActorBatch ****************************
struct Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics
{
	struct ActorPoolSubsystem_eventReturnActorBatch_Parms
	{
		TArray<AActor*> Actors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Calls ReturnActor once per entry in Actors. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls ReturnActor once per entry in Actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ReturnActorBatch constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ReturnActorBatch constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ReturnActorBatch Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorPoolSubsystem_eventReturnActorBatch_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actors_MetaData), NewProp_Actors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::NewProp_Actors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::NewProp_Actors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::PropPointers) < 2048);
// ********** End Function ReturnActorBatch Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorPoolSubsystem, nullptr, "ReturnActorBatch", 	Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::ActorPoolSubsystem_eventReturnActorBatch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::ActorPoolSubsystem_eventReturnActorBatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorPoolSubsystem::execReturnActorBatch)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReturnActorBatch(Z_Param_Out_Actors);
	P_NATIVE_END;
}
// ********** End Class UActorPoolSubsystem Function ReturnActorBatch ******************************

// ********** Begin Class UActorPoolSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UActorPoolSubsystem;
UClass* UActorPoolSubsystem::GetPrivateStaticClass()
{
	using TClass = UActorPoolSubsystem;
	if (!Z_Registration_Info_UClass_UActorPoolSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ActorPoolSubsystem"),
			Z_Registration_Info_UClass_UActorPoolSubsystem.InnerSingleton,
			StaticRegisterNativesUActorPoolSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UActorPoolSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorPoolSubsystem_NoRegister()
{
	return UActorPoolSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorPoolSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * World-scoped subsystem that owns and manages all actor pools for the current world.\n * Exists separately on the server and on each client (each has its own UWorld / subsystem\n * instance) - server and client pools for the same class never communicate directly. The one\n * exception is FPoolClassConfig::bSyncWithReplication, which lets a class's pool passively\n * observe another machine's pooling decisions purely via that class's own actor replication\n * (see its comment). It's still never a direct subsystem-to-subsystem link.\n * For actors that must NOT replicate their movement (e.g. cosmetic projectiles), pair this\n * with UPooledProjectileLauncherComponent, which handles triggering local acquires on every\n * machine from a single server-side call.\n */" },
#endif
		{ "IncludePath", "ActorPoolSubsystem.h" },
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World-scoped subsystem that owns and manages all actor pools for the current world.\nExists separately on the server and on each client (each has its own UWorld / subsystem\ninstance) - server and client pools for the same class never communicate directly. The one\nexception is FPoolClassConfig::bSyncWithReplication, which lets a class's pool passively\nobserve another machine's pooling decisions purely via that class's own actor replication\n(see its comment). It's still never a direct subsystem-to-subsystem link.\nFor actors that must NOT replicate their movement (e.g. cosmetic projectiles), pair this\nwith UPooledProjectileLauncherComponent, which handles triggering local acquires on every\nmachine from a single server-side call." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassPools_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPoolSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UActorPoolSubsystem constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassPools_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassPools_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ClassPools;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActorPoolSubsystem constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AcquireActor"), .Pointer = &UActorPoolSubsystem::execAcquireActor },
		{ .NameUTF8 = UTF8TEXT("AcquireActorBatch"), .Pointer = &UActorPoolSubsystem::execAcquireActorBatch },
		{ .NameUTF8 = UTF8TEXT("GetLocationVariance"), .Pointer = &UActorPoolSubsystem::execGetLocationVariance },
		{ .NameUTF8 = UTF8TEXT("GetPoolStats"), .Pointer = &UActorPoolSubsystem::execGetPoolStats },
		{ .NameUTF8 = UTF8TEXT("PrewarmPool"), .Pointer = &UActorPoolSubsystem::execPrewarmPool },
		{ .NameUTF8 = UTF8TEXT("RegisterPoolClass"), .Pointer = &UActorPoolSubsystem::execRegisterPoolClass },
		{ .NameUTF8 = UTF8TEXT("ReturnActor"), .Pointer = &UActorPoolSubsystem::execReturnActor },
		{ .NameUTF8 = UTF8TEXT("ReturnActorBatch"), .Pointer = &UActorPoolSubsystem::execReturnActorBatch },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorPoolSubsystem_AcquireActor, "AcquireActor" }, // 2232958925
		{ &Z_Construct_UFunction_UActorPoolSubsystem_AcquireActorBatch, "AcquireActorBatch" }, // 1288193988
		{ &Z_Construct_UFunction_UActorPoolSubsystem_GetLocationVariance, "GetLocationVariance" }, // 1420046762
		{ &Z_Construct_UFunction_UActorPoolSubsystem_GetPoolStats, "GetPoolStats" }, // 4193297794
		{ &Z_Construct_UFunction_UActorPoolSubsystem_PrewarmPool, "PrewarmPool" }, // 3910581657
		{ &Z_Construct_UFunction_UActorPoolSubsystem_RegisterPoolClass, "RegisterPoolClass" }, // 3535917882
		{ &Z_Construct_UFunction_UActorPoolSubsystem_ReturnActor, "ReturnActor" }, // 1705751049
		{ &Z_Construct_UFunction_UActorPoolSubsystem_ReturnActorBatch, "ReturnActorBatch" }, // 3242883564
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPoolSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActorPoolSubsystem_Statics

// ********** Begin Class UActorPoolSubsystem Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorPoolSubsystem_Statics::NewProp_ClassPools_ValueProp = { "ClassPools", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FActorClassPool, METADATA_PARAMS(0, nullptr) }; // 467972387
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UActorPoolSubsystem_Statics::NewProp_ClassPools_Key_KeyProp = { "ClassPools_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UActorPoolSubsystem_Statics::NewProp_ClassPools = { "ClassPools", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPoolSubsystem, ClassPools), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassPools_MetaData), NewProp_ClassPools_MetaData) }; // 467972387
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorPoolSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSubsystem_Statics::NewProp_ClassPools_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSubsystem_Statics::NewProp_ClassPools_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSubsystem_Statics::NewProp_ClassPools,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSubsystem_Statics::PropPointers) < 2048);
// ********** End Class UActorPoolSubsystem Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UActorPoolSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorPoolSubsystem_Statics::ClassParams = {
	&UActorPoolSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActorPoolSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorPoolSubsystem_Statics::Class_MetaDataParams)
};
void UActorPoolSubsystem::StaticRegisterNativesUActorPoolSubsystem()
{
	UClass* Class = UActorPoolSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UActorPoolSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UActorPoolSubsystem()
{
	if (!Z_Registration_Info_UClass_UActorPoolSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPoolSubsystem.OuterSingleton, Z_Construct_UClass_UActorPoolSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorPoolSubsystem.OuterSingleton;
}
UActorPoolSubsystem::UActorPoolSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActorPoolSubsystem);
UActorPoolSubsystem::~UActorPoolSubsystem() {}
// ********** End Class UActorPoolSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h__Script_ActorPooling_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorClassPool::StaticStruct, Z_Construct_UScriptStruct_FActorClassPool_Statics::NewStructOps, TEXT("ActorClassPool"),&Z_Registration_Info_UScriptStruct_FActorClassPool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorClassPool), 467972387U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorPoolSubsystem, UActorPoolSubsystem::StaticClass, TEXT("UActorPoolSubsystem"), &Z_Registration_Info_UClass_UActorPoolSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPoolSubsystem), 3179961964U) },
	};
}; // Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h__Script_ActorPooling_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h__Script_ActorPooling_3330542738{
	TEXT("/Script/ActorPooling"),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h__Script_ActorPooling_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h__Script_ActorPooling_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h__Script_ActorPooling_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSubsystem_h__Script_ActorPooling_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
