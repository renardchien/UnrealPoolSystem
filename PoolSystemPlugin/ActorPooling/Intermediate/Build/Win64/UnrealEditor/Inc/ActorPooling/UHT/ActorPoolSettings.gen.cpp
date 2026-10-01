// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorPoolSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActorPoolSettings() {}

// ********** Begin Cross Module References ********************************************************
ACTORPOOLING_API UClass* Z_Construct_UClass_UActorPoolSettings();
ACTORPOOLING_API UClass* Z_Construct_UClass_UActorPoolSettings_NoRegister();
ACTORPOOLING_API UScriptStruct* Z_Construct_UScriptStruct_FPoolClassConfig();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ActorPooling();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FPoolClassConfig **************************************************
struct Z_Construct_UScriptStruct_FPoolClassConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FPoolClassConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FPoolClassConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The poolable actor class this configuration applies to. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The poolable actor class this configuration applies to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of instances of this class to maintain in the pool. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of instances of this class to maintain in the pool." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecyclable_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Recyclable: when the pool is exhausted, acquiring forcibly deactivates and reuses the\n\x09 * oldest currently-active instance. Non-recyclable: acquiring fails (returns nullptr) if\n\x09 * no inactive instances remain; instances only return to the pool via explicit ReturnActor calls.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Recyclable: when the pool is exhausted, acquiring forcibly deactivates and reuses the\noldest currently-active instance. Non-recyclable: acquiring fails (returns nullptr) if\nno inactive instances remain; instances only return to the pool via explicit ReturnActor calls." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrewarmAtStart_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the full pool for this class is spawned during world BeginPlay rather than lazily on first Acquire request. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the full pool for this class is spawned during world BeginPlay rather than lazily on first Acquire request." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugGrowPoolWhenExhausted_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Debug aid, off by default. Only applies while bRecyclable is false: instead of returning\n\x09 * nullptr when this class's pool is exhausted, Acquire spawns one extra instance, permanently\n\x09 * grows PoolSize to account for it, and logs a warning. Use this to keep testing unblocked\n\x09 * while you find the right PoolSize for a class - not intended to stay on in a shipped build,\n\x09 * since it defeats the actor-count cap pooling exists to enforce.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug aid, off by default. Only applies while bRecyclable is false: instead of returning\nnullptr when this class's pool is exhausted, Acquire spawns one extra instance, permanently\ngrows PoolSize to account for it, and logs a warning. Use this to keep testing unblocked\nwhile you find the right PoolSize for a class - not intended to stay on in a shipped build,\nsince it defeats the actor-count cap pooling exists to enforce." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolLocation_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * World location this class's instances are spawned at (before their first Acquire) and\n\x09 * moved back to every time they're returned to the pool (Return, or forced recycle). Purely\n\x09 * a \"parking spot\" for inactive instances, which are already hidden/non-colliding/non-ticking\n\x09 * regardless of where this is - it exists so inactive actors aren't left sitting wherever they\n\x09 * last were (e.g. mid-air, inside geometry) between uses.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World location this class's instances are spawned at (before their first Acquire) and\nmoved back to every time they're returned to the pool (Return, or forced recycle). Purely\na \"parking spot\" for inactive instances, which are already hidden/non-colliding/non-ticking\nregardless of where this is - it exists so inactive actors aren't left sitting wherever they\nlast were (e.g. mid-air, inside geometry) between uses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSyncWithReplication_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * For a pool that THIS machine's subsystem never calls AcquireActor/ReturnActor for itself -\n\x09 * typically a replicated class's pool on a CLIENT, where the server is the sole authority on\n\x09 * pooling decisions (see AExamplePoolableEnemyPawn's class comment). A replicated pooled\n\x09 * actor stays net-dormant while inactive, so a client doesn't even know an instance exists\n\x09 * until the moment the server activates it - before that, this machine's pool has no idea\n\x09 * it's there. With this enabled, this class's pool listens to\n\x09 * UPoolableComponent::bActiveInPool replication (UPoolableComponent::OnRep_ActiveInPool) and\n\x09 * keeps its own InactiveActors/ActiveActorsOrdered bookkeeping (and GetPoolStats) in sync\n\x09 * with those instances automatically, without ever spawning or Acquiring anything itself.\n\x09 *\n\x09 * Only takes effect for actors using UPoolableComponent's replicated flag - a class that\n\x09 * implements IPoolableActorInterface without this component (fully custom C++/Blueprint)\n\x09 * won't be tracked by this option. Safe to also leave on wherever this class IS normally\n\x09 * Acquired/Returned (e.g. the server's copy of the same project-settings entry) - it causes\n\x09 * no double-counting there, since OnRep never fires on the machine that authored the change.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For a pool that THIS machine's subsystem never calls AcquireActor/ReturnActor for itself -\ntypically a replicated class's pool on a CLIENT, where the server is the sole authority on\npooling decisions (see AExamplePoolableEnemyPawn's class comment). A replicated pooled\nactor stays net-dormant while inactive, so a client doesn't even know an instance exists\nuntil the moment the server activates it - before that, this machine's pool has no idea\nit's there. With this enabled, this class's pool listens to\nUPoolableComponent::bActiveInPool replication (UPoolableComponent::OnRep_ActiveInPool) and\nkeeps its own InactiveActors/ActiveActorsOrdered bookkeeping (and GetPoolStats) in sync\nwith those instances automatically, without ever spawning or Acquiring anything itself.\n\nOnly takes effect for actors using UPoolableComponent's replicated flag - a class that\nimplements IPoolableActorInterface without this component (fully custom C++/Blueprint)\nwon't be tracked by this option. Safe to also leave on wherever this class IS normally\nAcquired/Returned (e.g. the server's copy of the same project-settings entry) - it causes\nno double-counting there, since OnRep never fires on the machine that authored the change." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FPoolClassConfig constinit property declarations ******************
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
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
// ********** End ScriptStruct FPoolClassConfig constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoolClassConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FPoolClassConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPoolClassConfig;
class UScriptStruct* FPoolClassConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPoolClassConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPoolClassConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoolClassConfig, (UObject*)Z_Construct_UPackage__Script_ActorPooling(), TEXT("PoolClassConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FPoolClassConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FPoolClassConfig Property Definitions *****************************
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoolClassConfig, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoolClassConfig, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolSize_MetaData), NewProp_PoolSize_MetaData) };
void Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bRecyclable_SetBit(void* Obj)
{
	((FPoolClassConfig*)Obj)->bRecyclable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bRecyclable = { "bRecyclable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoolClassConfig), &Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bRecyclable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecyclable_MetaData), NewProp_bRecyclable_MetaData) };
void Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bPrewarmAtStart_SetBit(void* Obj)
{
	((FPoolClassConfig*)Obj)->bPrewarmAtStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bPrewarmAtStart = { "bPrewarmAtStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoolClassConfig), &Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bPrewarmAtStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrewarmAtStart_MetaData), NewProp_bPrewarmAtStart_MetaData) };
void Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bDebugGrowPoolWhenExhausted_SetBit(void* Obj)
{
	((FPoolClassConfig*)Obj)->bDebugGrowPoolWhenExhausted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bDebugGrowPoolWhenExhausted = { "bDebugGrowPoolWhenExhausted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoolClassConfig), &Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bDebugGrowPoolWhenExhausted_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugGrowPoolWhenExhausted_MetaData), NewProp_bDebugGrowPoolWhenExhausted_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_PoolLocation = { "PoolLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPoolClassConfig, PoolLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolLocation_MetaData), NewProp_PoolLocation_MetaData) };
void Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bSyncWithReplication_SetBit(void* Obj)
{
	((FPoolClassConfig*)Obj)->bSyncWithReplication = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bSyncWithReplication = { "bSyncWithReplication", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPoolClassConfig), &Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bSyncWithReplication_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSyncWithReplication_MetaData), NewProp_bSyncWithReplication_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoolClassConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_PoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bRecyclable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bPrewarmAtStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bDebugGrowPoolWhenExhausted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_PoolLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewProp_bSyncWithReplication,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoolClassConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FPoolClassConfig Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoolClassConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
	nullptr,
	&NewStructOps,
	"PoolClassConfig",
	Z_Construct_UScriptStruct_FPoolClassConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoolClassConfig_Statics::PropPointers),
	sizeof(FPoolClassConfig),
	alignof(FPoolClassConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoolClassConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPoolClassConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPoolClassConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FPoolClassConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPoolClassConfig.InnerSingleton, Z_Construct_UScriptStruct_FPoolClassConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FPoolClassConfig.InnerSingleton);
}
// ********** End ScriptStruct FPoolClassConfig ****************************************************

// ********** Begin Class UActorPoolSettings *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UActorPoolSettings;
UClass* UActorPoolSettings::GetPrivateStaticClass()
{
	using TClass = UActorPoolSettings;
	if (!Z_Registration_Info_UClass_UActorPoolSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ActorPoolSettings"),
			Z_Registration_Info_UClass_UActorPoolSettings.InnerSingleton,
			StaticRegisterNativesUActorPoolSettings,
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
	return Z_Registration_Info_UClass_UActorPoolSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorPoolSettings_NoRegister()
{
	return UActorPoolSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorPoolSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Project-wide pooling configuration, edited under Project Settings > Game > Actor Pooling.\n * This is a compiled/config asset shipped identically to server and client builds, so pool\n * sizes for any given class always agree between server and client instances.\n */" },
#endif
		{ "DisplayName", "Actor Pool Settings" },
		{ "IncludePath", "ActorPoolSettings.h" },
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project-wide pooling configuration, edited under Project Settings > Game > Actor Pooling.\nThis is a compiled/config asset shipped identically to server and client builds, so pool\nsizes for any given class always agree between server and client instances." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPoolSize_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default pool size for any poolable class without an explicit entry in ClassOverrides. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default pool size for any poolable class without an explicit entry in ClassOverrides." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultRecyclable_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default recyclable behavior for any poolable class without an explicit entry in ClassOverrides. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default recyclable behavior for any poolable class without an explicit entry in ClassOverrides." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultPrewarmAtStart_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default prewarm behavior for any poolable class without an explicit entry in ClassOverrides. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default prewarm behavior for any poolable class without an explicit entry in ClassOverrides." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPoolLocation_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default pool location for any poolable class without an explicit entry in ClassOverrides. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default pool location for any poolable class without an explicit entry in ClassOverrides." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassOverrides_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-class overrides. Add an entry to customize pool size / recyclable / prewarm / location for a specific class. */" },
#endif
		{ "ModuleRelativePath", "Public/ActorPoolSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-class overrides. Add an entry to customize pool size / recyclable / prewarm / location for a specific class." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UActorPoolSettings constinit property declarations ***********************
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultPoolSize;
	static void NewProp_bDefaultRecyclable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultRecyclable;
	static void NewProp_bDefaultPrewarmAtStart_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultPrewarmAtStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPoolLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClassOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActorPoolSettings constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPoolSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActorPoolSettings_Statics

// ********** Begin Class UActorPoolSettings Property Definitions **********************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_DefaultPoolSize = { "DefaultPoolSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPoolSettings, DefaultPoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPoolSize_MetaData), NewProp_DefaultPoolSize_MetaData) };
void Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_bDefaultRecyclable_SetBit(void* Obj)
{
	((UActorPoolSettings*)Obj)->bDefaultRecyclable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_bDefaultRecyclable = { "bDefaultRecyclable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActorPoolSettings), &Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_bDefaultRecyclable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultRecyclable_MetaData), NewProp_bDefaultRecyclable_MetaData) };
void Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_bDefaultPrewarmAtStart_SetBit(void* Obj)
{
	((UActorPoolSettings*)Obj)->bDefaultPrewarmAtStart = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_bDefaultPrewarmAtStart = { "bDefaultPrewarmAtStart", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActorPoolSettings), &Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_bDefaultPrewarmAtStart_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultPrewarmAtStart_MetaData), NewProp_bDefaultPrewarmAtStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_DefaultPoolLocation = { "DefaultPoolLocation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPoolSettings, DefaultPoolLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPoolLocation_MetaData), NewProp_DefaultPoolLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_ClassOverrides_Inner = { "ClassOverrides", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPoolClassConfig, METADATA_PARAMS(0, nullptr) }; // 3363840462
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_ClassOverrides = { "ClassOverrides", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorPoolSettings, ClassOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassOverrides_MetaData), NewProp_ClassOverrides_MetaData) }; // 3363840462
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorPoolSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_DefaultPoolSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_bDefaultRecyclable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_bDefaultPrewarmAtStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_DefaultPoolLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_ClassOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPoolSettings_Statics::NewProp_ClassOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSettings_Statics::PropPointers) < 2048);
// ********** End Class UActorPoolSettings Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UActorPoolSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorPoolSettings_Statics::ClassParams = {
	&UActorPoolSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActorPoolSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorPoolSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorPoolSettings_Statics::Class_MetaDataParams)
};
void UActorPoolSettings::StaticRegisterNativesUActorPoolSettings()
{
}
UClass* Z_Construct_UClass_UActorPoolSettings()
{
	if (!Z_Registration_Info_UClass_UActorPoolSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPoolSettings.OuterSingleton, Z_Construct_UClass_UActorPoolSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorPoolSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActorPoolSettings);
UActorPoolSettings::~UActorPoolSettings() {}
// ********** End Class UActorPoolSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h__Script_ActorPooling_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPoolClassConfig::StaticStruct, Z_Construct_UScriptStruct_FPoolClassConfig_Statics::NewStructOps, TEXT("PoolClassConfig"),&Z_Registration_Info_UScriptStruct_FPoolClassConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoolClassConfig), 3363840462U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorPoolSettings, UActorPoolSettings::StaticClass, TEXT("UActorPoolSettings"), &Z_Registration_Info_UClass_UActorPoolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPoolSettings), 1499274332U) },
	};
}; // Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h__Script_ActorPooling_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h__Script_ActorPooling_4252502804{
	TEXT("/Script/ActorPooling"),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h__Script_ActorPooling_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h__Script_ActorPooling_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h__Script_ActorPooling_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ActorPoolSettings_h__Script_ActorPooling_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
