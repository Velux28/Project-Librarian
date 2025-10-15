// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/NPCCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCCharacter() {}
// Cross Module References
	PL6_1_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialMap();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_ANPCCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PL6_1_API UClass* Z_Construct_UClass_USoundComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialMap;
class UScriptStruct* FMaterialMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialMap, Z_Construct_UPackage__Script_PL6_1(), TEXT("MaterialMap"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialMap.OuterSingleton;
}
template<> PL6_1_API UScriptStruct* StaticStruct<FMaterialMap>()
{
	return FMaterialMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialChanges_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialChanges_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialChanges_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialChanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialMap>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges_ValueProp = { "MaterialChanges", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges_Key_KeyProp = { "MaterialChanges_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges = { "MaterialChanges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialMap, MaterialChanges), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialMap_Statics::NewProp_MaterialChanges,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
		nullptr,
		&NewStructOps,
		"MaterialMap",
		sizeof(FMaterialMap),
		alignof(FMaterialMap),
		Z_Construct_UScriptStruct_FMaterialMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialMap()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialMap.InnerSingleton, Z_Construct_UScriptStruct_FMaterialMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialMap.InnerSingleton;
	}
	DEFINE_FUNCTION(ANPCCharacter::execSetWalkSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWalkSpeed(Z_Param_NewSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCCharacter::execChangeMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MattType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMaterial(Z_Param_MattType);
		P_NATIVE_END;
	}
	void ANPCCharacter::StaticRegisterNativesANPCCharacter()
	{
		UClass* Class = ANPCCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMaterial", &ANPCCharacter::execChangeMaterial },
			{ "SetWalkSpeed", &ANPCCharacter::execSetWalkSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics
	{
		struct NPCCharacter_eventChangeMaterial_Parms
		{
			FString MattType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_MattType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::NewProp_MattType = { "MattType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCCharacter_eventChangeMaterial_Parms, MattType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::NewProp_MattType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "ChangeMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::NPCCharacter_eventChangeMaterial_Parms), Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCCharacter_ChangeMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_ChangeMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics
	{
		struct NPCCharacter_eventSetWalkSpeed_Parms
		{
			float NewSpeed;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCCharacter_eventSetWalkSpeed_Parms, NewSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::NewProp_NewSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCCharacter, nullptr, "SetWalkSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::NPCCharacter_eventSetWalkSpeed_Parms), Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCCharacter);
	UClass* Z_Construct_UClass_ANPCCharacter_NoRegister()
	{
		return ANPCCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANPCCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMat_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultMat_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMat_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DefaultMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScannerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScannerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementPatrolSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementPatrolSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementPatrolRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementPatrolRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementPatrolWaitTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementPatrolWaitTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HearingPatrolRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingPatrolRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightPatrolRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightPatrolRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightPatrolLostRadiusDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightPatrolLostRadiusDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightPatrolHalfAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightPatrolHalfAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAlertSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementAlertSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HearingAlertRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingAlertRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightAlertRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightAlertRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightAlertLostRadiusDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightAlertLostRadiusDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightAlertHalfAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightAlertHalfAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightScanRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightScanRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightScanLostRadiusDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightScanLostRadiusDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightScanHalfAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightScanHalfAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementHuntSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementHuntSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementHuntWaitTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementHuntWaitTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HearingHuntRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingHuntRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightHuntRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightHuntRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightHuntLostRadiusDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightHuntLostRadiusDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightHuntHalfAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightHuntHalfAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementChaseSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementChaseSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightChaseRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightChaseRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightChaseLostRadiusDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightChaseLostRadiusDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightChaseHalfAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightChaseHalfAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementPlayerLostSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementPlayerLostSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightPlayerLostRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightPlayerLostRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightPlayerLostLostRadiusDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightPlayerLostLostRadiusDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightPlayerLostHalfAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightPlayerLostHalfAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPCCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCCharacter_ChangeMaterial, "ChangeMaterial" }, // 3074819024
		{ &Z_Construct_UFunction_ANPCCharacter_SetWalkSpeed, "SetWalkSpeed" }, // 2172240673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NPCCharacter.h" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SoundComp_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SoundComp = { "SoundComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SoundComp), Z_Construct_UClass_USoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SoundComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SoundComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap_ValueProp = { "MaterialMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMaterialMap, METADATA_PARAMS(nullptr, 0) }; // 1413631385
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap_Key_KeyProp = { "MaterialMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap = { "MaterialMap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MaterialMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap_MetaData)) }; // 1413631385
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat_ValueProp = { "DefaultMat", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat_Key_KeyProp = { "DefaultMat_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat = { "DefaultMat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, DefaultMat), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_ScannerLocation_MetaData[] = {
		{ "Category", "Scan" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_ScannerLocation = { "ScannerLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, ScannerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_ScannerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_ScannerLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolSpeed_MetaData[] = {
		{ "Category", "PatrolConfig" },
		{ "Comment", "//una variabile per ogni stato, categorizzate per stato\n" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
		{ "ToolTip", "una variabile per ogni stato, categorizzate per stato" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolSpeed = { "MovementPatrolSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MovementPatrolSpeed), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolRadius_MetaData[] = {
		{ "Category", "PatrolConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolRadius = { "MovementPatrolRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MovementPatrolRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolWaitTimer_MetaData[] = {
		{ "Category", "PatrolConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolWaitTimer = { "MovementPatrolWaitTimer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MovementPatrolWaitTimer), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolWaitTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolWaitTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingPatrolRadius_MetaData[] = {
		{ "Category", "PatrolConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingPatrolRadius = { "HearingPatrolRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, HearingPatrolRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingPatrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingPatrolRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolRadius_MetaData[] = {
		{ "Category", "PatrolConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolRadius = { "SightPatrolRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightPatrolRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolLostRadiusDelta_MetaData[] = {
		{ "Category", "PatrolConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolLostRadiusDelta = { "SightPatrolLostRadiusDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightPatrolLostRadiusDelta), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolLostRadiusDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolLostRadiusDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolHalfAngle_MetaData[] = {
		{ "Category", "PatrolConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolHalfAngle = { "SightPatrolHalfAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightPatrolHalfAngle), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolHalfAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementAlertSpeed_MetaData[] = {
		{ "Category", "AlertConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementAlertSpeed = { "MovementAlertSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MovementAlertSpeed), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementAlertSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementAlertSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingAlertRadius_MetaData[] = {
		{ "Category", "AlertConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingAlertRadius = { "HearingAlertRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, HearingAlertRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingAlertRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingAlertRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertRadius_MetaData[] = {
		{ "Category", "AlertConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertRadius = { "SightAlertRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightAlertRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertLostRadiusDelta_MetaData[] = {
		{ "Category", "AlertConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertLostRadiusDelta = { "SightAlertLostRadiusDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightAlertLostRadiusDelta), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertLostRadiusDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertLostRadiusDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertHalfAngle_MetaData[] = {
		{ "Category", "AlertConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertHalfAngle = { "SightAlertHalfAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightAlertHalfAngle), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertHalfAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanRadius_MetaData[] = {
		{ "Category", "ScanningConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanRadius = { "SightScanRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightScanRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanLostRadiusDelta_MetaData[] = {
		{ "Category", "ScanningConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanLostRadiusDelta = { "SightScanLostRadiusDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightScanLostRadiusDelta), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanLostRadiusDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanLostRadiusDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanHalfAngle_MetaData[] = {
		{ "Category", "ScanningConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanHalfAngle = { "SightScanHalfAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightScanHalfAngle), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanHalfAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntSpeed_MetaData[] = {
		{ "Category", "HuntConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntSpeed = { "MovementHuntSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MovementHuntSpeed), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntWaitTimer_MetaData[] = {
		{ "Category", "HuntConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntWaitTimer = { "MovementHuntWaitTimer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MovementHuntWaitTimer), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntWaitTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntWaitTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingHuntRadius_MetaData[] = {
		{ "Category", "HuntConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingHuntRadius = { "HearingHuntRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, HearingHuntRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingHuntRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingHuntRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntRadius_MetaData[] = {
		{ "Category", "HuntConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntRadius = { "SightHuntRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightHuntRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntLostRadiusDelta_MetaData[] = {
		{ "Category", "HuntConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntLostRadiusDelta = { "SightHuntLostRadiusDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightHuntLostRadiusDelta), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntLostRadiusDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntLostRadiusDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntHalfAngle_MetaData[] = {
		{ "Category", "HuntConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntHalfAngle = { "SightHuntHalfAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightHuntHalfAngle), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntHalfAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementChaseSpeed_MetaData[] = {
		{ "Category", "ChaseConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementChaseSpeed = { "MovementChaseSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MovementChaseSpeed), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementChaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementChaseSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseRadius_MetaData[] = {
		{ "Category", "ChaseConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseRadius = { "SightChaseRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightChaseRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseLostRadiusDelta_MetaData[] = {
		{ "Category", "ChaseConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseLostRadiusDelta = { "SightChaseLostRadiusDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightChaseLostRadiusDelta), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseLostRadiusDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseLostRadiusDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseHalfAngle_MetaData[] = {
		{ "Category", "ChaseConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseHalfAngle = { "SightChaseHalfAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightChaseHalfAngle), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseHalfAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPlayerLostSpeed_MetaData[] = {
		{ "Category", "PlayerLostConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPlayerLostSpeed = { "MovementPlayerLostSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, MovementPlayerLostSpeed), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPlayerLostSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPlayerLostSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostRadius_MetaData[] = {
		{ "Category", "PlayerLostConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostRadius = { "SightPlayerLostRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightPlayerLostRadius), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostLostRadiusDelta_MetaData[] = {
		{ "Category", "PlayerLostConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostLostRadiusDelta = { "SightPlayerLostLostRadiusDelta", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightPlayerLostLostRadiusDelta), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostLostRadiusDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostLostRadiusDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostHalfAngle_MetaData[] = {
		{ "Category", "PlayerLostConfig" },
		{ "ModuleRelativePath", "Public/NPCCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostHalfAngle = { "SightPlayerLostHalfAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCCharacter, SightPlayerLostHalfAngle), METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostHalfAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SoundComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MaterialMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_DefaultMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_ScannerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPatrolWaitTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingPatrolRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolLostRadiusDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPatrolHalfAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementAlertSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingAlertRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertLostRadiusDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightAlertHalfAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanLostRadiusDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightScanHalfAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementHuntWaitTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_HearingHuntRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntLostRadiusDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightHuntHalfAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementChaseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseLostRadiusDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightChaseHalfAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_MovementPlayerLostSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostLostRadiusDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCCharacter_Statics::NewProp_SightPlayerLostHalfAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCCharacter_Statics::ClassParams = {
		&ANPCCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPCCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCCharacter()
	{
		if (!Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton, Z_Construct_UClass_ANPCCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCCharacter.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<ANPCCharacter>()
	{
		return ANPCCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCCharacter);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCCharacter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCCharacter_h_Statics::ScriptStructInfo[] = {
		{ FMaterialMap::StaticStruct, Z_Construct_UScriptStruct_FMaterialMap_Statics::NewStructOps, TEXT("MaterialMap"), &Z_Registration_Info_UScriptStruct_MaterialMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialMap), 1413631385U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCCharacter, ANPCCharacter::StaticClass, TEXT("ANPCCharacter"), &Z_Registration_Info_UClass_ANPCCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCCharacter), 2948073262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCCharacter_h_3483685681(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCCharacter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCCharacter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCCharacter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
