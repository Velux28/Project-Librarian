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
	bool bIsDoorOpen;
	/**
	* this value rapresents if the door is ready to be open
	*/
	bool bIsReady;

	/**
	* this value is used only in automatic doors and determins if the door can be closed
	*/
	UPROPERTY(BlueprintReadWrite, Category = "Door")
	bool bCanBeClose;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/**
	* The function is called in the update of the timeline, and open the the door using the curve
	*/
	UFUNCTION(BlueprintCallable)
	virtual void TimelineTick();

	/**
	* The function is called at the end of the timeline, check if the door is open and open reverse the timeline closing the door
	*/
	UFUNCTION(BlueprintCallable)
	virtual void TimelineEnd();

	/**
	* close the door only if it's fully open and can be close
	* @return Return true if he succeded
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (ForceAsFunction))
	bool CloseDoor();

	/**
	* open the door only if it's ready to be open
	* @return Return true if he succeded
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, meta = (ForceAsFunction))
	bool OpenDoor();
};
