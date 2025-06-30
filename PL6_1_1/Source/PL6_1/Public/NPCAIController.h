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
	UAIPerceptionComponent* AISight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sense")
	UAIPerceptionComponent* AIHearing;

	UAISenseConfig_Sight* SightConfig;
	UAISenseConfig_Hearing* HearConfig;

	//UAISenseConfig_Sight* ConfigSight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ref")
	ANPCCharacter* ControlledPawn;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ref")
	AMain_PlayerCharacter* PlayerRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AISense")
	TEnumAsByte<EAIState> CurrAIState;


	void SightConfiguration();
	void HearConfiguration();
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

	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterPatrolState();
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterAlertState(FVector _TargetLocation);
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterHuntState();
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterChaseState(UObject* _TargetActor);
	UFUNCTION(BlueprintCallable, Category = "AISense/Change Snese")
	virtual void EnterPalyerLostState(FVector _LastKnownLocation);

	


	/*UFUNCTION()
		void OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus);*/
};
