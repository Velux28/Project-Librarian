// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/ASlidingDoubleDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeASlidingDoubleDoor() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_AASlidingDoubleDoor_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_AASlidingDoubleDoor();
	PL6_1_API UClass* Z_Construct_UClass_AASlidingDoor();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AASlidingDoubleDoor::StaticRegisterNativesAASlidingDoubleDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AASlidingDoubleDoor);
	UClass* Z_Construct_UClass_AASlidingDoubleDoor_NoRegister()
	{
		return AASlidingDoubleDoor::StaticClass();
	}
	struct Z_Construct_UClass_AASlidingDoubleDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Door2OpeningCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door2OpeningCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Door2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AASlidingDoubleDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AASlidingDoor,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASlidingDoubleDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ASlidingDoubleDoor.h" },
		{ "ModuleRelativePath", "Public/ASlidingDoubleDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2OpeningCurve_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "/**\n\x09* the second curve used in the timeline\n\x09*/" },
		{ "ModuleRelativePath", "Public/ASlidingDoubleDoor.h" },
		{ "ToolTip", "the second curve used in the timeline" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2OpeningCurve = { "Door2OpeningCurve", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASlidingDoubleDoor, Door2OpeningCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2OpeningCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2OpeningCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2_MetaData[] = {
		{ "Category", "Door" },
		{ "Comment", "/**\n\x09* this variable must be setted on begin play\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ASlidingDoubleDoor.h" },
		{ "ToolTip", "this variable must be setted on begin play" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2 = { "Door2", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AASlidingDoubleDoor, Door2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AASlidingDoubleDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2OpeningCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AASlidingDoubleDoor_Statics::NewProp_Door2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AASlidingDoubleDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AASlidingDoubleDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AASlidingDoubleDoor_Statics::ClassParams = {
		&AASlidingDoubleDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AASlidingDoubleDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoubleDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AASlidingDoubleDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AASlidingDoubleDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AASlidingDoubleDoor()
	{
		if (!Z_Registration_Info_UClass_AASlidingDoubleDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AASlidingDoubleDoor.OuterSingleton, Z_Construct_UClass_AASlidingDoubleDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AASlidingDoubleDoor.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<AASlidingDoubleDoor>()
	{
		return AASlidingDoubleDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AASlidingDoubleDoor);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoubleDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoubleDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AASlidingDoubleDoor, AASlidingDoubleDoor::StaticClass, TEXT("AASlidingDoubleDoor"), &Z_Registration_Info_UClass_AASlidingDoubleDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AASlidingDoubleDoor), 427008553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoubleDoor_h_1241655909(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoubleDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_ASlidingDoubleDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
