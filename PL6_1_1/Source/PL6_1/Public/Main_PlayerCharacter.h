// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual bool HandleCrouch(UCameraComponent* _Camera);

	

		

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsMoving;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsCrouching;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	bool bIsMidCrouchAnim;
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
