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
	void OpenDoor();

	UFUNCTION(BlueprintCallable)
	void CloseDoor();

	UPROPERTY(EditAnywhere, Category = "Door")
	float doorSpeed;

	UPROPERTY(EditAnywhere, Category = "Door")
	FVector doorStartPosition;

	UPROPERTY(EditAnywhere, Category = "Door")
	FVector doorEndPosition;

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
