// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ExamplePoolableProjectile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeExamplePoolableProjectile() {}

// ********** Begin Cross Module References ********************************************************
ACTORPOOLING_API UClass* Z_Construct_UClass_AExamplePoolableProjectile();
ACTORPOOLING_API UClass* Z_Construct_UClass_AExamplePoolableProjectile_NoRegister();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableActorInterface_NoRegister();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableComponent_NoRegister();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPooledProjectileInterface_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ActorPooling();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AExamplePoolableProjectile Function SetLaunchVelocity ********************
struct Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics
{
	struct ExamplePoolableProjectile_eventSetLaunchVelocity_Parms
	{
		FVector Velocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Call right after acquiring this actor from the pool. Safe to call on the server's authoritative instance or on a client's cosmetic instance alike. */" },
#endif
		{ "ModuleRelativePath", "Public/ExamplePoolableProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Call right after acquiring this actor from the pool. Safe to call on the server's authoritative instance or on a client's cosmetic instance alike." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLaunchVelocity constinit property declarations *********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLaunchVelocity constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLaunchVelocity Property Definitions ********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExamplePoolableProjectile_eventSetLaunchVelocity_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::NewProp_Velocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::PropPointers) < 2048);
// ********** End Function SetLaunchVelocity Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AExamplePoolableProjectile, nullptr, "SetLaunchVelocity", 	Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::ExamplePoolableProjectile_eventSetLaunchVelocity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::ExamplePoolableProjectile_eventSetLaunchVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AExamplePoolableProjectile::execSetLaunchVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLaunchVelocity(Z_Param_Out_Velocity);
	P_NATIVE_END;
}
// ********** End Class AExamplePoolableProjectile Function SetLaunchVelocity **********************

// ********** Begin Class AExamplePoolableProjectile ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AExamplePoolableProjectile;
UClass* AExamplePoolableProjectile::GetPrivateStaticClass()
{
	using TClass = AExamplePoolableProjectile;
	if (!Z_Registration_Info_UClass_AExamplePoolableProjectile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ExamplePoolableProjectile"),
			Z_Registration_Info_UClass_AExamplePoolableProjectile.InnerSingleton,
			StaticRegisterNativesAExamplePoolableProjectile,
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
	return Z_Registration_Info_UClass_AExamplePoolableProjectile.InnerSingleton;
}
UClass* Z_Construct_UClass_AExamplePoolableProjectile_NoRegister()
{
	return AExamplePoolableProjectile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AExamplePoolableProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Example poolable projectile actor. Demonstrates the minimal setup needed for a class to\n * work correctly with UActorPoolSubsystem and UPooledProjectileLauncherComponent:\n *\n *   - Implements IPoolableActorInterface, forwarding activation mechanics to UPoolableComponent.\n *   - bReplicates = false: server and every client spawn and simulate their own fully\n *     independent instance of this class. Movement is never sent over the network - see\n *     UPooledProjectileLauncherComponent for how one server-side call triggers a local\n *     acquire on every machine.\n *   - Implements IPooledProjectileInterface, forwarding ConfigureLaunch to SetLaunchVelocity()\n *     so UPooledProjectileLauncherComponent can apply launch velocity generically.\n *\n * Treat this as a template to copy into your own project and adapt (mesh, VFX, damage,\n * collision channel) rather than shipping it as-is.\n */" },
#endif
		{ "IncludePath", "ExamplePoolableProjectile.h" },
		{ "ModuleRelativePath", "Public/ExamplePoolableProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Example poolable projectile actor. Demonstrates the minimal setup needed for a class to\nwork correctly with UActorPoolSubsystem and UPooledProjectileLauncherComponent:\n\n  - Implements IPoolableActorInterface, forwarding activation mechanics to UPoolableComponent.\n  - bReplicates = false: server and every client spawn and simulate their own fully\n    independent instance of this class. Movement is never sent over the network - see\n    UPooledProjectileLauncherComponent for how one server-side call triggers a local\n    acquire on every machine.\n  - Implements IPooledProjectileInterface, forwarding ConfigureLaunch to SetLaunchVelocity()\n    so UPooledProjectileLauncherComponent can apply launch velocity generically.\n\nTreat this as a template to copy into your own project and adapt (mesh, VFX, damage,\ncollision channel) rather than shipping it as-is." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Root collision. Swap for your game's actual projectile collision shape/profile. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExamplePoolableProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root collision. Swap for your game's actual projectile collision shape/profile." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Drives local-only movement simulation. Never replicated - each machine simulates its own instance from its own SetLaunchVelocity call. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExamplePoolableProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drives local-only movement simulation. Never replicated - each machine simulates its own instance from its own SetLaunchVelocity call." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PoolableComponent_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles activate/deactivate mechanics (visibility, collision, tick). */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ExamplePoolableProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles activate/deactivate mechanics (visibility, collision, tick)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLifetimeSeconds_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Safety net: auto-returns to the pool after this many seconds if nothing else (e.g. a hit) returns it first. Set to 0 to disable. */" },
#endif
		{ "ModuleRelativePath", "Public/ExamplePoolableProjectile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Safety net: auto-returns to the pool after this many seconds if nothing else (e.g. a hit) returns it first. Set to 0 to disable." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AExamplePoolableProjectile constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PoolableComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLifetimeSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AExamplePoolableProjectile constinit property declarations *****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetLaunchVelocity"), .Pointer = &AExamplePoolableProjectile::execSetLaunchVelocity },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AExamplePoolableProjectile_SetLaunchVelocity, "SetLaunchVelocity" }, // 1979183907
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExamplePoolableProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AExamplePoolableProjectile_Statics

// ********** Begin Class AExamplePoolableProjectile Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExamplePoolableProjectile_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExamplePoolableProjectile, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExamplePoolableProjectile_Statics::NewProp_ProjectileMovement = { "ProjectileMovement", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExamplePoolableProjectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovement_MetaData), NewProp_ProjectileMovement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AExamplePoolableProjectile_Statics::NewProp_PoolableComponent = { "PoolableComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExamplePoolableProjectile, PoolableComponent), Z_Construct_UClass_UPoolableComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PoolableComponent_MetaData), NewProp_PoolableComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExamplePoolableProjectile_Statics::NewProp_MaxLifetimeSeconds = { "MaxLifetimeSeconds", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExamplePoolableProjectile, MaxLifetimeSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLifetimeSeconds_MetaData), NewProp_MaxLifetimeSeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExamplePoolableProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamplePoolableProjectile_Statics::NewProp_CollisionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamplePoolableProjectile_Statics::NewProp_ProjectileMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamplePoolableProjectile_Statics::NewProp_PoolableComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExamplePoolableProjectile_Statics::NewProp_MaxLifetimeSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExamplePoolableProjectile_Statics::PropPointers) < 2048);
// ********** End Class AExamplePoolableProjectile Property Definitions ****************************
UObject* (*const Z_Construct_UClass_AExamplePoolableProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExamplePoolableProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AExamplePoolableProjectile_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPoolableActorInterface_NoRegister, (int32)VTABLE_OFFSET(AExamplePoolableProjectile, IPoolableActorInterface), false },  // 1843804757
	{ Z_Construct_UClass_UPooledProjectileInterface_NoRegister, (int32)VTABLE_OFFSET(AExamplePoolableProjectile, IPooledProjectileInterface), false },  // 3245412648
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExamplePoolableProjectile_Statics::ClassParams = {
	&AExamplePoolableProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AExamplePoolableProjectile_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AExamplePoolableProjectile_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExamplePoolableProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AExamplePoolableProjectile_Statics::Class_MetaDataParams)
};
void AExamplePoolableProjectile::StaticRegisterNativesAExamplePoolableProjectile()
{
	UClass* Class = AExamplePoolableProjectile::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AExamplePoolableProjectile_Statics::Funcs));
}
UClass* Z_Construct_UClass_AExamplePoolableProjectile()
{
	if (!Z_Registration_Info_UClass_AExamplePoolableProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExamplePoolableProjectile.OuterSingleton, Z_Construct_UClass_AExamplePoolableProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExamplePoolableProjectile.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AExamplePoolableProjectile);
AExamplePoolableProjectile::~AExamplePoolableProjectile() {}
// ********** End Class AExamplePoolableProjectile *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h__Script_ActorPooling_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExamplePoolableProjectile, AExamplePoolableProjectile::StaticClass, TEXT("AExamplePoolableProjectile"), &Z_Registration_Info_UClass_AExamplePoolableProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExamplePoolableProjectile), 3616341532U) },
	};
}; // Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h__Script_ActorPooling_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h__Script_ActorPooling_2349767066{
	TEXT("/Script/ActorPooling"),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h__Script_ActorPooling_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_ExamplePoolableProjectile_h__Script_ActorPooling_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
