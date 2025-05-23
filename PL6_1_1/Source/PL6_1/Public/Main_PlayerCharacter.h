// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BreathWidget.h"
#include "Camera/CameraComponent.h"
#include "DialogueComponent.h"
#include "GameFramework/Character.h"
#include "Main_PlayerCharacter.generated.h"

UCLASS()
class PL6_1_API AMain_PlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMain_PlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "HoldBreath")
	virtual void HandleHoldBreath();
	UFUNCTION(BlueprintCallable, Category = "HoldBreath")
	virtual void HoldBreath(bool _CurrBreathStatus);
	UFUNCTION(BlueprintCallable, Category = "HoldBreath")
	virtual bool RechargeBreath();

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual bool HandleCrouch(UCameraComponent* _Camera);

	

		

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hold Breath")
	float BreathTimer;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hold Breath")
	float BreathCurrTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hold Breath")
	float CrouchBreathMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hold Breath")
	float MovingBreathMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hold Breath")
	float StillBreathMultiplier;
	float BreathMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hold Breath")
	bool bIsHoldingBreath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hold Breath")
	UBreathWidget* BreathBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsMoving;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsCrouching;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	FVector PlayerUncrouchHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float CrouchFOV;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float UncrouchFOV;
	UPROPERTY(BlueprintReadOnly, Category = "Camera")
	float DeltaFOV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	UDialogueComponent* PlayerDialogue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FDialogue CurrPlayerDialogue;
};
