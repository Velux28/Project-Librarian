// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPCCharacter.generated.h"

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Material")
	UMaterialInstance* PatrolMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Material")
	UMaterialInstance* ChaseMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Material")
	UMaterialInstance* AlertMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float ChasingSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float WalkingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Hunt")
	float HuntingResetTimer;
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Hunt")
	float CurrHuntTimer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Hunt")
	float HuntingRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Patrol")
	float PatrolRadius;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState")
	float CurrPlayerMaxRadius;
	


	UFUNCTION(BlueprintCallable, Category = "Material")
	virtual void ChangeMaterial(int32 MatIndex, UMaterialInstance* NewMat);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void SetWalkSpeed(float NewSpeed);

};
