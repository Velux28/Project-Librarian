// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/MyTestActor1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestActor1() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_AMyTestActor1_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_AMyTestActor1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
// End Cross Module References
	void AMyTestActor1::StaticRegisterNativesAMyTestActor1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestActor1);
	UClass* Z_Construct_UClass_AMyTestActor1_NoRegister()
	{
		return AMyTestActor1::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestActor1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestActor1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestActor1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyTestActor1.h" },
		{ "ModuleRelativePath", "Public/MyTestActor1.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestActor1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestActor1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestActor1_Statics::ClassParams = {
		&AMyTestActor1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyTestActor1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestActor1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyTestActor1()
	{
		if (!Z_Registration_Info_UClass_AMyTestActor1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestActor1.OuterSingleton, Z_Construct_UClass_AMyTestActor1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestActor1.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<AMyTestActor1>()
	{
		return AMyTestActor1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestActor1);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_MyTestActor1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_MyTestActor1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestActor1, AMyTestActor1::StaticClass, TEXT("AMyTestActor1"), &Z_Registration_Info_UClass_AMyTestActor1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestActor1), 112045287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_MyTestActor1_h_2052214527(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_MyTestActor1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_MyTestActor1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
