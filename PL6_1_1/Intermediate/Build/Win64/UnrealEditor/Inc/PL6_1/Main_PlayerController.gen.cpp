// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/Main_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_PlayerController() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_AMain_PlayerController_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_AMain_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
// End Cross Module References
	void AMain_PlayerController::StaticRegisterNativesAMain_PlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMain_PlayerController);
	UClass* Z_Construct_UClass_AMain_PlayerController_NoRegister()
	{
		return AMain_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AMain_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMain_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMain_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Main_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Main_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMain_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMain_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMain_PlayerController_Statics::ClassParams = {
		&AMain_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMain_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMain_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMain_PlayerController()
	{
		if (!Z_Registration_Info_UClass_AMain_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMain_PlayerController.OuterSingleton, Z_Construct_UClass_AMain_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMain_PlayerController.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<AMain_PlayerController>()
	{
		return AMain_PlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMain_PlayerController);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMain_PlayerController, AMain_PlayerController::StaticClass, TEXT("AMain_PlayerController"), &Z_Registration_Info_UClass_AMain_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMain_PlayerController), 339495923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerController_h_524864817(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_Main_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
