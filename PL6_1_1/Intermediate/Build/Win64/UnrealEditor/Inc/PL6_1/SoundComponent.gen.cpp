// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/SoundComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundComponent() {}
// Cross Module References
	PL6_1_API UClass* Z_Construct_UClass_USoundComponent_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_USoundComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(USoundComponent::execPlaySoundWithParams)
	{
		P_GET_OBJECT(USoundBase,Z_Param__Sound);
		P_GET_STRUCT(FVector,Z_Param_SoundLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundWithParams(Z_Param__Sound,Z_Param_SoundLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundComponent::execPlaySoundByNameAtLocation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__SoundType);
		P_GET_STRUCT(FVector,Z_Param_SoundLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundByNameAtLocation(Z_Param__SoundType,Z_Param_SoundLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundComponent::execPlaySoundByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__SoundType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySoundByName(Z_Param__SoundType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundComponent::execPlayDefaultSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDefaultSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USoundComponent::execAddSound)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__SoundType);
		P_GET_OBJECT(USoundBase,Z_Param__NewSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USoundBase**)Z_Param__Result=P_THIS->AddSound(Z_Param__SoundType,Z_Param__NewSound);
		P_NATIVE_END;
	}
	void USoundComponent::StaticRegisterNativesUSoundComponent()
	{
		UClass* Class = USoundComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSound", &USoundComponent::execAddSound },
			{ "PlayDefaultSound", &USoundComponent::execPlayDefaultSound },
			{ "PlaySoundByName", &USoundComponent::execPlaySoundByName },
			{ "PlaySoundByNameAtLocation", &USoundComponent::execPlaySoundByNameAtLocation },
			{ "PlaySoundWithParams", &USoundComponent::execPlaySoundWithParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USoundComponent_AddSound_Statics
	{
		struct SoundComponent_eventAddSound_Parms
		{
			FString _SoundType;
			USoundBase* _NewSound;
			USoundBase* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__SoundType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp__NewSound;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundComponent_AddSound_Statics::NewProp__SoundType = { "_SoundType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundComponent_eventAddSound_Parms, _SoundType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundComponent_AddSound_Statics::NewProp__NewSound = { "_NewSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundComponent_eventAddSound_Parms, _NewSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundComponent_AddSound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundComponent_eventAddSound_Parms, ReturnValue), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_AddSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_AddSound_Statics::NewProp__SoundType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_AddSound_Statics::NewProp__NewSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_AddSound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundComponent_AddSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_AddSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "AddSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundComponent_AddSound_Statics::SoundComponent_eventAddSound_Parms), Z_Construct_UFunction_USoundComponent_AddSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_AddSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundComponent_AddSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_AddSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundComponent_AddSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_AddSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundComponent_PlayDefaultSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundComponent_PlayDefaultSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_PlayDefaultSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "PlayDefaultSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundComponent_PlayDefaultSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlayDefaultSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundComponent_PlayDefaultSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_PlayDefaultSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics
	{
		struct SoundComponent_eventPlaySoundByName_Parms
		{
			FString _SoundType;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__SoundType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::NewProp__SoundType = { "_SoundType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundComponent_eventPlaySoundByName_Parms, _SoundType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::NewProp__SoundType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "PlaySoundByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::SoundComponent_eventPlaySoundByName_Parms), Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundComponent_PlaySoundByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_PlaySoundByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics
	{
		struct SoundComponent_eventPlaySoundByNameAtLocation_Parms
		{
			FString _SoundType;
			FVector SoundLocation;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__SoundType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::NewProp__SoundType = { "_SoundType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundComponent_eventPlaySoundByNameAtLocation_Parms, _SoundType), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::NewProp_SoundLocation = { "SoundLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundComponent_eventPlaySoundByNameAtLocation_Parms, SoundLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::NewProp__SoundType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::NewProp_SoundLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "PlaySoundByNameAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::SoundComponent_eventPlaySoundByNameAtLocation_Parms), Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics
	{
		struct SoundComponent_eventPlaySoundWithParams_Parms
		{
			USoundBase* _Sound;
			FVector SoundLocation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__Sound;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoundLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::NewProp__Sound = { "_Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundComponent_eventPlaySoundWithParams_Parms, _Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::NewProp_SoundLocation = { "SoundLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SoundComponent_eventPlaySoundWithParams_Parms, SoundLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::NewProp__Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::NewProp_SoundLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundComponent, nullptr, "PlaySoundWithParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::SoundComponent_eventPlaySoundWithParams_Parms), Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundComponent_PlaySoundWithParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundComponent_PlaySoundWithParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundComponent);
	UClass* Z_Construct_UClass_USoundComponent_NoRegister()
	{
		return USoundComponent::StaticClass();
	}
	struct Z_Construct_UClass_USoundComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundsMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SoundsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SoundsMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundComponent_AddSound, "AddSound" }, // 1810059880
		{ &Z_Construct_UFunction_USoundComponent_PlayDefaultSound, "PlayDefaultSound" }, // 1136794393
		{ &Z_Construct_UFunction_USoundComponent_PlaySoundByName, "PlaySoundByName" }, // 406011456
		{ &Z_Construct_UFunction_USoundComponent_PlaySoundByNameAtLocation, "PlaySoundByNameAtLocation" }, // 2537624951
		{ &Z_Construct_UFunction_USoundComponent_PlaySoundWithParams, "PlaySoundWithParams" }, // 468088770
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object ActorComponent Physics Rendering Mobility LOD PhysicsVolume" },
		{ "IncludePath", "SoundComponent.h" },
		{ "ModuleRelativePath", "Public/SoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap_ValueProp = { "SoundsMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap_Key_KeyProp = { "SoundsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/SoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap = { "SoundsMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundComponent, SoundsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundComponent_Statics::NewProp_DefaultSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/SoundComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundComponent_Statics::NewProp_DefaultSound = { "DefaultSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundComponent, DefaultSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundComponent_Statics::NewProp_DefaultSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundComponent_Statics::NewProp_DefaultSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundComponent_Statics::NewProp_SoundsMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundComponent_Statics::NewProp_DefaultSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundComponent_Statics::ClassParams = {
		&USoundComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USoundComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USoundComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundComponent()
	{
		if (!Z_Registration_Info_UClass_USoundComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundComponent.OuterSingleton, Z_Construct_UClass_USoundComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundComponent.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<USoundComponent>()
	{
		return USoundComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundComponent);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SoundComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SoundComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundComponent, USoundComponent::StaticClass, TEXT("USoundComponent"), &Z_Registration_Info_UClass_USoundComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundComponent), 3175657616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SoundComponent_h_1625772465(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SoundComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_SoundComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
