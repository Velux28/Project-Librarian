// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Main_PlayerCharacter.h"
#include "NPCCharacter.h"
#include "Perception/AIPerceptionTypes.h"
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
	
protected:
	virtual void Tick(float DeltaTime) override;

	class UAISenseConfig_Sight* SightConfig;
	class UAISenseConfig_Hearing* HearingConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ref")
	ANPCCharacter* ControlledPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ref")
	AMain_PlayerCharacter* PlayerRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AISense")
	TEnumAsByte<EAIState> CurrAIState;

	UFUNCTION(BlueprintCallable, Category = "AISense/Sight")
	virtual void HandleSight(AActor* _Actor, FAIStimulus _Stimulus);
	UFUNCTION(BlueprintCallable, Category = "AISense/Hear")
	virtual void HandleHear(FAIStimulus _Stimulus);
	UFUNCTION(BlueprintCallable, Category = "AISense/Hear")
	virtual void HandleHearHumanSound();
	UFUNCTION(BlueprintCallable, Category = "AISense/Hear")
	virtual void HandleHearNonHumanSound();
	UFUNCTION(BlueprintCallable, Category = "AIState/Patrol")
	virtual void ChosePatrolLocation(FVector& PatrolPosition);

	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterPatrolState();
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterAlertState();
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterHuntState();
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterChaseState();
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterPalyerLostState();

	


	/*UFUNCTION()
		void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);*/
};
