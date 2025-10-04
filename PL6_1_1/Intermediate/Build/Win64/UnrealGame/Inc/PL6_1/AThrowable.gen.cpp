// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/AThrowable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAThrowable() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_AAThrowable_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_AAThrowable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	PL6_1_API UClass* Z_Construct_UClass_USoundComponent_NoRegister();
// End Cross Module References
	void AAThrowable::StaticRegisterNativesAAThrowable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAThrowable);
	UClass* Z_Construct_UClass_AAThrowable_NoRegister()
	{
		return AAThrowable::StaticClass();
	}
	struct Z_Construct_UClass_AAThrowable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAThrowable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAThrowable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AThrowable.h" },
		{ "ModuleRelativePath", "Public/AThrowable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAThrowable_Statics::NewProp_SoundComp_MetaData[] = {
		{ "Category", "Sound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AThrowable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAThrowable_Statics::NewProp_SoundComp = { "SoundComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAThrowable, SoundComp), Z_Construct_UClass_USoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAThrowable_Statics::NewProp_SoundComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAThrowable_Statics::NewProp_SoundComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAThrowable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAThrowable_Statics::NewProp_SoundComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAThrowable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAThrowable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAThrowable_Statics::ClassParams = {
		&AAThrowable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAThrowable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAThrowable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAThrowable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAThrowable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAThrowable()
	{
		if (!Z_Registration_Info_UClass_AAThrowable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAThrowable.OuterSingleton, Z_Construct_UClass_AAThrowable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAThrowable.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<AAThrowable>()
	{
		return AAThrowable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAThrowable);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_AThrowable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_AThrowable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAThrowable, AAThrowable::StaticClass, TEXT("AAThrowable"), &Z_Registration_Info_UClass_AAThrowable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAThrowable), 432857470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_AThrowable_h_3958773482(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_AThrowable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_AThrowable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
