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


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float ChasingSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float WalkingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Hunt")
	float HuntingResetTimer;
	float CurrHuntTimer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Hunt")
	float HuntingRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Chase")
	float ChasingResetTimer;
	float CurrChaseTimer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Chase")
	float ChasingRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState/Patrol")		
	float PatrolRadius;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AIState")
	float CurrPlayerMaxRadius;

	/**
	* Radius of the sight sense
	*/
	UPROPERTY(EditAnywhere, Category = "AIState/Config")
	float SightRadius;
	/**
	* Difference between sight radius and lost radius
	*/
	UPROPERTY(EditAnywhere, Category = "AIState/Config")
	float SightLostRadiusDelta;
	/**
	* half radius of the sight sense
	*/
	UPROPERTY(EditAnywhere, Category = "AIState/Config")
	float SightHalfAngle;

	/**
	* Radius of the sight sense
	*/
	UPROPERTY(EditAnywhere, Category = "AIState/Config")
	float ScanRadius;
	/**
	* Difference between sight radius and lost radius
	*/
	UPROPERTY(EditAnywhere, Category = "AIState/Config")
	float ScanLostRadiusDelta;
	/**
	* half radius of the sight sense
	*/
	UPROPERTY(EditAnywhere, Category = "AIState/Config")
	float ScanHalfAngle;

	/**
	* Radius of the hearing sense
	*/
	UPROPERTY(EditAnywhere, Category = "AIState/Config")
	float HearingRadius;


	UFUNCTION(BlueprintCallable, Category = "Material")
	virtual void ChangeMaterial(FString MattType);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	virtual void SetWalkSpeed(float NewSpeed);

	//UFUNCTION(BlueprintCallable, Category = "AIState/Patrol")
	virtual FVector ChosePatrolLocation(FVector PlayerPosition);

};
