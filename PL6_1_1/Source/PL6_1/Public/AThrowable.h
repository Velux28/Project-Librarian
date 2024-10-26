// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	TMap<FString, USoundBase*> SoundsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
		USoundBase* DefaultSound;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	USoundBase* AddSound(FString _SoundType, USoundBase* _NewSound);

	UFUNCTION(BlueprintCallable)
		void PlaySoundByName(FString _SoundType);

	UFUNCTION(BlueprintCallable)
		void PlaySoundByNameAtLocation(FString _SoundType, FVector SoundLocation);

	UFUNCTION(BlueprintCallable)
		void PlaySoundWithParams(USoundBase* _Sound, FVector SoundLocation);

};
