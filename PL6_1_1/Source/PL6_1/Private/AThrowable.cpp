// Fill out your copyright notice in the Description page of Project Settings.


#include "AThrowable.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAThrowable::AAThrowable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAThrowable::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AAThrowable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

USoundBase* AAThrowable::AddSound(FString _SoundType, USoundBase* _NewSound)
{
	if (!_NewSound)
	{
		return NULL;
	}
	SoundsMap.Add(_SoundType, _NewSound);

	SoundsMap[_SoundType] = CreateDefaultSubobject<USoundBase>(*_SoundType);

	return _NewSound;
}


void AAThrowable::PlaySoundByName(FString _SoundType)
{
	PlaySoundByNameAtLocation(_SoundType, GetActorLocation());
}

void AAThrowable::PlaySoundByNameAtLocation(FString _SoundType, FVector _SoundLocation)
{
	if (!SoundsMap.Find(_SoundType))
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), DefaultSound, _SoundLocation);
		return;
	}
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), SoundsMap[_SoundType], _SoundLocation);
}

void AAThrowable::PlaySoundWithParams(USoundBase* _Sound, FVector SoundLocation)
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), _Sound, SoundLocation);
}

