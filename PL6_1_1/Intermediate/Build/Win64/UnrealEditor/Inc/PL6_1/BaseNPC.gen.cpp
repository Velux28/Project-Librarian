// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/BaseNPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseNPC() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_ABaseNPC_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_ABaseNPC();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	PL6_1_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
	PL6_1_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABaseNPC::execSetNextInteractionDialogueKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__DialogueKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNextInteractionDialogueKey(Z_Param__DialogueKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseNPC::execSetDialogue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__DialogueKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogue*)Z_Param__Result=P_THIS->SetDialogue_Implementation(Z_Param__DialogueKey);
		P_NATIVE_END;
	}
	static FName NAME_ABaseNPC_SetDialogue = FName(TEXT("SetDialogue"));
	FDialogue ABaseNPC::SetDialogue(const FString& _DialogueKey)
	{
		BaseNPC_eventSetDialogue_Parms Parms;
		Parms._DialogueKey=_DialogueKey;
		ProcessEvent(FindFunctionChecked(NAME_ABaseNPC_SetDialogue),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ABaseNPC_SkipDialogue = FName(TEXT("SkipDialogue"));
	void ABaseNPC::SkipDialogue()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseNPC_SkipDialogue),NULL);
	}
	void ABaseNPC::StaticRegisterNativesABaseNPC()
	{
		UClass* Class = ABaseNPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDialogue", &ABaseNPC::execSetDialogue },
			{ "SetNextInteractionDialogueKey", &ABaseNPC::execSetNextInteractionDialogueKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__DialogueKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__DialogueKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::NewProp__DialogueKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::NewProp__DialogueKey = { "_DialogueKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseNPC_eventSetDialogue_Parms, _DialogueKey), METADATA_PARAMS(Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::NewProp__DialogueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::NewProp__DialogueKey_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseNPC_eventSetDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(nullptr, 0) }; // 557290435
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::NewProp__DialogueKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNPC, nullptr, "SetDialogue", nullptr, nullptr, sizeof(BaseNPC_eventSetDialogue_Parms), Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNPC_SetDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseNPC_SetDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics
	{
		struct BaseNPC_eventSetNextInteractionDialogueKey_Parms
		{
			FString _DialogueKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__DialogueKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__DialogueKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::NewProp__DialogueKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::NewProp__DialogueKey = { "_DialogueKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseNPC_eventSetNextInteractionDialogueKey_Parms, _DialogueKey), METADATA_PARAMS(Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::NewProp__DialogueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::NewProp__DialogueKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::NewProp__DialogueKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNPC, nullptr, "SetNextInteractionDialogueKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::BaseNPC_eventSetNextInteractionDialogueKey_Parms), Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseNPC_SkipDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseNPC_SkipDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseNPC_SkipDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseNPC, nullptr, "SkipDialogue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseNPC_SkipDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseNPC_SkipDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseNPC_SkipDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseNPC_SkipDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseNPC);
	UClass* Z_Construct_UClass_ABaseNPC_NoRegister()
	{
		return ABaseNPC::StaticClass();
	}
	struct Z_Construct_UClass_ABaseNPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextInteractionDialogueKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NextInteractionDialogueKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrNPCDialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrNPCDialogue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportantDialogueKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportantDialogueKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCDialogues_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCDialogues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseNPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseNPC_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseNPC_SetDialogue, "SetDialogue" }, // 653835273
		{ &Z_Construct_UFunction_ABaseNPC_SetNextInteractionDialogueKey, "SetNextInteractionDialogueKey" }, // 1654540223
		{ &Z_Construct_UFunction_ABaseNPC_SkipDialogue, "SkipDialogue" }, // 4262751776
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseNPC.h" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActorName_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, ActorName), METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_DialogueKey_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_DialogueKey = { "DialogueKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, DialogueKey), METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_DialogueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_DialogueKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_NextInteractionDialogueKey_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_NextInteractionDialogueKey = { "NextInteractionDialogueKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, NextInteractionDialogueKey), METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_NextInteractionDialogueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_NextInteractionDialogueKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_CurrNPCDialogue_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_CurrNPCDialogue = { "CurrNPCDialogue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, CurrNPCDialogue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_CurrNPCDialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_CurrNPCDialogue_MetaData)) }; // 557290435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_ImportantDialogueKey_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_ImportantDialogueKey = { "ImportantDialogueKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, ImportantDialogueKey), METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_ImportantDialogueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_ImportantDialogueKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseNPC_Statics::NewProp_NPCDialogues_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseNPC.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseNPC_Statics::NewProp_NPCDialogues = { "NPCDialogues", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseNPC, NPCDialogues), Z_Construct_UClass_UDialogueComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::NewProp_NPCDialogues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::NewProp_NPCDialogues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseNPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_DialogueKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_NextInteractionDialogueKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_CurrNPCDialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_ImportantDialogueKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseNPC_Statics::NewProp_NPCDialogues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseNPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseNPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseNPC_Statics::ClassParams = {
		&ABaseNPC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseNPC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseNPC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseNPC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseNPC()
	{
		if (!Z_Registration_Info_UClass_ABaseNPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseNPC.OuterSingleton, Z_Construct_UClass_ABaseNPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseNPC.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<ABaseNPC>()
	{
		return ABaseNPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseNPC);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_BaseNPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_BaseNPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseNPC, ABaseNPC::StaticClass, TEXT("ABaseNPC"), &Z_Registration_Info_UClass_ABaseNPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseNPC), 1362289701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_BaseNPC_h_1729856811(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_BaseNPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_BaseNPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
