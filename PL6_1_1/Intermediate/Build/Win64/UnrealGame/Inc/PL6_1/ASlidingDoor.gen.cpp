// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/ASlidingDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASlidingDoor() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_AASlidingDoor_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_AASlidingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AASlidingDoor::execOpenDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenDoor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASlidingDoor::execCloseDoor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseDoor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASlidingDoor::execTimelineEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AASlidingDoor::execTimelineTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineTick();
		P_NATIVE_END;
	}
	static FName NAME_AASlidingDoor_CloseDoor = FName(TEXT("CloseDoor"));
	bool AASlidingDoor::CloseDoor()
	{
		ASlidingDoor_eventCloseDoor_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AASlidingDoor_CloseDoor),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AASlidingDoor_OpenDoor = FName(TEXT("OpenDoor"));
	bool AASlidingDoor::OpenDoor()
	{
		ASlidingDoor_eventOpenDoor_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AASlidingDoor_OpenDoor),&Parms);
		return !!Parms.ReturnValue;
	}
	void AASlidingDoor::StaticRegisterNativesAASlidingDoor()
	{
		UClass* Class = AASlidingDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &AASlidingDoor::execCloseDoor },
			{ "OpenDoor", &AASlidingDoor::execOpenDoor },
			{ "TimelineEnd", &AASlidingDoor::execTimelineEnd },
			{ "TimelineTick", &AASlidingDoor::execTimelineTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASlidingDoor_eventCloseDoor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASlidingDoor_eventCloseDoor_Parms), &Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* close the door only if it's fully open and can be close\n\x09* @return Return true if he succeded\n\x09*/" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/ASlidingDoor.h" },
		{ "ToolTip", "close the door only if it's fully open and can be close\n@return Return true if he succeded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASlidingDoor, nullptr, "CloseDoor", nullptr, nullptr, sizeof(ASlidingDoor_eventCloseDoor_Parms), Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASlidingDoor_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AASlidingDoor_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ASlidingDoor_eventOpenDoor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASlidingDoor_eventOpenDoor_Parms), &Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* open the door only if it's ready to be open\n\x09* @return Return true if he succeded\n\x09*/" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/ASlidingDoor.h" },
		{ "ToolTip", "open the door only if it's ready to be open\n@return Return true if he succeded" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASlidingDoor, nullptr, "OpenDoor", nullptr, nullptr, sizeof(ASlidingDoor_eventOpenDoor_Parms), Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASlidingDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AASlidingDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASlidingDoor_TimelineEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASlidingDoor_TimelineEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* The function is called at the end of the timeline, check if the door is open and open reverse the timeline closing the door\n\x09*/" },
		{ "ModuleRelativePath", "Public/ASlidingDoor.h" },
		{ "ToolTip", "The function is called at the end of the timeline, check if the door is open and open reverse the timeline closing the door" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AASlidingDoor_TimelineEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASlidingDoor, nullptr, "TimelineEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASlidingDoor_TimelineEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASlidingDoor_TimelineEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASlidingDoor_TimelineEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AASlidingDoor_TimelineEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AASlidingDoor_TimelineTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AASlidingDoor_TimelineTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* The function is called in the update of the timeline, and open the the door using the curve\n\x09*/" },
		{ "ModuleRelativePath", "Public/ASlidingDoor.h" },
		{ "ToolTip", "The function is called in the update of the timeline, and open the the door using the curve" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AASlidingDoor_TimelineTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AASlidingDoor, nullptr, "TimelineTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AASlidingDoor_TimelineTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AASlidingDoor_TimelineTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AASlidingDoor_TimelineTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AASlidingDoor_TimelineTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AASlidingDoor);
	UClass* Z_Construct_UClass_AASlidingDoor_NoRegister()
	{
		return AASlidingDoor::StaticClass();
	}
	struct Z_Construct_UClass_AASlidingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorOpeningCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorOpeningCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeClose_MetaData[];
#endif
		static void NewProp_bCanBeClose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeClose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASlidingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AASlidingDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AASlidingDoor_CloseDoor, "CloseDoor" }, // 1079594107
		{ &Z_Construct_UFunction_AASlidingDoor_OpenDoor, "OpenDoor" }, // 2276399440
		{ &Z_Construct_UFunction_AASlidingDoor_TimelineEnd, "TimelineEnd" }, // 4055878561
		{ &Z_Construct_UFunction_AASlidingDoor_TimelineTick, "TimelineTick" }, // 3345917136
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASlidingDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ASlidingDoor.h" },
		{ "ModuleRelativePath", "Public/ASlidingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASlidingDoor_Statics::NewProp_DoorOpeningCurve_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "/**\n\x09* the curve used in the timeline\n\x09*/" },
		{ "ModuleRelativePath", "Public/ASlidingDoor.h" },
		{ "ToolTip", "the curve used in the timeline" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASlidingDoor_Statics::NewProp_DoorOpeningCurve = { "DoorOpeningCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASlidingDoor, DoorOpeningCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASlidingDoor_Statics::NewProp_DoorOpeningCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoor_Statics::NewProp_DoorOpeningCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASlidingDoor_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "/**\n\x09* this variable must be setted on begin play\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ASlidingDoor.h" },
		{ "ToolTip", "this variable must be setted on begin play" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASlidingDoor_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASlidingDoor, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASlidingDoor_Statics::NewProp_Door_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoor_Statics::NewProp_Door_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASlidingDoor_Statics::NewProp_bCanBeClose_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "/**\n\x09* this value is used only in automatic doors and determins if the door can be closed\n\x09*/" },
		{ "ModuleRelativePath", "Public/ASlidingDoor.h" },
		{ "ToolTip", "this value is used only in automatic doors and determins if the door can be closed" },
	};
#endif
	void Z_Construct_UClass_AASlidingDoor_Statics::NewProp_bCanBeClose_SetBit(void* Obj)
	{
		((AASlidingDoor*)Obj)->bCanBeClose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AASlidingDoor_Statics::NewProp_bCanBeClose = { "bCanBeClose", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AASlidingDoor), &Z_Construct_UClass_AASlidingDoor_Statics::NewProp_bCanBeClose_SetBit, METADATA_PARAMS(Z_Construct_UClass_AASlidingDoor_Statics::NewProp_bCanBeClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoor_Statics::NewProp_bCanBeClose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASlidingDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASlidingDoor_Statics::NewProp_DoorOpeningCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASlidingDoor_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASlidingDoor_Statics::NewProp_bCanBeClose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASlidingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASlidingDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AASlidingDoor_Statics::ClassParams = {
		&AASlidingDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AASlidingDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AASlidingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AASlidingDoor()
	{
		if (!Z_Registration_Info_UClass_AASlidingDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASlidingDoor.OuterSingleton, Z_Construct_UClass_AASlidingDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AASlidingDoor.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<AASlidingDoor>()
	{
		return AASlidingDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASlidingDoor);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AASlidingDoor, AASlidingDoor::StaticClass, TEXT("AASlidingDoor"), &Z_Registration_Info_UClass_AASlidingDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASlidingDoor), 3507687304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoor_h_287638304(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
