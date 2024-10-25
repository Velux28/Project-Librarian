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

	void OpenDoor() override;
	UFUNCTION(BlueprintCallable)
	void OpenDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorEndPosition, FVector _Door2EndPosition);

	void CloseDoor() override;
	UFUNCTION(BlueprintCallable)
	void CloseDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2,	FVector _DoorStartPosition, FVector _Door2StartPosition);

	UPROPERTY(EditAnywhere, Category = "Door")
	float door2Speed;

	//the relative position for the closed door
	UPROPERTY(EditAnywhere, Category = "Door")
	FVector door2StartPosition;

	//the relative position for the opened door
	UPROPERTY(EditAnywhere, Category = "Door")
	FVector door2EndPosition;

	//this variable must be setted on begin play
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UStaticMeshComponent* door2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	bool bIsDoor2Opening;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	bool bIsDoor2Closing;
};
