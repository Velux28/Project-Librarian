// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/Main_PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_PlayerCharacter() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_AMain_PlayerCharacter_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_AMain_PlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PL6_1_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
	PL6_1_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
// End Cross Module References
	DEFINE_FUNCTION(AMain_PlayerCharacter::execHandleCrouch)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param__Camera);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HandleCrouch(Z_Param__Camera);
		P_NATIVE_END;
	}
	void AMain_PlayerCharacter::StaticRegisterNativesAMain_PlayerCharacter()
	{
		UClass* Class = AMain_PlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCrouch", &AMain_PlayerCharacter::execHandleCrouch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics
	{
		struct Main_PlayerCharacter_eventHandleCrouch_Parms
		{
			UCameraComponent* _Camera;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__Camera;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp__Camera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp__Camera = { "_Camera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Main_PlayerCharacter_eventHandleCrouch_Parms, _Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp__Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp__Camera_MetaData)) };
	void Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Main_PlayerCharacter_eventHandleCrouch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Main_PlayerCharacter_eventHandleCrouch_Parms), &Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp__Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMain_PlayerCharacter, nullptr, "HandleCrouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::Main_PlayerCharacter_eventHandleCrouch_Parms), Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMain_PlayerCharacter);
	UClass* Z_Construct_UClass_AMain_PlayerCharacter_NoRegister()
	{
		return AMain_PlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMain_PlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCrouching_MetaData[];
#endif
		static void NewProp_bIsCrouching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCrouching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMidCrouchAnim_MetaData[];
#endif
		static void NewProp_bIsMidCrouchAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMidCrouchAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_c_MetaData[];
#endif
		static void NewProp_c_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_c;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerUncrouchHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerUncrouchHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrouchFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncrouchFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UncrouchFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrPlayerDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrPlayerDialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMain_PlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMain_PlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMain_PlayerCharacter_HandleCrouch, "HandleCrouch" }, // 1657385412
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Main_PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((AMain_PlayerCharacter*)Obj)->bIsMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMoving = { "bIsMoving", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMain_PlayerCharacter), &Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsCrouching_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsCrouching_SetBit(void* Obj)
	{
		((AMain_PlayerCharacter*)Obj)->bIsCrouching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsCrouching = { "bIsCrouching", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMain_PlayerCharacter), &Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsCrouching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsCrouching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsCrouching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMidCrouchAnim_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMidCrouchAnim_SetBit(void* Obj)
	{
		((AMain_PlayerCharacter*)Obj)->bIsMidCrouchAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMidCrouchAnim = { "bIsMidCrouchAnim", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMain_PlayerCharacter), &Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMidCrouchAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMidCrouchAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMidCrouchAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_c_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_c_SetBit(void* Obj)
	{
		((AMain_PlayerCharacter*)Obj)->c = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_c = { "c", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMain_PlayerCharacter), &Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_c_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_c_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_c_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerUncrouchHeight_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerUncrouchHeight = { "PlayerUncrouchHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain_PlayerCharacter, PlayerUncrouchHeight), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerUncrouchHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerUncrouchHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CrouchFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CrouchFOV = { "CrouchFOV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain_PlayerCharacter, CrouchFOV), METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CrouchFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CrouchFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_UncrouchFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_UncrouchFOV = { "UncrouchFOV", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain_PlayerCharacter, UncrouchFOV), METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_UncrouchFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_UncrouchFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_DeltaFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_DeltaFOV = { "DeltaFOV", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain_PlayerCharacter, DeltaFOV), METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_DeltaFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_DeltaFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerDialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerDialogue = { "PlayerDialogue", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain_PlayerCharacter, PlayerDialogue), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerDialogue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CurrPlayerDialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Main_PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CurrPlayerDialogue = { "CurrPlayerDialogue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMain_PlayerCharacter, CurrPlayerDialogue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CurrPlayerDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CurrPlayerDialogue_MetaData)) }; // 557290435
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMain_PlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMoving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsCrouching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_bIsMidCrouchAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_c,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerUncrouchHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CrouchFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_UncrouchFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_DeltaFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_PlayerDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMain_PlayerCharacter_Statics::NewProp_CurrPlayerDialogue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMain_PlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMain_PlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMain_PlayerCharacter_Statics::ClassParams = {
		&AMain_PlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMain_PlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMain_PlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_AMain_PlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMain_PlayerCharacter.OuterSingleton, Z_Construct_UClass_AMain_PlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMain_PlayerCharacter.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<AMain_PlayerCharacter>()
	{
		return AMain_PlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMain_PlayerCharacter);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMain_PlayerCharacter, AMain_PlayerCharacter::StaticClass, TEXT("AMain_PlayerCharacter"), &Z_Registration_Info_UClass_AMain_PlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMain_PlayerCharacter), 3924409666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerCharacter_h_1594633439(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
