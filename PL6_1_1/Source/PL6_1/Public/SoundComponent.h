// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/AudioComponent.h"
#include "SoundComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PL6_1_API USoundComponent : public UAudioComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USoundComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TMap<FString, USoundBase*> SoundsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* DefaultSound;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	USoundBase* AddSound(FString _SoundType, USoundBase* _NewSound);

	UFUNCTION(BlueprintCallable)
	void PlayDefaultSound();

	UFUNCTION(BlueprintCallable)
	void PlaySoundByName(FString _SoundType);

	UFUNCTION(BlueprintCallable)
	void PlaySoundByNameAtLocation(FString _SoundType, FVector SoundLocation);

	UFUNCTION(BlueprintCallable)
	void PlaySoundWithParams(USoundBase* _Sound, FVector SoundLocation);
};
