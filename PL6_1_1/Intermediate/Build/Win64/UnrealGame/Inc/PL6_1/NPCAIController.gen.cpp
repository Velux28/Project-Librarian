// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PL6_1/Public/NPCAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCAIController() {}
// Cross Module References
	PL6_1_API UEnum* Z_Construct_UEnum_PL6_1_EAIState();
	UPackage* Z_Construct_UPackage__Script_PL6_1();
	PL6_1_API UClass* Z_Construct_UClass_ANPCAIController_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_ANPCAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_ANPCCharacter_NoRegister();
	PL6_1_API UClass* Z_Construct_UClass_AMain_PlayerCharacter_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAIState;
	static UEnum* EAIState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAIState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PL6_1_EAIState, Z_Construct_UPackage__Script_PL6_1(), TEXT("EAIState"));
		}
		return Z_Registration_Info_UEnum_EAIState.OuterSingleton;
	}
	template<> PL6_1_API UEnum* StaticEnum<EAIState>()
	{
		return EAIState_StaticEnum();
	}
	struct Z_Construct_UEnum_PL6_1_EAIState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PL6_1_EAIState_Statics::Enumerators[] = {
		{ "Patrol", (int64)Patrol },
		{ "Alert", (int64)Alert },
		{ "Hunt", (int64)Hunt },
		{ "Chase", (int64)Chase },
		{ "Kill", (int64)Kill },
		{ "PlayerLost", (int64)PlayerLost },
		{ "ScriptedChase", (int64)ScriptedChase },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PL6_1_EAIState_Statics::Enum_MetaDataParams[] = {
		{ "Alert.Name", "Alert" },
		{ "Chase.Name", "Chase" },
		{ "Hunt.Name", "Hunt" },
		{ "Kill.Name", "Kill" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
		{ "Patrol.Name", "Patrol" },
		{ "PlayerLost.Name", "PlayerLost" },
		{ "ScriptedChase.Name", "ScriptedChase" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PL6_1_EAIState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PL6_1,
		nullptr,
		"EAIState",
		"EAIState",
		Z_Construct_UEnum_PL6_1_EAIState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PL6_1_EAIState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PL6_1_EAIState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PL6_1_EAIState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PL6_1_EAIState()
	{
		if (!Z_Registration_Info_UEnum_EAIState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAIState.InnerSingleton, Z_Construct_UEnum_PL6_1_EAIState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAIState.InnerSingleton;
	}
	DEFINE_FUNCTION(ANPCAIController::execEnterPalyerLostState)
	{
		P_GET_STRUCT(FVector,Z_Param__LastKnownLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterPalyerLostState_Implementation(Z_Param__LastKnownLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execEnterChaseState)
	{
		P_GET_OBJECT(UObject,Z_Param__TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterChaseState_Implementation(Z_Param__TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execEnterHuntState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterHuntState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execEnterAlertState)
	{
		P_GET_STRUCT(FVector,Z_Param__TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterAlertState_Implementation(Z_Param__TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execEnterPatrolState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterPatrolState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execChosePatrolLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_PatrolPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChosePatrolLocation(Z_Param_Out_PatrolPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execHandleHearNonHumanSound)
	{
		P_GET_STRUCT(FVector,Z_Param__TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHearNonHumanSound(Z_Param__TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execHandleHearHumanSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHearHumanSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execHandleHear)
	{
		P_GET_STRUCT(FAIStimulus,Z_Param__Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHear(Z_Param__Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execHandleSight)
	{
		P_GET_OBJECT(AActor,Z_Param__Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param__Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSight(Z_Param__Actor,Z_Param__Stimulus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execActivatePlayerLostScanner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivatePlayerLostScanner_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execActivateAlertScanner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ActivateAlertScanner_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCAIController::execSetHearingSenseStatus)
	{
		P_GET_UBOOL(Z_Param__NewStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHearingSenseStatus(Z_Param__NewStatus);
		P_NATIVE_END;
	}
	static FName NAME_ANPCAIController_ActivateAlertScanner = FName(TEXT("ActivateAlertScanner"));
	bool ANPCAIController::ActivateAlertScanner()
	{
		NPCAIController_eventActivateAlertScanner_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ANPCAIController_ActivateAlertScanner),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ANPCAIController_ActivatePlayerLostScanner = FName(TEXT("ActivatePlayerLostScanner"));
	bool ANPCAIController::ActivatePlayerLostScanner()
	{
		NPCAIController_eventActivatePlayerLostScanner_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ANPCAIController_ActivatePlayerLostScanner),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_ANPCAIController_EnterAlertState = FName(TEXT("EnterAlertState"));
	void ANPCAIController::EnterAlertState(FVector _TargetLocation)
	{
		NPCAIController_eventEnterAlertState_Parms Parms;
		Parms._TargetLocation=_TargetLocation;
		ProcessEvent(FindFunctionChecked(NAME_ANPCAIController_EnterAlertState),&Parms);
	}
	static FName NAME_ANPCAIController_EnterChaseState = FName(TEXT("EnterChaseState"));
	void ANPCAIController::EnterChaseState(UObject* _TargetActor)
	{
		NPCAIController_eventEnterChaseState_Parms Parms;
		Parms._TargetActor=_TargetActor;
		ProcessEvent(FindFunctionChecked(NAME_ANPCAIController_EnterChaseState),&Parms);
	}
	static FName NAME_ANPCAIController_EnterHuntState = FName(TEXT("EnterHuntState"));
	void ANPCAIController::EnterHuntState()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANPCAIController_EnterHuntState),NULL);
	}
	static FName NAME_ANPCAIController_EnterPalyerLostState = FName(TEXT("EnterPalyerLostState"));
	void ANPCAIController::EnterPalyerLostState(FVector _LastKnownLocation)
	{
		NPCAIController_eventEnterPalyerLostState_Parms Parms;
		Parms._LastKnownLocation=_LastKnownLocation;
		ProcessEvent(FindFunctionChecked(NAME_ANPCAIController_EnterPalyerLostState),&Parms);
	}
	static FName NAME_ANPCAIController_EnterPatrolState = FName(TEXT("EnterPatrolState"));
	void ANPCAIController::EnterPatrolState()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANPCAIController_EnterPatrolState),NULL);
	}
	void ANPCAIController::StaticRegisterNativesANPCAIController()
	{
		UClass* Class = ANPCAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateAlertScanner", &ANPCAIController::execActivateAlertScanner },
			{ "ActivatePlayerLostScanner", &ANPCAIController::execActivatePlayerLostScanner },
			{ "ChosePatrolLocation", &ANPCAIController::execChosePatrolLocation },
			{ "EnterAlertState", &ANPCAIController::execEnterAlertState },
			{ "EnterChaseState", &ANPCAIController::execEnterChaseState },
			{ "EnterHuntState", &ANPCAIController::execEnterHuntState },
			{ "EnterPalyerLostState", &ANPCAIController::execEnterPalyerLostState },
			{ "EnterPatrolState", &ANPCAIController::execEnterPatrolState },
			{ "HandleHear", &ANPCAIController::execHandleHear },
			{ "HandleHearHumanSound", &ANPCAIController::execHandleHearHumanSound },
			{ "HandleHearNonHumanSound", &ANPCAIController::execHandleHearNonHumanSound },
			{ "HandleSight", &ANPCAIController::execHandleSight },
			{ "SetHearingSenseStatus", &ANPCAIController::execSetHearingSenseStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NPCAIController_eventActivateAlertScanner_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NPCAIController_eventActivateAlertScanner_Parms), &Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Scan" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "ActivateAlertScanner", nullptr, nullptr, sizeof(NPCAIController_eventActivateAlertScanner_Parms), Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NPCAIController_eventActivatePlayerLostScanner_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NPCAIController_eventActivatePlayerLostScanner_Parms), &Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Scan" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "ActivatePlayerLostScanner", nullptr, nullptr, sizeof(NPCAIController_eventActivatePlayerLostScanner_Parms), Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics
	{
		struct NPCAIController_eventChosePatrolLocation_Parms
		{
			FVector PatrolPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::NewProp_PatrolPosition = { "PatrolPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCAIController_eventChosePatrolLocation_Parms, PatrolPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::NewProp_PatrolPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIState/Patrol" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "ChosePatrolLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::NPCAIController_eventChosePatrolLocation_Parms), Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp__TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::NewProp__TargetLocation = { "_TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCAIController_eventEnterAlertState_Parms, _TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::NewProp__TargetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Change Snese" },
		{ "Comment", "/// <summary>\n///\x09Set ControlledPawn movement speed, changes ControlledPawn materials using Alert variable in pawn MaterialMap using \"Alert\" key and plays \"Alert\" sound in SoundMap of ControlledPawn.\n/// Set hearing and sight sense, clears and set blackboard variable for Alert.\n/// </summary>\n" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
		{ "ToolTip", "<summary>\n      Set ControlledPawn movement speed, changes ControlledPawn materials using Alert variable in pawn MaterialMap using \"Alert\" key and plays \"Alert\" sound in SoundMap of ControlledPawn.\nSet hearing and sight sense, clears and set blackboard variable for Alert.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "EnterAlertState", nullptr, nullptr, sizeof(NPCAIController_eventEnterAlertState_Parms), Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_EnterAlertState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_EnterAlertState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp__TargetActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::NewProp__TargetActor = { "_TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCAIController_eventEnterChaseState_Parms, _TargetActor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::NewProp__TargetActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Change Snese" },
		{ "Comment", "/// <summary>\n///\x09Set ControlledPawn movement speed, changes ControlledPawn materials using Chase variable in pawn MaterialMap using \"Chase\" key and plays \"Chase\" sound in SoundMap of ControlledPawn.\n/// Set sight sense, clears and set blackboard variable for Chase.\n/// </summary>\n" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
		{ "ToolTip", "<summary>\n      Set ControlledPawn movement speed, changes ControlledPawn materials using Chase variable in pawn MaterialMap using \"Chase\" key and plays \"Chase\" sound in SoundMap of ControlledPawn.\nSet sight sense, clears and set blackboard variable for Chase.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "EnterChaseState", nullptr, nullptr, sizeof(NPCAIController_eventEnterChaseState_Parms), Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_EnterChaseState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_EnterChaseState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_EnterHuntState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_EnterHuntState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Change Snese" },
		{ "Comment", "/// <summary>\n///\x09Set ControlledPawn movement speed, changes ControlledPawn materials using Hunt variable in pawn MaterialMap using \"Hunt\" key and plays \"Hunt\" sound in SoundMap of ControlledPawn.\n/// Set hearing and sight sense, clears and set blackboard variable for Hunt.\n/// </summary>\n" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
		{ "ToolTip", "<summary>\n      Set ControlledPawn movement speed, changes ControlledPawn materials using Hunt variable in pawn MaterialMap using \"Hunt\" key and plays \"Hunt\" sound in SoundMap of ControlledPawn.\nSet hearing and sight sense, clears and set blackboard variable for Hunt.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_EnterHuntState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "EnterHuntState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_EnterHuntState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_EnterHuntState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_EnterHuntState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_EnterHuntState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp__LastKnownLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::NewProp__LastKnownLocation = { "_LastKnownLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCAIController_eventEnterPalyerLostState_Parms, _LastKnownLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::NewProp__LastKnownLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Change Snese" },
		{ "Comment", "/// <summary>\n///\x09Set ControlledPawn movement speed, changes ControlledPawn materials using Lost variable in pawn MaterialMap using \"Lost\" key and plays \"Lost\" sound in SoundMap of ControlledPawn.\n/// Set blackboard variable for Lost.\n/// </summary>\n" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
		{ "ToolTip", "<summary>\n      Set ControlledPawn movement speed, changes ControlledPawn materials using Lost variable in pawn MaterialMap using \"Lost\" key and plays \"Lost\" sound in SoundMap of ControlledPawn.\nSet blackboard variable for Lost.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "EnterPalyerLostState", nullptr, nullptr, sizeof(NPCAIController_eventEnterPalyerLostState_Parms), Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_EnterPatrolState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_EnterPatrolState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Change Snese" },
		{ "Comment", "/// <summary>\n///\x09Set ControlledPawn movement speed, changes \"ControlledPawn\" materials using Patrol variable in pawn \"MaterialMap\" using \"Patrol\" key and plays \"Patrol\" sound in SoundMap of ControlledPawn.\n/// Set hearing and sight sense, clears and set blackboard variable for Patrol.\n/// </summary>\n" },
		{ "ForceAsFunction", "" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
		{ "ToolTip", "<summary>\n      Set ControlledPawn movement speed, changes \"ControlledPawn\" materials using Patrol variable in pawn \"MaterialMap\" using \"Patrol\" key and plays \"Patrol\" sound in SoundMap of ControlledPawn.\nSet hearing and sight sense, clears and set blackboard variable for Patrol.\n</summary>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_EnterPatrolState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "EnterPatrolState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_EnterPatrolState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_EnterPatrolState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_EnterPatrolState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_EnterPatrolState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_HandleHear_Statics
	{
		struct NPCAIController_eventHandleHear_Parms
		{
			FAIStimulus _Stimulus;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::NewProp__Stimulus = { "_Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCAIController_eventHandleHear_Parms, _Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 1354403599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::NewProp__Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Hear" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "HandleHear", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::NPCAIController_eventHandleHear_Parms), Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_HandleHear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_HandleHear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_HandleHearHumanSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_HandleHearHumanSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Hear" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_HandleHearHumanSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "HandleHearHumanSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_HandleHearHumanSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_HandleHearHumanSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_HandleHearHumanSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_HandleHearHumanSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics
	{
		struct NPCAIController_eventHandleHearNonHumanSound_Parms
		{
			FVector _TargetLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp__TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::NewProp__TargetLocation = { "_TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCAIController_eventHandleHearNonHumanSound_Parms, _TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::NewProp__TargetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Hear" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "HandleHearNonHumanSound", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::NPCAIController_eventHandleHearNonHumanSound_Parms), Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_HandleSight_Statics
	{
		struct NPCAIController_eventHandleSight_Parms
		{
			AActor* _Actor;
			FAIStimulus _Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp__Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp__Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::NewProp__Actor = { "_Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCAIController_eventHandleSight_Parms, _Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::NewProp__Stimulus = { "_Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NPCAIController_eventHandleSight_Parms, _Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 1354403599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::NewProp__Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::NewProp__Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense/Sight" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "HandleSight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::NPCAIController_eventHandleSight_Parms), Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_HandleSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_HandleSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics
	{
		struct NPCAIController_eventSetHearingSenseStatus_Parms
		{
			bool _NewStatus;
		};
		static void NewProp__NewStatus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp__NewStatus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::NewProp__NewStatus_SetBit(void* Obj)
	{
		((NPCAIController_eventSetHearingSenseStatus_Parms*)Obj)->_NewStatus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::NewProp__NewStatus = { "_NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NPCAIController_eventSetHearingSenseStatus_Parms), &Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::NewProp__NewStatus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::NewProp__NewStatus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "AISense" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCAIController, nullptr, "SetHearingSenseStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::NPCAIController_eventSetHearingSenseStatus_Parms), Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPCAIController);
	UClass* Z_Construct_UClass_ANPCAIController_NoRegister()
	{
		return ANPCAIController::StaticClass();
	}
	struct Z_Construct_UClass_ANPCAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AISense_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AISense;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrAIState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrAIState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PL6_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPCAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCAIController_ActivateAlertScanner, "ActivateAlertScanner" }, // 601260668
		{ &Z_Construct_UFunction_ANPCAIController_ActivatePlayerLostScanner, "ActivatePlayerLostScanner" }, // 1998192096
		{ &Z_Construct_UFunction_ANPCAIController_ChosePatrolLocation, "ChosePatrolLocation" }, // 2739424155
		{ &Z_Construct_UFunction_ANPCAIController_EnterAlertState, "EnterAlertState" }, // 1358533580
		{ &Z_Construct_UFunction_ANPCAIController_EnterChaseState, "EnterChaseState" }, // 29830478
		{ &Z_Construct_UFunction_ANPCAIController_EnterHuntState, "EnterHuntState" }, // 2076689694
		{ &Z_Construct_UFunction_ANPCAIController_EnterPalyerLostState, "EnterPalyerLostState" }, // 481096382
		{ &Z_Construct_UFunction_ANPCAIController_EnterPatrolState, "EnterPatrolState" }, // 1341705393
		{ &Z_Construct_UFunction_ANPCAIController_HandleHear, "HandleHear" }, // 3918569860
		{ &Z_Construct_UFunction_ANPCAIController_HandleHearHumanSound, "HandleHearHumanSound" }, // 2720711468
		{ &Z_Construct_UFunction_ANPCAIController_HandleHearNonHumanSound, "HandleHearNonHumanSound" }, // 3965134795
		{ &Z_Construct_UFunction_ANPCAIController_HandleSight, "HandleSight" }, // 1893515699
		{ &Z_Construct_UFunction_ANPCAIController_SetHearingSenseStatus, "SetHearingSenseStatus" }, // 555806806
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "NPCAIController.h" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCAIController_Statics::NewProp_AISense_MetaData[] = {
		{ "Category", "Sense" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCAIController_Statics::NewProp_AISense = { "AISense", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCAIController, AISense), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCAIController_Statics::NewProp_AISense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::NewProp_AISense_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCAIController_Statics::NewProp_ControlledPawn_MetaData[] = {
		{ "Category", "Ref" },
		{ "Comment", "//UAISenseConfig_Sight* ConfigSight;\n" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
		{ "ToolTip", "UAISenseConfig_Sight* ConfigSight;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCAIController_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCAIController, ControlledPawn), Z_Construct_UClass_ANPCCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCAIController_Statics::NewProp_ControlledPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::NewProp_ControlledPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCAIController_Statics::NewProp_PlayerRef_MetaData[] = {
		{ "Category", "Ref" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPCAIController_Statics::NewProp_PlayerRef = { "PlayerRef", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCAIController, PlayerRef), Z_Construct_UClass_AMain_PlayerCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPCAIController_Statics::NewProp_PlayerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::NewProp_PlayerRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCAIController_Statics::NewProp_CurrAIState_MetaData[] = {
		{ "Category", "AISense" },
		{ "ModuleRelativePath", "Public/NPCAIController.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANPCAIController_Statics::NewProp_CurrAIState = { "CurrAIState", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCAIController, CurrAIState), Z_Construct_UEnum_PL6_1_EAIState, METADATA_PARAMS(Z_Construct_UClass_ANPCAIController_Statics::NewProp_CurrAIState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::NewProp_CurrAIState_MetaData)) }; // 814876965
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCAIController_Statics::NewProp_AISense,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCAIController_Statics::NewProp_ControlledPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCAIController_Statics::NewProp_PlayerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCAIController_Statics::NewProp_CurrAIState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPCAIController_Statics::ClassParams = {
		&ANPCAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPCAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCAIController()
	{
		if (!Z_Registration_Info_UClass_ANPCAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPCAIController.OuterSingleton, Z_Construct_UClass_ANPCAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPCAIController.OuterSingleton;
	}
	template<> PL6_1_API UClass* StaticClass<ANPCAIController>()
	{
		return ANPCAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCAIController);
	struct Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCAIController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCAIController_h_Statics::EnumInfo[] = {
		{ EAIState_StaticEnum, TEXT("EAIState"), &Z_Registration_Info_UEnum_EAIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 814876965U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPCAIController, ANPCAIController::StaticClass, TEXT("ANPCAIController"), &Z_Registration_Info_UClass_ANPCAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPCAIController), 825806047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCAIController_h_4008251359(TEXT("/Script/PL6_1"),
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCAIController_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCAIController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PL6_1_1_Source_PL6_1_Public_NPCAIController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
