// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoolableActorInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePoolableActorInterface() {}

// ********** Begin Cross Module References ********************************************************
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableActorInterface();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableActorInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ActorPooling();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UPoolableActorInterface Function GetActiveInPool *********************
struct PoolableActorInterface_eventGetActiveInPool_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	PoolableActorInterface_eventGetActiveInPool_Parms()
		: ReturnValue(false)
	{
	}
};
bool IPoolableActorInterface::GetActiveInPool() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActiveInPool instead.");
	PoolableActorInterface_eventGetActiveInPool_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UPoolableActorInterface_GetActiveInPool = FName(TEXT("GetActiveInPool"));
bool IPoolableActorInterface::Execute_GetActiveInPool(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActorInterface::StaticClass()));
	PoolableActorInterface_eventGetActiveInPool_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPoolableActorInterface_GetActiveInPool);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IPoolableActorInterface*)(O->GetNativeInterfaceAddress(UPoolableActorInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetActiveInPool_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns whether this actor currently considers itself active in the pool. */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableActorInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether this actor currently considers itself active in the pool." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetActiveInPool constinit property declarations ***********************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetActiveInPool constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetActiveInPool Property Definitions **********************************
void Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PoolableActorInterface_eventGetActiveInPool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PoolableActorInterface_eventGetActiveInPool_Parms), &Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::PropPointers) < 2048);
// ********** End Function GetActiveInPool Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableActorInterface, nullptr, "GetActiveInPool", 	Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::PropPointers), 
sizeof(PoolableActorInterface_eventGetActiveInPool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PoolableActorInterface_eventGetActiveInPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableActorInterface::execGetActiveInPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetActiveInPool_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPoolableActorInterface Function GetActiveInPool ***********************

// ********** Begin Interface UPoolableActorInterface Function OnAcquiredFromPool ******************
void IPoolableActorInterface::OnAcquiredFromPool()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnAcquiredFromPool instead.");
}
static FName NAME_UPoolableActorInterface_OnAcquiredFromPool = FName(TEXT("OnAcquiredFromPool"));
void IPoolableActorInterface::Execute_OnAcquiredFromPool(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPoolableActorInterface_OnAcquiredFromPool);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPoolableActorInterface*)(O->GetNativeInterfaceAddress(UPoolableActorInterface::StaticClass())))
	{
		I->OnAcquiredFromPool_Implementation();
	}
}
struct Z_Construct_UFunction_UPoolableActorInterface_OnAcquiredFromPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called after the actor has been mechanically activated (visible/collidable/ticking).\n\x09 * Use this for gameplay setup: reset health/state, re-enable VFX, start behavior, etc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableActorInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called after the actor has been mechanically activated (visible/collidable/ticking).\nUse this for gameplay setup: reset health/state, re-enable VFX, start behavior, etc." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnAcquiredFromPool constinit property declarations ********************
// ********** End Function OnAcquiredFromPool constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActorInterface_OnAcquiredFromPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableActorInterface, nullptr, "OnAcquiredFromPool", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActorInterface_OnAcquiredFromPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActorInterface_OnAcquiredFromPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableActorInterface_OnAcquiredFromPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActorInterface_OnAcquiredFromPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableActorInterface::execOnAcquiredFromPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAcquiredFromPool_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPoolableActorInterface Function OnAcquiredFromPool ********************

// ********** Begin Interface UPoolableActorInterface Function OnReturnedToPool ********************
void IPoolableActorInterface::OnReturnedToPool()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReturnedToPool instead.");
}
static FName NAME_UPoolableActorInterface_OnReturnedToPool = FName(TEXT("OnReturnedToPool"));
void IPoolableActorInterface::Execute_OnReturnedToPool(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActorInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UPoolableActorInterface_OnReturnedToPool);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IPoolableActorInterface*)(O->GetNativeInterfaceAddress(UPoolableActorInterface::StaticClass())))
	{
		I->OnReturnedToPool_Implementation();
	}
}
struct Z_Construct_UFunction_UPoolableActorInterface_OnReturnedToPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called before the actor is mechanically deactivated.\n\x09 * Use this for gameplay teardown: stop timers, clear VFX, unbind delegates, cancel abilities, etc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableActorInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before the actor is mechanically deactivated.\nUse this for gameplay teardown: stop timers, clear VFX, unbind delegates, cancel abilities, etc." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnReturnedToPool constinit property declarations **********************
// ********** End Function OnReturnedToPool constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActorInterface_OnReturnedToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableActorInterface, nullptr, "OnReturnedToPool", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActorInterface_OnReturnedToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActorInterface_OnReturnedToPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableActorInterface_OnReturnedToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActorInterface_OnReturnedToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableActorInterface::execOnReturnedToPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnReturnedToPool_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UPoolableActorInterface Function OnReturnedToPool **********************

// ********** Begin Interface UPoolableActorInterface Function SetActiveInPool *********************
struct PoolableActorInterface_eventSetActiveInPool_Parms
{
	bool bNewActive;
};
void IPoolableActorInterface::SetActiveInPool(bool bNewActive)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActiveInPool instead.");
}
static FName NAME_UPoolableActorInterface_SetActiveInPool = FName(TEXT("SetActiveInPool"));
void IPoolableActorInterface::Execute_SetActiveInPool(UObject* O, bool bNewActive)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UPoolableActorInterface::StaticClass()));
	PoolableActorInterface_eventSetActiveInPool_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UPoolableActorInterface_SetActiveInPool);
	if (Func)
	{
		Parms.bNewActive=std::move(bNewActive);
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IPoolableActorInterface*)(O->GetNativeInterfaceAddress(UPoolableActorInterface::StaticClass())))
	{
		I->SetActiveInPool_Implementation(bNewActive);
	}
}
struct Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called by the pool subsystem to mechanically toggle the actor's active state\n\x09 * (visibility, collision, tick). If this actor has a UPoolableComponent attached,\n\x09 * the simplest implementation is to just forward to its DefaultActivate/DefaultDeactivate.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableActorInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called by the pool subsystem to mechanically toggle the actor's active state\n(visibility, collision, tick). If this actor has a UPoolableComponent attached,\nthe simplest implementation is to just forward to its DefaultActivate/DefaultDeactivate." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetActiveInPool constinit property declarations ***********************
	static void NewProp_bNewActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetActiveInPool constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetActiveInPool Property Definitions **********************************
void Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::NewProp_bNewActive_SetBit(void* Obj)
{
	((PoolableActorInterface_eventSetActiveInPool_Parms*)Obj)->bNewActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::NewProp_bNewActive = { "bNewActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PoolableActorInterface_eventSetActiveInPool_Parms), &Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::NewProp_bNewActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::NewProp_bNewActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::PropPointers) < 2048);
// ********** End Function SetActiveInPool Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableActorInterface, nullptr, "SetActiveInPool", 	Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::PropPointers), 
sizeof(PoolableActorInterface_eventSetActiveInPool_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(PoolableActorInterface_eventSetActiveInPool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IPoolableActorInterface::execSetActiveInPool)
{
	P_GET_UBOOL(Z_Param_bNewActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveInPool_Implementation(Z_Param_bNewActive);
	P_NATIVE_END;
}
// ********** End Interface UPoolableActorInterface Function SetActiveInPool ***********************

// ********** Begin Interface UPoolableActorInterface **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolableActorInterface;
UClass* UPoolableActorInterface::GetPrivateStaticClass()
{
	using TClass = UPoolableActorInterface;
	if (!Z_Registration_Info_UClass_UPoolableActorInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PoolableActorInterface"),
			Z_Registration_Info_UClass_UPoolableActorInterface.InnerSingleton,
			StaticRegisterNativesUPoolableActorInterface,
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
	return Z_Registration_Info_UClass_UPoolableActorInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolableActorInterface_NoRegister()
{
	return UPoolableActorInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolableActorInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoolableActorInterface.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UPoolableActorInterface constinit property declarations **************
// ********** End Interface UPoolableActorInterface constinit property declarations ****************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetActiveInPool"), .Pointer = &IPoolableActorInterface::execGetActiveInPool },
		{ .NameUTF8 = UTF8TEXT("OnAcquiredFromPool"), .Pointer = &IPoolableActorInterface::execOnAcquiredFromPool },
		{ .NameUTF8 = UTF8TEXT("OnReturnedToPool"), .Pointer = &IPoolableActorInterface::execOnReturnedToPool },
		{ .NameUTF8 = UTF8TEXT("SetActiveInPool"), .Pointer = &IPoolableActorInterface::execSetActiveInPool },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolableActorInterface_GetActiveInPool, "GetActiveInPool" }, // 1438772289
		{ &Z_Construct_UFunction_UPoolableActorInterface_OnAcquiredFromPool, "OnAcquiredFromPool" }, // 1056178560
		{ &Z_Construct_UFunction_UPoolableActorInterface_OnReturnedToPool, "OnReturnedToPool" }, // 4208738729
		{ &Z_Construct_UFunction_UPoolableActorInterface_SetActiveInPool, "SetActiveInPool" }, // 158442308
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPoolableActorInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPoolableActorInterface_Statics
UObject* (*const Z_Construct_UClass_UPoolableActorInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableActorInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolableActorInterface_Statics::ClassParams = {
	&UPoolableActorInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolableActorInterface_Statics::Class_MetaDataParams)
};
void UPoolableActorInterface::StaticRegisterNativesUPoolableActorInterface()
{
	UClass* Class = UPoolableActorInterface::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPoolableActorInterface_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPoolableActorInterface()
{
	if (!Z_Registration_Info_UClass_UPoolableActorInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolableActorInterface.OuterSingleton, Z_Construct_UClass_UPoolableActorInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolableActorInterface.OuterSingleton;
}
UPoolableActorInterface::UPoolableActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPoolableActorInterface);
// ********** End Interface UPoolableActorInterface ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h__Script_ActorPooling_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolableActorInterface, UPoolableActorInterface::StaticClass, TEXT("UPoolableActorInterface"), &Z_Registration_Info_UClass_UPoolableActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolableActorInterface), 1843804757U) },
	};
}; // Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h__Script_ActorPooling_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h__Script_ActorPooling_2744619318{
	TEXT("/Script/ActorPooling"),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h__Script_ActorPooling_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableActorInterface_h__Script_ActorPooling_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
