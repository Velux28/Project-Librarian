// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TimelineComponent.h"
#include "Curves/CurveVector.h"
#include "GameFramework/Actor.h"
#include "ASlidingDoor.generated.h"

UCLASS()
class PL6_1_API AASlidingDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AASlidingDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector CurveValue;
	float TimelineValue;

	FTimeline DoorTimeline;

	/**
	* the curve used in the timeline
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UCurveVector* DoorOpeningCurve;

	/**
	* this variable must be setted on begin play
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UStaticMeshComponent* Door;

	/**
	* this value rapresents if the door is open or not
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Door")
	bool bIsDoorOpen;
	/**
	* this value rapresents if the door is ready to be open
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Door")
	bool bIsDoorReady;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	* The function is called in the update of the timeline, and open the the door using the curve
	*/
	UFUNCTION(BlueprintCallable)
	virtual void OpenDoor();

	/**
	* The function is called at the end of the timeline, check if the door is open and open reverse the timeline closing the door
	*/
	UFUNCTION(BlueprintCallable)
	virtual void CloseDoor();


	/**
	* open the door only if it's ready to be open
	* @return Return true if he succeded
	*/
	UFUNCTION(BlueprintCallable)
	virtual bool TryOpenDoor();
};
