// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Main_PlayerCharacter.h"
#include "NPCCharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"
#include "NPCAIController.generated.h"

UENUM()
enum EAIState
{
	Patrol,
	Alert,
	Hunt,
	Chase,
	Kill,
	PlayerLost,
	ScriptedChase
};
/**
 * 
 */
UCLASS()
class PL6_1_API ANPCAIController : public AAIController
{
	GENERATED_BODY()

public:
	ANPCAIController();
	
protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sense")
	UAIPerceptionComponent* AISense;

	UAISenseConfig_Sight* SightConfig;
	UAISenseConfig_Hearing* HearConfig;

	//UAISenseConfig_Sight* ConfigSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ref")
	ANPCCharacter* ControlledPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ref")
	AMain_PlayerCharacter* PlayerRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AISense")
	TEnumAsByte<EAIState> CurrAIState;

	//in player lost l'ai si gira in direzione del player solo all'inizio delle scansione
	void SightConfigWithParams(float _SightRadius, float _SightLostDelta, float _SightAnfgle);
	void SightPatrolConfig();
	void SightAlertConfig();
	void SightHuntConfig();
	void SightChaseConfig();
	void SightPlayerLostConfig();

	void HearConfigWithParams(float _HearRadius);
	void HearPatrolConfig();
	void HearAlertConfig();
	void HearHuntConfig();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (ForceAsFunction), Category = "AISense/Scan")
	bool ActivateAlertScanner();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (ForceAsFunction), Category = "AISense/Scan")
	bool ActivatePlayerLostScanner();

	UFUNCTION(BlueprintCallable, Category = "AISense/Sight")
	virtual void HandleSight(AActor* _Actor, FAIStimulus _Stimulus);
	UFUNCTION(BlueprintCallable, Category = "AISense/Hear")
	virtual void HandleHear(FAIStimulus _Stimulus);
	UFUNCTION(BlueprintCallable, Category = "AISense/Hear")
	virtual void HandleHearHumanSound();
	UFUNCTION(BlueprintCallable, Category = "AISense/Hear")
	virtual void HandleHearNonHumanSound(FVector _TargetLocation);
	UFUNCTION(BlueprintCallable, Category = "AIState/Patrol")
	virtual void ChosePatrolLocation(FVector& PatrolPosition);

	/// <summary>
	///	Set ControlledPawn movement speed, changes "ControlledPawn" materials using Patrol variable in pawn "MaterialMap" using "Patrol" key and plays "Patrol" sound in SoundMap of ControlledPawn.
	/// Set hearing and sight sense, clears and set blackboard variable for Patrol.
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterPatrolState();
	/// <summary>
	///	Set ControlledPawn movement speed, changes ControlledPawn materials using Alert variable in pawn MaterialMap using "Alert" key and plays "Alert" sound in SoundMap of ControlledPawn.
	/// Set hearing and sight sense, clears and set blackboard variable for Alert.
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterAlertState(FVector _TargetLocation);
	/// <summary>
	///	Set ControlledPawn movement speed, changes ControlledPawn materials using Hunt variable in pawn MaterialMap using "Hunt" key and plays "Hunt" sound in SoundMap of ControlledPawn.
	/// Set hearing and sight sense, clears and set blackboard variable for Hunt.
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterHuntState();
	/// <summary>
	///	Set ControlledPawn movement speed, changes ControlledPawn materials using Chase variable in pawn MaterialMap using "Chase" key and plays "Chase" sound in SoundMap of ControlledPawn.
	/// Set sight sense, clears and set blackboard variable for Chase.
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterChaseState(UObject* _TargetActor);
	/// <summary>
	///	Set ControlledPawn movement speed, changes ControlledPawn materials using Lost variable in pawn MaterialMap using "Lost" key and plays "Lost" sound in SoundMap of ControlledPawn.
	/// Set blackboard variable for Lost.
	/// </summary>
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterPalyerLostState(FVector _LastKnownLocation);

	


	/*UFUNCTION()
		void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);*/
};
