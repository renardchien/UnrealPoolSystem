// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PooledProjectileInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePooledProjectileInterface() {}

// ********** Begin Cross Module References ********************************************************
ACTORPOOLING_API UClass* Z_Construct_UClass_UPooledProjectileInterface();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPooledProjectileInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ActorPooling();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPooledProjectileInterface Function ConfigureLaunch ******************
struct PooledProjectileInterface_eventConfigureLaunch_Parms
{
	FVector InitialVelocity;
};
void IPooledProjectileInterface::ConfigureLaunch(FVector const& InitialVelocity)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConfigureLaunch instead.");
}
static FName NAME_UPooledProjectileInterface_ConfigureLaunch = FName(TEXT("ConfigureLaunch"));
void IPooledProjectileInterface::Execute_ConfigureLaunch(UObject* O, FVector const& InitialVelocity)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPooledProjectileInterface::StaticClass()));
	PooledProjectileInterface_eventConfigureLaunch_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPooledProjectileInterface_ConfigureLaunch);
	if (Func)
	{
		Parms.InitialVelocity=std::move(InitialVelocity);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPooledProjectileInterface*)(O->GetNativeInterfaceAddress(UPooledProjectileInterface::StaticClass())))
	{
		I->ConfigureLaunch_Implementation(InitialVelocity);
	}
}
struct Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called once per acquire, immediately after UActorPoolSubsystem::AcquireActor returns - i.e.\n\x09 * after SetActiveInPool(true) and OnAcquiredFromPool() have already run, and after AcquireActor\n\x09 * has already applied Owner/Instigator for this shot (so GetOwner() / GetInstigator() are\n\x09 * already correct by the time this runs). Use this to set initial velocity and any other\n\x09 * per-shot reset that depends on Owner/Instigator (e.g. re-arming a move-ignore list against\n\x09 * the new instigator).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PooledProjectileInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called once per acquire, immediately after UActorPoolSubsystem::AcquireActor returns - i.e.\nafter SetActiveInPool(true) and OnAcquiredFromPool() have already run, and after AcquireActor\nhas already applied Owner/Instigator for this shot (so GetOwner() / GetInstigator() are\nalready correct by the time this runs). Use this to set initial velocity and any other\nper-shot reset that depends on Owner/Instigator (e.g. re-arming a move-ignore list against\nthe new instigator)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConfigureLaunch constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConfigureLaunch constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConfigureLaunch Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::NewProp_InitialVelocity = { "InitialVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PooledProjectileInterface_eventConfigureLaunch_Parms, InitialVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialVelocity_MetaData), NewProp_InitialVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::NewProp_InitialVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::PropPointers) < 2048);
// ********** End Function ConfigureLaunch Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPooledProjectileInterface, nullptr, "ConfigureLaunch", 	Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::PropPointers), 
sizeof(PooledProjectileInterface_eventConfigureLaunch_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PooledProjectileInterface_eventConfigureLaunch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPooledProjectileInterface::execConfigureLaunch)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_InitialVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureLaunch_Implementation(Z_Param_Out_InitialVelocity);
	P_NATIVE_END;
}
// ********** End Interface UPooledProjectileInterface Function ConfigureLaunch ********************

// ********** Begin Interface UPooledProjectileInterface *******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPooledProjectileInterface;
UClass* UPooledProjectileInterface::GetPrivateStaticClass()
{
	using TClass = UPooledProjectileInterface;
	if (!Z_Registration_Info_UClass_UPooledProjectileInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PooledProjectileInterface"),
			Z_Registration_Info_UClass_UPooledProjectileInterface.InnerSingleton,
			StaticRegisterNativesUPooledProjectileInterface,
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
	return Z_Registration_Info_UClass_UPooledProjectileInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPooledProjectileInterface_NoRegister()
{
	return UPooledProjectileInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPooledProjectileInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PooledProjectileInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UPooledProjectileInterface constinit property declarations ***********
// ********** End Interface UPooledProjectileInterface constinit property declarations *************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConfigureLaunch"), .Pointer = &IPooledProjectileInterface::execConfigureLaunch },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPooledProjectileInterface_ConfigureLaunch, "ConfigureLaunch" }, // 1428091710
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPooledProjectileInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPooledProjectileInterface_Statics
UObject* (*const Z_Construct_UClass_UPooledProjectileInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledProjectileInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPooledProjectileInterface_Statics::ClassParams = {
	&UPooledProjectileInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPooledProjectileInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPooledProjectileInterface_Statics::Class_MetaDataParams)
};
void UPooledProjectileInterface::StaticRegisterNativesUPooledProjectileInterface()
{
	UClass* Class = UPooledProjectileInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPooledProjectileInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPooledProjectileInterface()
{
	if (!Z_Registration_Info_UClass_UPooledProjectileInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPooledProjectileInterface.OuterSingleton, Z_Construct_UClass_UPooledProjectileInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPooledProjectileInterface.OuterSingleton;
}
UPooledProjectileInterface::UPooledProjectileInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPooledProjectileInterface);
// ********** End Interface UPooledProjectileInterface *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h__Script_ActorPooling_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPooledProjectileInterface, UPooledProjectileInterface::StaticClass, TEXT("UPooledProjectileInterface"), &Z_Registration_Info_UClass_UPooledProjectileInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPooledProjectileInterface), 3245412648U) },
	};
}; // Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h__Script_ActorPooling_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h__Script_ActorPooling_1147197425{
	TEXT("/Script/ActorPooling"),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h__Script_ActorPooling_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PooledProjectileInterface_h__Script_ActorPooling_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
