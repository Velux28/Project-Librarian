// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SoundComponent.h"
#include "NPCCharacter.generated.h"

USTRUCT(BlueprintType)
struct FMaterialMap
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TMap<int32, UMaterialInstance*> MaterialChanges;
};

UCLASS()
class PL6_1_API ANPCCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPCCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundComponent* SoundComp = CreateDefaultSubobject<USoundComponent>(TEXT("My Sound Comp"));

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Material")
	TMap<FString, FMaterialMap> MaterialMap;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Material")
	TMap<int32, UMaterialInstance*> DefaultMat;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Scan")
	FVector ScannerLocation;

	//una variabile per ogni stato, categorizzate per stato
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PatrolConfig")
	float MovementPatrolSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PatrolConfig")
	float MovementPatrolRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PatrolConfig")
	float MovementPatrolWaitTimer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PatrolConfig")
	float HearingPatrolRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PatrolConfig")
	float SightPatrolRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PatrolConfig")
	float SightPatrolLostRadiusDelta;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PatrolConfig")
	float SightPatrolHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AlertConfig")
	float MovementAlertSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AlertConfig")
	float HearingAlertRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AlertConfig")
	float SightAlertRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AlertConfig")
	float SightAlertLostRadiusDelta;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AlertConfig")
	float SightAlertHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ScanningConfig")
	float SightScanRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ScanningConfig")
	float SightScanLostRadiusDelta;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ScanningConfig")
	float SightScanHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HuntConfig")
	float MovementHuntSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HuntConfig")
	float MovementHuntWaitTimer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HuntConfig")
	float HearingHuntRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HuntConfig")
	float SightHuntRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HuntConfig")
	float SightHuntLostRadiusDelta;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HuntConfig")
	float SightHuntHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ChaseConfig")
	float MovementChaseSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ChaseConfig")
	float SightChaseRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ChaseConfig")
	float SightChaseLostRadiusDelta;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ChaseConfig")
	float SightChaseHalfAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PlayerLostConfig")
	float MovementPlayerLostSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PlayerLostConfig")
	float SightPlayerLostRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PlayerLostConfig")
	float SightPlayerLostLostRadiusDelta;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PlayerLostConfig")
	float SightPlayerLostHalfAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Prediction")
	//for how much time the AI predict Player location
	float PredictionTime;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState")
	float CurrPlayerMaxRadius;


	UFUNCTION(BlueprintCallable, Category = "Material")
	virtual void ChangeMaterial(FString MattType);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void SetWalkSpeed(float NewSpeed);

	//UFUNCTION(BlueprintCallable, Category = "AIState/Patrol")
	virtual FVector ChosePatrolLocation(FVector PlayerPosition);

};
