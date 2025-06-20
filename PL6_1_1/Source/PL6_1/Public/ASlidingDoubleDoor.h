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

	/**
	* the second curve used in the timeline
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UCurveVector* Door2OpeningCurve;

	/**
	* this variable must be setted on begin play
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UStaticMeshComponent* Door2;
	
public:
	/**
	* The function is called in the update of the timeline, and open the the door using the curve
	*/
	void OpenDoor() override;
};
