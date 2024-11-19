// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoundComponent.h"
#include "AThrowable.generated.h"


UCLASS()
class PL6_1_API AAThrowable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAThrowable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundComponent* SoundComp = CreateDefaultSubobject<USoundComponent>(TEXT("My Sound Comp"));

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
