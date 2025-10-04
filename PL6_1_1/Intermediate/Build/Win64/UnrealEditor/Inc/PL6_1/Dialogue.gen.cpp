// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/Dialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogue() {}
// Cross Module References
	PL6_1_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Dialogue;
class UScriptStruct* FDialogue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Dialogue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Dialogue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogue, Z_Construct_UPackage__Script_PL6_1(), TEXT("Dialogue"));
	}
	return Z_Registration_Info_UScriptStruct_Dialogue.OuterSingleton;
}
template<> PL6_1_API UScriptStruct* StaticStruct<FDialogue>()
{
	return FDialogue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextDialogueKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NextDialogueKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNextDialogueIsPlayer_MetaData[];
#endif
		static void NewProp_bNextDialogueIsPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNextDialogueIsPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueKey_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueKey = { "DialogueKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, DialogueKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_NextDialogueKey_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_NextDialogueKey = { "NextDialogueKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, NextDialogueKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_NextDialogueKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_NextDialogueKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, DialogueText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bNextDialogueIsPlayer_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bNextDialogueIsPlayer_SetBit(void* Obj)
	{
		((FDialogue*)Obj)->bNextDialogueIsPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bNextDialogueIsPlayer = { "bNextDialogueIsPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDialogue), &Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bNextDialogueIsPlayer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bNextDialogueIsPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bNextDialogueIsPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueDuration_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Dialogue.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueDuration = { "DialogueDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDialogue, DialogueDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_NextDialogueKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_bNextDialogueIsPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueDuration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
		nullptr,
		&NewStructOps,
		"Dialogue",
		sizeof(FDialogue),
		alignof(FDialogue),
		Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogue()
	{
		if (!Z_Registration_Info_UScriptStruct_Dialogue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Dialogue.InnerSingleton, Z_Construct_UScriptStruct_FDialogue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Dialogue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Dialogue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Dialogue_h_Statics::ScriptStructInfo[] = {
		{ FDialogue::StaticStruct, Z_Construct_UScriptStruct_FDialogue_Statics::NewStructOps, TEXT("Dialogue"), &Z_Registration_Info_UScriptStruct_Dialogue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogue), 557290435U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Dialogue_h_2812658777(TEXT("/Script/PL6_1"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Dialogue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Dialogue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
