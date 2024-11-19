// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/AudioComponent.h"
#include "SoundComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
USoundComponent::USoundComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USoundComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USoundComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

USoundBase* USoundComponent::AddSound(FString _SoundType, USoundBase* _NewSound)
{
	if (!_NewSound)
	{
		return NULL;
	}
	SoundsMap.Add(_SoundType, _NewSound);

	SoundsMap[_SoundType] = CreateDefaultSubobject<USoundBase>(*_SoundType);

	return _NewSound;
}

void USoundComponent::PlayDefaultSound()
{
	PlaySoundWithParams(DefaultSound, GetOwner()->GetActorLocation());
}

void USoundComponent::PlaySoundByName(FString _SoundType)
{
	PlaySoundByNameAtLocation(_SoundType, GetOwner()->GetActorLocation());
}

void USoundComponent::PlaySoundByNameAtLocation(FString _SoundType, FVector _SoundLocation)
{
	if (!SoundsMap.Find(_SoundType))
	{
		PlaySoundWithParams(DefaultSound, _SoundLocation);
		return;
	}
	PlaySoundWithParams(SoundsMap[_SoundType], _SoundLocation);
}

void USoundComponent::PlaySoundWithParams(USoundBase* _Sound, FVector SoundLocation)
{
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), _Sound, SoundLocation);
}

