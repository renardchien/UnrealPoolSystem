// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExamplePoolableEnemyPawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExamplePoolableEnemyPawn() {}

// ********** Begin Cross Module References ********************************************************
ACTORPOOLING_API UClass* Z_Construct_UClass_AExamplePoolableEnemyPawn();
ACTORPOOLING_API UClass* Z_Construct_UClass_AExamplePoolableEnemyPawn_NoRegister();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableActorInterface_NoRegister();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableComponent_NoRegister();
ACTORPOOLING_API UFunction* Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_ActorPooling();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnExampleEnemyDied ***************************************************
struct Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics
{
	struct _Script_ActorPooling_eventOnExampleEnemyDied_Parms
	{
		AExamplePoolableEnemyPawn* DeadEnemy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExamplePoolableEnemyPawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnExampleEnemyDied constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadEnemy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnExampleEnemyDied constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnExampleEnemyDied Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::NewProp_DeadEnemy = { "DeadEnemy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ActorPooling_eventOnExampleEnemyDied_Parms, DeadEnemy), Z_Construct_UClass_AExamplePoolableEnemyPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::NewProp_DeadEnemy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnExampleEnemyDied Property Definitions ********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ActorPooling, nullptr, "OnExampleEnemyDied__DelegateSignature", 	Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::_Script_ActorPooling_eventOnExampleEnemyDied_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::_Script_ActorPooling_eventOnExampleEnemyDied_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnExampleEnemyDied_DelegateWrapper(const FMulticastScriptDelegate& OnExampleEnemyDied, AExamplePoolableEnemyPawn* DeadEnemy)
{
	struct _Script_ActorPooling_eventOnExampleEnemyDied_Parms
	{
		AExamplePoolableEnemyPawn* DeadEnemy;
	};
	_Script_ActorPooling_eventOnExampleEnemyDied_Parms Parms;
	Parms.DeadEnemy=DeadEnemy;
	OnExampleEnemyDied.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnExampleEnemyDied *****************************************************

// ********** Begin Class AExamplePoolableEnemyPawn Function ApplyDamage ***************************
struct Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics
{
	struct ExamplePoolableEnemyPawn_eventApplyDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Server-only: applies damage and, if it drops health to zero, returns this pawn to its pool. */" },
#endif
		{ "ModuleRelativePath", "Public/ExamplePoolableEnemyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Server-only: applies damage and, if it drops health to zero, returns this pawn to its pool." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyDamage constinit property declarations ***************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyDamage constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyDamage Property Definitions **************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExamplePoolableEnemyPawn_eventApplyDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::PropPointers) < 2048);
// ********** End Function ApplyDamage Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExamplePoolableEnemyPawn, nullptr, "ApplyDamage", 	Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::ExamplePoolableEnemyPawn_eventApplyDamage_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::ExamplePoolableEnemyPawn_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExamplePoolableEnemyPawn::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// ********** End Class AExamplePoolableEnemyPawn Function ApplyDamage *****************************

// ********** Begin Class AExamplePoolableEnemyPawn Function OnRep_CurrentHealth *******************
struct Z_Construct_UFunction_AExamplePoolableEnemyPawn_OnRep_CurrentHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExamplePoolableEnemyPawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_CurrentHealth constinit property declarations *******************
// ********** End Function OnRep_CurrentHealth constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExamplePoolableEnemyPawn_OnRep_CurrentHealth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExamplePoolableEnemyPawn, nullptr, "OnRep_CurrentHealth", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExamplePoolableEnemyPawn_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExamplePoolableEnemyPawn_OnRep_CurrentHealth_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AExamplePoolableEnemyPawn_OnRep_CurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExamplePoolableEnemyPawn_OnRep_CurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExamplePoolableEnemyPawn::execOnRep_CurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth();
	P_NATIVE_END;
}
// ********** End Class AExamplePoolableEnemyPawn Function OnRep_CurrentHealth *********************

// ********** Begin Class AExamplePoolableEnemyPawn ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExamplePoolableEnemyPawn;
UClass* AExamplePoolableEnemyPawn::GetPrivateStaticClass()
{
	using TClass = AExamplePoolableEnemyPawn;
	if (!Z_Registration_Info_UClass_AExamplePoolableEnemyPawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExamplePoolableEnemyPawn"),
			Z_Registration_Info_UClass_AExamplePoolableEnemyPawn.InnerSingleton,
			StaticRegisterNativesAExamplePoolableEnemyPawn,
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
	return Z_Registration_Info_UClass_AExamplePoolableEnemyPawn.InnerSingleton;
}
UClass* Z_Construct_UClass_AExamplePoolableEnemyPawn_NoRegister()
{
	return AExamplePoolableEnemyPawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Example poolable enemy pawn. Demonstrates the REPLICATED case for actor pooling. Unlike\n * AExamplePoolableProjectile, this class leaves bReplicates at its default (true, inherited\n * from ACharacter) because its movement, health, and other gameplay state genuinely need to\n * reach clients.\n *\n * UActorPoolSubsystem automatically applies net dormancy (DORM_DormantAll) to this actor\n * while it sits inactive in the pool, and flushes dormancy the moment it's acquired - see\n * UActorPoolSubsystem::ActivateActor/DeactivateActor, gated on GetIsReplicated(). You don't\n * need to do anything dormancy-related in this class yourself.\n *\n * Also unlike the projectile example: AcquireActor/ReturnActor for this class are only ever\n * called on the server (this pawn's one authoritative instance lives on the server; clients\n * simply observe the results via normal actor replication + PoolableComponent's replicated\n * bActiveInPool flag). Treat this as a template: swap in your own AI controller possession,\n * behavior tree, animation, and damage logic.\n *\n * Since a client's own UActorPoolSubsystem never Acquires/Returns this class itself, its pool\n * bookkeeping for this class (InactiveActors/ActiveActorsOrdered, GetPoolStats) has nothing to\n * go on by default. Enable FPoolClassConfig::bSyncWithReplication for this class (in Project\n * Settings, or via RegisterPoolClass) to have each client's pool passively track these\n * server-authoritative instances via PoolableComponent's replicated flag instead.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ExamplePoolableEnemyPawn.h" },
		{ "ModuleRelativePath", "Public/ExamplePoolableEnemyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Example poolable enemy pawn. Demonstrates the REPLICATED case for actor pooling. Unlike\nAExamplePoolableProjectile, this class leaves bReplicates at its default (true, inherited\nfrom ACharacter) because its movement, health, and other gameplay state genuinely need to\nreach clients.\n\nUActorPoolSubsystem automatically applies net dormancy (DORM_DormantAll) to this actor\nwhile it sits inactive in the pool, and flushes dormancy the moment it's acquired - see\nUActorPoolSubsystem::ActivateActor/DeactivateActor, gated on GetIsReplicated(). You don't\nneed to do anything dormancy-related in this class yourself.\n\nAlso unlike the projectile example: AcquireActor/ReturnActor for this class are only ever\ncalled on the server (this pawn's one authoritative instance lives on the server; clients\nsimply observe the results via normal actor replication + PoolableComponent's replicated\nbActiveInPool flag). Treat this as a template: swap in your own AI controller possession,\nbehavior tree, animation, and damage logic.\n\nSince a client's own UActorPoolSubsystem never Acquires/Returns this class itself, its pool\nbookkeeping for this class (InactiveActors/ActiveActorsOrdered, GetPoolStats) has nothing to\ngo on by default. Enable FPoolClassConfig::bSyncWithReplication for this class (in Project\nSettings, or via RegisterPoolClass) to have each client's pool passively track these\nserver-authoritative instances via PoolableComponent's replicated flag instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnemyDied_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ExamplePoolableEnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolableComponent_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles activate/deactivate mechanics and replicates the active-state flag to clients. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExamplePoolableEnemyPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles activate/deactivate mechanics and replicates the active-state flag to clients." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ExamplePoolableEnemyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/ExamplePoolableEnemyPawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AExamplePoolableEnemyPawn constinit property declarations ****************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnemyDied;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoolableComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AExamplePoolableEnemyPawn constinit property declarations ******************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyDamage"), .Pointer = &AExamplePoolableEnemyPawn::execApplyDamage },
		{ .NameUTF8 = UTF8TEXT("OnRep_CurrentHealth"), .Pointer = &AExamplePoolableEnemyPawn::execOnRep_CurrentHealth },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AExamplePoolableEnemyPawn_ApplyDamage, "ApplyDamage" }, // 1586617916
		{ &Z_Construct_UFunction_AExamplePoolableEnemyPawn_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 3945668553
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExamplePoolableEnemyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics

// ********** Begin Class AExamplePoolableEnemyPawn Property Definitions ***************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::NewProp_OnEnemyDied = { "OnEnemyDied", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExamplePoolableEnemyPawn, OnEnemyDied), Z_Construct_UDelegateFunction_ActorPooling_OnExampleEnemyDied__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnemyDied_MetaData), NewProp_OnEnemyDied_MetaData) }; // 1547859979
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::NewProp_PoolableComponent = { "PoolableComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExamplePoolableEnemyPawn, PoolableComponent), Z_Construct_UClass_UPoolableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolableComponent_MetaData), NewProp_PoolableComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExamplePoolableEnemyPawn, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::NewProp_CurrentHealth = { "CurrentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0020080100000034, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExamplePoolableEnemyPawn, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::NewProp_OnEnemyDied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::NewProp_PoolableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::NewProp_CurrentHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::PropPointers) < 2048);
// ********** End Class AExamplePoolableEnemyPawn Property Definitions *****************************
UObject* (*const Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPoolableActorInterface_NoRegister, (int32)VTABLE_OFFSET(AExamplePoolableEnemyPawn, IPoolableActorInterface), false },  // 1843804757
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::ClassParams = {
	&AExamplePoolableEnemyPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::Class_MetaDataParams)
};
void AExamplePoolableEnemyPawn::StaticRegisterNativesAExamplePoolableEnemyPawn()
{
	UClass* Class = AExamplePoolableEnemyPawn::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::Funcs));
}
UClass* Z_Construct_UClass_AExamplePoolableEnemyPawn()
{
	if (!Z_Registration_Info_UClass_AExamplePoolableEnemyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExamplePoolableEnemyPawn.OuterSingleton, Z_Construct_UClass_AExamplePoolableEnemyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExamplePoolableEnemyPawn.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AExamplePoolableEnemyPawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_CurrentHealth(TEXT("CurrentHealth"));
	const bool bIsValid = true
		&& Name_CurrentHealth == ClassReps[(int32)ENetFields_Private::CurrentHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AExamplePoolableEnemyPawn"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExamplePoolableEnemyPawn);
AExamplePoolableEnemyPawn::~AExamplePoolableEnemyPawn() {}
// ********** End Class AExamplePoolableEnemyPawn **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h__Script_ActorPooling_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExamplePoolableEnemyPawn, AExamplePoolableEnemyPawn::StaticClass, TEXT("AExamplePoolableEnemyPawn"), &Z_Registration_Info_UClass_AExamplePoolableEnemyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExamplePoolableEnemyPawn), 1484415556U) },
	};
}; // Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h__Script_ActorPooling_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h__Script_ActorPooling_2104952384{
	TEXT("/Script/ActorPooling"),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h__Script_ActorPooling_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableEnemyPawn_h__Script_ActorPooling_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
