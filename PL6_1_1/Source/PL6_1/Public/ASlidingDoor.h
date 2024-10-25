// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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

	UFUNCTION(BlueprintCallable)
	virtual void OpenDoor();	
	UFUNCTION(BlueprintCallable)
	virtual void OpenDoorWithParams(UStaticMeshComponent* _Door, FVector _DoorEndPosition);

	UFUNCTION(BlueprintCallable)
	virtual void CloseDoor();
	UFUNCTION(BlueprintCallable)
	virtual void CloseDoorWithParams(UStaticMeshComponent* _Door, FVector _DoorStartPosition);

	UPROPERTY(EditAnywhere, Category = "Door")
	float doorSpeed;

	//the relative position for the closed door
	UPROPERTY(EditAnywhere, Category = "Door")
	FVector doorStartPosition;

	//the relative position for the opened door
	UPROPERTY(EditAnywhere, Category = "Door")
	FVector doorEndPosition;

	//this variable must be setted on begin play
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	UStaticMeshComponent* door;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	bool bIsDoorOpening;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Door")
	bool bIsDoorClosing;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
