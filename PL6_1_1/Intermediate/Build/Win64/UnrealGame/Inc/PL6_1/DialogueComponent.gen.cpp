// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/DialogueComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueComponent() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_UDialogueComponent_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_UDialogueComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	PL6_1_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
// End Cross Module References
	DEFINE_FUNCTION(UDialogueComponent::execGetLastDialogueKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLastDialogueKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execGetDialogue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogueKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogue*)Z_Param__Result=P_THIS->GetDialogue(Z_Param_DialogueKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execShowDialogue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DialogueKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ShowDialogue(Z_Param_DialogueKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execAddDialogue)
	{
		P_GET_STRUCT(FDialogue,Z_Param__Dialogue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddDialogue(Z_Param__Dialogue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueComponent::execFillDialogue)
	{
		P_GET_TARRAY(FDialogue,Z_Param_Dialogues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillDialogue(Z_Param_Dialogues);
		P_NATIVE_END;
	}
	void UDialogueComponent::StaticRegisterNativesUDialogueComponent()
	{
		UClass* Class = UDialogueComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDialogue", &UDialogueComponent::execAddDialogue },
			{ "FillDialogue", &UDialogueComponent::execFillDialogue },
			{ "GetDialogue", &UDialogueComponent::execGetDialogue },
			{ "GetLastDialogueKey", &UDialogueComponent::execGetLastDialogueKey },
			{ "ShowDialogue", &UDialogueComponent::execShowDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics
	{
		struct DialogueComponent_eventAddDialogue_Parms
		{
			FDialogue _Dialogue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__Dialogue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::NewProp__Dialogue = { "_Dialogue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventAddDialogue_Parms, _Dialogue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(nullptr, 0) }; // 557290435
	void Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DialogueComponent_eventAddDialogue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DialogueComponent_eventAddDialogue_Parms), &Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::NewProp__Dialogue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "AddDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::DialogueComponent_eventAddDialogue_Parms), Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_AddDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_AddDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics
	{
		struct DialogueComponent_eventFillDialogue_Parms
		{
			TArray<FDialogue> Dialogues;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dialogues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::NewProp_Dialogues_Inner = { "Dialogues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(nullptr, 0) }; // 557290435
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::NewProp_Dialogues = { "Dialogues", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventFillDialogue_Parms, Dialogues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 557290435
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::NewProp_Dialogues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::NewProp_Dialogues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "FillDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::DialogueComponent_eventFillDialogue_Parms), Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_FillDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_FillDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics
	{
		struct DialogueComponent_eventGetDialogue_Parms
		{
			FString DialogueKey;
			FDialogue ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::NewProp_DialogueKey = { "DialogueKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetDialogue_Parms, DialogueKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(nullptr, 0) }; // 557290435
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::NewProp_DialogueKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::DialogueComponent_eventGetDialogue_Parms), Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_GetDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics
	{
		struct DialogueComponent_eventGetLastDialogueKey_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventGetLastDialogueKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "GetLastDialogueKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::DialogueComponent_eventGetLastDialogueKey_Parms), Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics
	{
		struct DialogueComponent_eventShowDialogue_Parms
		{
			FString DialogueKey;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueKey;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::NewProp_DialogueKey = { "DialogueKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventShowDialogue_Parms, DialogueKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DialogueComponent_eventShowDialogue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::NewProp_DialogueKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueComponent, nullptr, "ShowDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::DialogueComponent_eventShowDialogue_Parms), Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueComponent_ShowDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueComponent_ShowDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueComponent);
	UClass* Z_Construct_UClass_UDialogueComponent_NoRegister()
	{
		return UDialogueComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueComponent_AddDialogue, "AddDialogue" }, // 2329520800
		{ &Z_Construct_UFunction_UDialogueComponent_FillDialogue, "FillDialogue" }, // 3863893085
		{ &Z_Construct_UFunction_UDialogueComponent_GetDialogue, "GetDialogue" }, // 3944064656
		{ &Z_Construct_UFunction_UDialogueComponent_GetLastDialogueKey, "GetLastDialogueKey" }, // 2068893375
		{ &Z_Construct_UFunction_UDialogueComponent_ShowDialogue, "ShowDialogue" }, // 3975418750
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DialogueComponent.h" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueList_Inner = { "DialogueList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(nullptr, 0) }; // 557290435
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueList_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/DialogueComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueList = { "DialogueList", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDialogueComponent, DialogueList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueList_MetaData)) }; // 557290435
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueComponent_Statics::NewProp_DialogueList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueComponent_Statics::ClassParams = {
		&UDialogueComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueComponent()
	{
		if (!Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton, Z_Construct_UClass_UDialogueComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueComponent.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<UDialogueComponent>()
	{
		return UDialogueComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueComponent);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_DialogueComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_DialogueComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueComponent, UDialogueComponent::StaticClass, TEXT("UDialogueComponent"), &Z_Registration_Info_UClass_UDialogueComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueComponent), 2191625139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_DialogueComponent_h_1276160092(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_DialogueComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_DialogueComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
