// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoolableComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePoolableComponent() {}

// ********** Begin Cross Module References ********************************************************
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableComponent();
ACTORPOOLING_API UClass* Z_Construct_UClass_UPoolableComponent_NoRegister();
ACTORPOOLING_API UFunction* Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ActorPooling();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnPoolActiveStateChanged *********************************************
struct Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics
{
	struct _Script_ActorPooling_eventOnPoolActiveStateChanged_Parms
	{
		bool bIsActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoolableComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FOnPoolActiveStateChanged constinit property declarations *************
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FOnPoolActiveStateChanged constinit property declarations ***************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FOnPoolActiveStateChanged Property Definitions ************************
void Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((_Script_ActorPooling_eventOnPoolActiveStateChanged_Parms*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ActorPooling_eventOnPoolActiveStateChanged_Parms), &Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::NewProp_bIsActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FOnPoolActiveStateChanged Property Definitions **************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_ActorPooling, nullptr, "OnPoolActiveStateChanged__DelegateSignature", 	Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::_Script_ActorPooling_eventOnPoolActiveStateChanged_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::_Script_ActorPooling_eventOnPoolActiveStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPoolActiveStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPoolActiveStateChanged, bool bIsActive)
{
	struct _Script_ActorPooling_eventOnPoolActiveStateChanged_Parms
	{
		bool bIsActive;
	};
	_Script_ActorPooling_eventOnPoolActiveStateChanged_Parms Parms;
	Parms.bIsActive=bIsActive ? true : false;
	OnPoolActiveStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnPoolActiveStateChanged ***********************************************

// ********** Begin Class UPoolableComponent Function DefaultActivate ******************************
struct Z_Construct_UFunction_UPoolableComponent_DefaultActivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default mechanical activation: unhide actor, enable collision, enable tick. */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default mechanical activation: unhide actor, enable collision, enable tick." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DefaultActivate constinit property declarations ***********************
// ********** End Function DefaultActivate constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableComponent_DefaultActivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableComponent, nullptr, "DefaultActivate", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableComponent_DefaultActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableComponent_DefaultActivate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableComponent_DefaultActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableComponent_DefaultActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolableComponent::execDefaultActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultActivate();
	P_NATIVE_END;
}
// ********** End Class UPoolableComponent Function DefaultActivate ********************************

// ********** Begin Class UPoolableComponent Function DefaultDeactivate ****************************
struct Z_Construct_UFunction_UPoolableComponent_DefaultDeactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default mechanical deactivation: hide actor, disable collision, disable tick. */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default mechanical deactivation: hide actor, disable collision, disable tick." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function DefaultDeactivate constinit property declarations *********************
// ********** End Function DefaultDeactivate constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableComponent_DefaultDeactivate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableComponent, nullptr, "DefaultDeactivate", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableComponent_DefaultDeactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableComponent_DefaultDeactivate_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableComponent_DefaultDeactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableComponent_DefaultDeactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolableComponent::execDefaultDeactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DefaultDeactivate();
	P_NATIVE_END;
}
// ********** End Class UPoolableComponent Function DefaultDeactivate ******************************

// ********** Begin Class UPoolableComponent Function OnRep_ActiveInPool ***************************
struct Z_Construct_UFunction_UPoolableComponent_OnRep_ActiveInPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoolableComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnRep_ActiveInPool constinit property declarations ********************
// ********** End Function OnRep_ActiveInPool constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableComponent_OnRep_ActiveInPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableComponent, nullptr, "OnRep_ActiveInPool", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableComponent_OnRep_ActiveInPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableComponent_OnRep_ActiveInPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableComponent_OnRep_ActiveInPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableComponent_OnRep_ActiveInPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolableComponent::execOnRep_ActiveInPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ActiveInPool();
	P_NATIVE_END;
}
// ********** End Class UPoolableComponent Function OnRep_ActiveInPool *****************************

// ********** Begin Class UPoolableComponent Function RequestReturnToPool **************************
struct Z_Construct_UFunction_UPoolableComponent_RequestReturnToPool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Asks the pool subsystem to return the owning actor to its pool. Only has effect when the owning actor has authority. */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Asks the pool subsystem to return the owning actor to its pool. Only has effect when the owning actor has authority." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function RequestReturnToPool constinit property declarations *******************
// ********** End Function RequestReturnToPool constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPoolableComponent_RequestReturnToPool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPoolableComponent, nullptr, "RequestReturnToPool", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPoolableComponent_RequestReturnToPool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPoolableComponent_RequestReturnToPool_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPoolableComponent_RequestReturnToPool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPoolableComponent_RequestReturnToPool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPoolableComponent::execRequestReturnToPool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestReturnToPool();
	P_NATIVE_END;
}
// ********** End Class UPoolableComponent Function RequestReturnToPool ****************************

// ********** Begin Class UPoolableComponent *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPoolableComponent;
UClass* UPoolableComponent::GetPrivateStaticClass()
{
	using TClass = UPoolableComponent;
	if (!Z_Registration_Info_UClass_UPoolableComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PoolableComponent"),
			Z_Registration_Info_UClass_UPoolableComponent.InnerSingleton,
			StaticRegisterNativesUPoolableComponent,
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
	return Z_Registration_Info_UClass_UPoolableComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UPoolableComponent_NoRegister()
{
	return UPoolableComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPoolableComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Optional convenience component. Attach to any actor that implements IPoolableActorInterface\n * to get default activate/deactivate mechanics (visibility, collision, tick) for free, plus a\n * replicated active-state flag so clients learn about pool state changes automatically.\n *\n * Typical usage: the owning actor's SetActiveInPool (interface function) implementation simply\n * calls DefaultActivate() / DefaultDeactivate() on this component. A Blueprint-only actor can\n * wire the SetActiveInPool event straight to this component's functions with no other code.\n *\n * Pooling decisions are server-authoritative: RequestReturnToPool only has effect when called\n * with authority. bActiveInPool is replicated so clients mirror activation state automatically.\n */" },
#endif
		{ "IncludePath", "PoolableComponent.h" },
		{ "ModuleRelativePath", "Public/PoolableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional convenience component. Attach to any actor that implements IPoolableActorInterface\nto get default activate/deactivate mechanics (visibility, collision, tick) for free, plus a\nreplicated active-state flag so clients learn about pool state changes automatically.\n\nTypical usage: the owning actor's SetActiveInPool (interface function) implementation simply\ncalls DefaultActivate() / DefaultDeactivate() on this component. A Blueprint-only actor can\nwire the SetActiveInPool event straight to this component's functions with no other code.\n\nPooling decisions are server-authoritative: RequestReturnToPool only has effect when called\nwith authority. bActiveInPool is replicated so clients mirror activation state automatically." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActiveInPool_MetaData[] = {
		{ "Category", "Pooling" },
		{ "ModuleRelativePath", "Public/PoolableComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPoolActiveStateChanged_MetaData[] = {
		{ "Category", "Pooling" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Broadcast locally whenever active state changes, on server (via Default*) or client (via OnRep). Useful for hooking up visual/audio side effects without subclassing. */" },
#endif
		{ "ModuleRelativePath", "Public/PoolableComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Broadcast locally whenever active state changes, on server (via Default*) or client (via OnRep). Useful for hooking up visual/audio side effects without subclassing." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UPoolableComponent constinit property declarations ***********************
	static void NewProp_bActiveInPool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveInPool;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPoolActiveStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPoolableComponent constinit property declarations *************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("DefaultActivate"), .Pointer = &UPoolableComponent::execDefaultActivate },
		{ .NameUTF8 = UTF8TEXT("DefaultDeactivate"), .Pointer = &UPoolableComponent::execDefaultDeactivate },
		{ .NameUTF8 = UTF8TEXT("OnRep_ActiveInPool"), .Pointer = &UPoolableComponent::execOnRep_ActiveInPool },
		{ .NameUTF8 = UTF8TEXT("RequestReturnToPool"), .Pointer = &UPoolableComponent::execRequestReturnToPool },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPoolableComponent_DefaultActivate, "DefaultActivate" }, // 538564386
		{ &Z_Construct_UFunction_UPoolableComponent_DefaultDeactivate, "DefaultDeactivate" }, // 1972314040
		{ &Z_Construct_UFunction_UPoolableComponent_OnRep_ActiveInPool, "OnRep_ActiveInPool" }, // 2616051622
		{ &Z_Construct_UFunction_UPoolableComponent_RequestReturnToPool, "RequestReturnToPool" }, // 623899565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoolableComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPoolableComponent_Statics

// ********** Begin Class UPoolableComponent Property Definitions **********************************
void Z_Construct_UClass_UPoolableComponent_Statics::NewProp_bActiveInPool_SetBit(void* Obj)
{
	((UPoolableComponent*)Obj)->bActiveInPool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoolableComponent_Statics::NewProp_bActiveInPool = { "bActiveInPool", "OnRep_ActiveInPool", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPoolableComponent), &Z_Construct_UClass_UPoolableComponent_Statics::NewProp_bActiveInPool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActiveInPool_MetaData), NewProp_bActiveInPool_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPoolableComponent_Statics::NewProp_OnPoolActiveStateChanged = { "OnPoolActiveStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPoolableComponent, OnPoolActiveStateChanged), Z_Construct_UDelegateFunction_ActorPooling_OnPoolActiveStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPoolActiveStateChanged_MetaData), NewProp_OnPoolActiveStateChanged_MetaData) }; // 2717606933
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoolableComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolableComponent_Statics::NewProp_bActiveInPool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoolableComponent_Statics::NewProp_OnPoolActiveStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableComponent_Statics::PropPointers) < 2048);
// ********** End Class UPoolableComponent Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UPoolableComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorPooling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolableComponent_Statics::ClassParams = {
	&UPoolableComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPoolableComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolableComponent_Statics::Class_MetaDataParams)
};
void UPoolableComponent::StaticRegisterNativesUPoolableComponent()
{
	UClass* Class = UPoolableComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPoolableComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPoolableComponent()
{
	if (!Z_Registration_Info_UClass_UPoolableComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolableComponent.OuterSingleton, Z_Construct_UClass_UPoolableComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPoolableComponent.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void UPoolableComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_bActiveInPool(TEXT("bActiveInPool"));
	const bool bIsValid = true
		&& Name_bActiveInPool == ClassReps[(int32)ENetFields_Private::bActiveInPool].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPoolableComponent"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPoolableComponent);
UPoolableComponent::~UPoolableComponent() {}
// ********** End Class UPoolableComponent *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h__Script_ActorPooling_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPoolableComponent, UPoolableComponent::StaticClass, TEXT("UPoolableComponent"), &Z_Registration_Info_UClass_UPoolableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolableComponent), 2272373108U) },
	};
}; // Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h__Script_ActorPooling_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h__Script_ActorPooling_2074249246{
	TEXT("/Script/ActorPooling"),
	Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h__Script_ActorPooling_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PoolSystemDemo_Plugins_ActorPooling_Source_ActorPooling_Public_PoolableComponent_h__Script_ActorPooling_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
