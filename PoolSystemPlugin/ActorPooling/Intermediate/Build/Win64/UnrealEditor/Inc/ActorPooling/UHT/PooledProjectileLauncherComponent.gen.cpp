// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PooledProjectileLauncherComponent.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePooledProjectileLauncherComponent() {}

// ********** Begin Cross Module References ********************************************************
ACTORPOOLING_API UClass* Z_Construct_UClass_UPooledProjectileLauncherComponent();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPooledProjectileLauncherComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ActorPooling();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPooledProjectileLauncherComponent Function LaunchProjectile *************
struct Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics
{
	struct PooledProjectileLauncherComponent_eventLaunchProjectile_Parms
	{
		TSubclassOf<AActor> ProjectileClass;
		FTransform SpawnTransform;
		FVector InitialVelocity;
		AActor* ProjectileOwner;
		APawn* ProjectileInstigator;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Call ONLY on the server, from already-validated fire logic (e.g. after your own ammo/cooldown\n\x09 * checks). Acquires the authoritative projectile locally and triggers cosmetic spawns on all\n\x09 * clients. Returns the authoritative (server-side) projectile actor, or nullptr if the pool\n\x09 * could not provide one (e.g. a non-recyclable pool that is currently exhausted).\n\x09 *\n\x09 * ProjectileOwner/ProjectileInstigator are forwarded straight to UActorPoolSubsystem::AcquireActor,\n\x09 * which applies them via SetOwner()/SetInstigator() before InitialVelocity is applied, on both\n\x09 * the authoritative instance and every client's cosmetic instance. See\n\x09 * ApplyLaunchConfiguration(). ProjectileClass must implement IPooledProjectileInterface for\n\x09 * InitialVelocity to actually be applied (a warning is logged otherwise); Owner/Instigator are\n\x09 * set regardless.\n\x09 */" },
#endif
		{ "CPP_Default_ProjectileInstigator", "None" },
		{ "CPP_Default_ProjectileOwner", "None" },
		{ "ModuleRelativePath", "Public/PooledProjectileLauncherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call ONLY on the server, from already-validated fire logic (e.g. after your own ammo/cooldown\nchecks). Acquires the authoritative projectile locally and triggers cosmetic spawns on all\nclients. Returns the authoritative (server-side) projectile actor, or nullptr if the pool\ncould not provide one (e.g. a non-recyclable pool that is currently exhausted).\n\nProjectileOwner/ProjectileInstigator are forwarded straight to UActorPoolSubsystem::AcquireActor,\nwhich applies them via SetOwner()/SetInstigator() before InitialVelocity is applied, on both\nthe authoritative instance and every client's cosmetic instance. See\nApplyLaunchConfiguration(). ProjectileClass must implement IPooledProjectileInterface for\nInitialVelocity to actually be applied (a warning is logged otherwise); Owner/Instigator are\nset regardless." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function LaunchProjectile constinit property declarations **********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function LaunchProjectile constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function LaunchProjectile Property Definitions *********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventLaunchProjectile_Parms, ProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventLaunchProjectile_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventLaunchProjectile_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocity_MetaData), NewProp_InitialVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_ProjectileOwner = { "ProjectileOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventLaunchProjectile_Parms, ProjectileOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_ProjectileInstigator = { "ProjectileInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventLaunchProjectile_Parms, ProjectileInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventLaunchProjectile_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_InitialVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_ProjectileOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_ProjectileInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::PropPointers) < 2048);
// ********** End Function LaunchProjectile Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledProjectileLauncherComponent, nullptr, "LaunchProjectile", 	Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::PooledProjectileLauncherComponent_eventLaunchProjectile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::PooledProjectileLauncherComponent_eventLaunchProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPooledProjectileLauncherComponent::execLaunchProjectile)
{
	P_GET_OBJECT(UClass,Z_Param_ProjectileClass);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SpawnTransform);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InitialVelocity);
	P_GET_OBJECT(AActor,Z_Param_ProjectileOwner);
	P_GET_OBJECT(APawn,Z_Param_ProjectileInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->LaunchProjectile(Z_Param_ProjectileClass,Z_Param_Out_SpawnTransform,Z_Param_Out_InitialVelocity,Z_Param_ProjectileOwner,Z_Param_ProjectileInstigator);
	P_NATIVE_END;
}
// ********** End Class UPooledProjectileLauncherComponent Function LaunchProjectile ***************

// ********** Begin Class UPooledProjectileLauncherComponent Function Multicast_SpawnCosmeticProjectile 
struct PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms
{
	TSubclassOf<AActor> ProjectileClass;
	FTransform SpawnTransform;
	FVector InitialVelocity;
	AActor* ProjectileOwner;
	APawn* ProjectileInstigator;
};
static FName NAME_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile = FName(TEXT("Multicast_SpawnCosmeticProjectile"));
void UPooledProjectileLauncherComponent::Multicast_SpawnCosmeticProjectile(TSubclassOf<AActor> ProjectileClass, FTransform const& SpawnTransform, FVector const& InitialVelocity, AActor* ProjectileOwner, APawn* ProjectileInstigator)
{
	PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms Parms;
	Parms.ProjectileClass=ProjectileClass;
	Parms.SpawnTransform=SpawnTransform;
	Parms.InitialVelocity=InitialVelocity;
	Parms.ProjectileOwner=ProjectileOwner;
	Parms.ProjectileInstigator=ProjectileInstigator;
	UFunction* Func = FindFunctionChecked(NAME_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PooledProjectileLauncherComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Multicast_SpawnCosmeticProjectile constinit property declarations *****
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileInstigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Multicast_SpawnCosmeticProjectile constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Multicast_SpawnCosmeticProjectile Property Definitions ****************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms, ProjectileClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_SpawnTransform = { "SpawnTransform", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms, SpawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnTransform_MetaData), NewProp_SpawnTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocity_MetaData), NewProp_InitialVelocity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_ProjectileOwner = { "ProjectileOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms, ProjectileOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_ProjectileInstigator = { "ProjectileInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms, ProjectileInstigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_ProjectileClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_SpawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_InitialVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_ProjectileOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::NewProp_ProjectileInstigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::PropPointers) < 2048);
// ********** End Function Multicast_SpawnCosmeticProjectile Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledProjectileLauncherComponent, nullptr, "Multicast_SpawnCosmeticProjectile", 	Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::PropPointers), 
sizeof(PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PooledProjectileLauncherComponent_eventMulticast_SpawnCosmeticProjectile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPooledProjectileLauncherComponent::execMulticast_SpawnCosmeticProjectile)
{
	P_GET_OBJECT(UClass,Z_Param_ProjectileClass);
	P_GET_STRUCT(FTransform,Z_Param_SpawnTransform);
	P_GET_STRUCT(FVector,Z_Param_InitialVelocity);
	P_GET_OBJECT(AActor,Z_Param_ProjectileOwner);
	P_GET_OBJECT(APawn,Z_Param_ProjectileInstigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Multicast_SpawnCosmeticProjectile_Implementation(Z_Param_ProjectileClass,Z_Param_SpawnTransform,Z_Param_InitialVelocity,Z_Param_ProjectileOwner,Z_Param_ProjectileInstigator);
	P_NATIVE_END;
}
// ********** End Class UPooledProjectileLauncherComponent Function Multicast_SpawnCosmeticProjectile 

// ********** Begin Class UPooledProjectileLauncherComponent ***************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPooledProjectileLauncherComponent;
UClass* UPooledProjectileLauncherComponent::GetPrivateStaticClass()
{
	using TClass = UPooledProjectileLauncherComponent;
	if (!Z_Registration_Info_UClass_UPooledProjectileLauncherComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PooledProjectileLauncherComponent"),
			Z_Registration_Info_UClass_UPooledProjectileLauncherComponent.InnerSingleton,
			StaticRegisterNativesUPooledProjectileLauncherComponent,
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
	return Z_Registration_Info_UClass_UPooledProjectileLauncherComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPooledProjectileLauncherComponent_NoRegister()
{
	return UPooledProjectileLauncherComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Attach to a weapon/pawn that fires pooled, NON-replicated projectiles (bReplicates = false\n * on the projectile class itself). Each machine, server and every client, maintains its own\n * fully independent local pool for the projectile class; they never synchronize over the\n * network beyond this one triggering call.\n *\n * On the server: LaunchProjectile acquires and initializes the authoritative projectile from\n * the server's own local pool (this is the only instance that counts for gameplay/damage),\n * then fires an unreliable multicast so every client acquires and initializes its own purely\n * cosmetic copy from its own local pool. Each client-side projectile then simulates entirely\n * locally (e.g. via its own UProjectileMovementComponent) with no further network involvement.\n *\n * Listen-server note: on a listen server, NetMulticast RPCs also execute locally on the host\n * itself. Multicast_SpawnCosmeticProjectile guards against this to avoid the host spawning two\n * projectiles per shot (one authoritative, one redundant cosmetic).\n */" },
#endif
		{ "IncludePath", "PooledProjectileLauncherComponent.h" },
		{ "ModuleRelativePath", "Public/PooledProjectileLauncherComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attach to a weapon/pawn that fires pooled, NON-replicated projectiles (bReplicates = false\non the projectile class itself). Each machine, server and every client, maintains its own\nfully independent local pool for the projectile class; they never synchronize over the\nnetwork beyond this one triggering call.\n\nOn the server: LaunchProjectile acquires and initializes the authoritative projectile from\nthe server's own local pool (this is the only instance that counts for gameplay/damage),\nthen fires an unreliable multicast so every client acquires and initializes its own purely\ncosmetic copy from its own local pool. Each client-side projectile then simulates entirely\nlocally (e.g. via its own UProjectileMovementComponent) with no further network involvement.\n\nListen-server note: on a listen server, NetMulticast RPCs also execute locally on the host\nitself. Multicast_SpawnCosmeticProjectile guards against this to avoid the host spawning two\nprojectiles per shot (one authoritative, one redundant cosmetic)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UPooledProjectileLauncherComponent constinit property declarations *******
// ********** End Class UPooledProjectileLauncherComponent constinit property declarations *********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("LaunchProjectile"), .Pointer = &UPooledProjectileLauncherComponent::execLaunchProjectile },
		{ .NameUTF8 = UTF8TEXT("Multicast_SpawnCosmeticProjectile"), .Pointer = &UPooledProjectileLauncherComponent::execMulticast_SpawnCosmeticProjectile },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPooledProjectileLauncherComponent_LaunchProjectile, "LaunchProjectile" }, // 1793635818
		{ &Z_Construct_UFunction_UPooledProjectileLauncherComponent_Multicast_SpawnCosmeticProjectile, "Multicast_SpawnCosmeticProjectile" }, // 3765961210
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPooledProjectileLauncherComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics
UObject* (*const Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics::ClassParams = {
	&UPooledProjectileLauncherComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics::Class_MetaDataParams)
};
void UPooledProjectileLauncherComponent::StaticRegisterNativesUPooledProjectileLauncherComponent()
{
	UClass* Class = UPooledProjectileLauncherComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPooledProjectileLauncherComponent()
{
	if (!Z_Registration_Info_UClass_UPooledProjectileLauncherComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPooledProjectileLauncherComponent.OuterSingleton, Z_Construct_UClass_UPooledProjectileLauncherComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPooledProjectileLauncherComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPooledProjectileLauncherComponent);
UPooledProjectileLauncherComponent::~UPooledProjectileLauncherComponent() {}
// ********** End Class UPooledProjectileLauncherComponent *****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h__Script_ActorPooling_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPooledProjectileLauncherComponent, UPooledProjectileLauncherComponent::StaticClass, TEXT("UPooledProjectileLauncherComponent"), &Z_Registration_Info_UClass_UPooledProjectileLauncherComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPooledProjectileLauncherComponent), 2684119355U) },
	};
}; // Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h__Script_ActorPooling_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h__Script_ActorPooling_3572218653{
	TEXT("/Script/ActorPooling"),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h__Script_ActorPooling_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileLauncherComponent_h__Script_ActorPooling_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
