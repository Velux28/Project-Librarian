// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ASlidingDoor.h"
#include "ASlidingDoubleDoor.generated.h"

/**
 * 
 */
UCLASS()
class PL6_1_API AASlidingDoubleDoor : public AASlidingDoor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Door")
	float door2Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UCurveVector* Door2OpeningCurve;
	
	//the relative position for the closed door
	UPROPERTY(EditAnywhere, Category = "Door")
	FVector Door2OpenPosition;

	//the relative position for the opened door
	UPROPERTY(EditAnywhere, Category = "Door")
	FVector Door2ClosePosition;

	//this variable must be setted on begin play
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UStaticMeshComponent* Door2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	bool bIsDoor2Opening;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	bool bIsDoor2Closing;
	
public:
	void OpenDoor() override;
	UFUNCTION(BlueprintCallable)
	void OpenDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorOpenPosition, FVector _Door2OpenPosition);

	void CloseDoor() override;
	UFUNCTION(BlueprintCallable)
	void CloseDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorClosePosition, FVector _Door2ClosePosition);
};
