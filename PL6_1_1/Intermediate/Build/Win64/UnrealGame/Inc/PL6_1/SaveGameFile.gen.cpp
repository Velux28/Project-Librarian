// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/SaveGameFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameFile() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_USaveGameFile_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_USaveGameFile();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void USaveGameFile::StaticRegisterNativesUSaveGameFile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameFile);
	UClass* Z_Construct_UClass_USaveGameFile_NoRegister()
	{
		return USaveGameFile::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasPowerCell_MetaData[];
#endif
		static void NewProp_HasPowerCell_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasPowerCell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasScrewdriver_MetaData[];
#endif
		static void NewProp_HasScrewdriver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasScrewdriver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFinishAssembly_MetaData[];
#endif
		static void NewProp_IsFinishAssembly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFinishAssembly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnloadLevel1Submup1_MetaData[];
#endif
		static void NewProp_UnloadLevel1Submup1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UnloadLevel1Submup1;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrSection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrSection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrMap_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameFile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveGameFile.h" },
		{ "ModuleRelativePath", "Public/SaveGameFile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameFile_Statics::NewProp_PlayerTransform_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/SaveGameFile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveGameFile_Statics::NewProp_PlayerTransform = { "PlayerTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameFile, PlayerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USaveGameFile_Statics::NewProp_PlayerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::NewProp_PlayerTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasPowerCell_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/SaveGameFile.h" },
	};
#endif
	void Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasPowerCell_SetBit(void* Obj)
	{
		((USaveGameFile*)Obj)->HasPowerCell = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasPowerCell = { "HasPowerCell", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveGameFile), &Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasPowerCell_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasPowerCell_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasPowerCell_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasScrewdriver_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/SaveGameFile.h" },
	};
#endif
	void Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasScrewdriver_SetBit(void* Obj)
	{
		((USaveGameFile*)Obj)->HasScrewdriver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasScrewdriver = { "HasScrewdriver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveGameFile), &Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasScrewdriver_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasScrewdriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasScrewdriver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameFile_Statics::NewProp_IsFinishAssembly_MetaData[] = {
		{ "Category", "Envirorment" },
		{ "ModuleRelativePath", "Public/SaveGameFile.h" },
	};
#endif
	void Z_Construct_UClass_USaveGameFile_Statics::NewProp_IsFinishAssembly_SetBit(void* Obj)
	{
		((USaveGameFile*)Obj)->IsFinishAssembly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameFile_Statics::NewProp_IsFinishAssembly = { "IsFinishAssembly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveGameFile), &Z_Construct_UClass_USaveGameFile_Statics::NewProp_IsFinishAssembly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveGameFile_Statics::NewProp_IsFinishAssembly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::NewProp_IsFinishAssembly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameFile_Statics::NewProp_UnloadLevel1Submup1_MetaData[] = {
		{ "Category", "Envirorment" },
		{ "ModuleRelativePath", "Public/SaveGameFile.h" },
	};
#endif
	void Z_Construct_UClass_USaveGameFile_Statics::NewProp_UnloadLevel1Submup1_SetBit(void* Obj)
	{
		((USaveGameFile*)Obj)->UnloadLevel1Submup1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameFile_Statics::NewProp_UnloadLevel1Submup1 = { "UnloadLevel1Submup1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveGameFile), &Z_Construct_UClass_USaveGameFile_Statics::NewProp_UnloadLevel1Submup1_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveGameFile_Statics::NewProp_UnloadLevel1Submup1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::NewProp_UnloadLevel1Submup1_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrSection_Inner = { "CurrSection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrSection_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/SaveGameFile.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrSection = { "CurrSection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameFile, CurrSection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrMap_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/SaveGameFile.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrMap = { "CurrMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameFile, CurrMap), METADATA_PARAMS(Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameFile_Statics::NewProp_PlayerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasPowerCell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameFile_Statics::NewProp_HasScrewdriver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameFile_Statics::NewProp_IsFinishAssembly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameFile_Statics::NewProp_UnloadLevel1Submup1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrSection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameFile_Statics::NewProp_CurrMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameFile_Statics::ClassParams = {
		&USaveGameFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameFile()
	{
		if (!Z_Registration_Info_UClass_USaveGameFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameFile.OuterSingleton, Z_Construct_UClass_USaveGameFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveGameFile.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<USaveGameFile>()
	{
		return USaveGameFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameFile);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SaveGameFile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SaveGameFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameFile, USaveGameFile::StaticClass, TEXT("USaveGameFile"), &Z_Registration_Info_UClass_USaveGameFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameFile), 136525903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SaveGameFile_h_1653734658(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SaveGameFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SaveGameFile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
