// Fill out your copyright notice in the Description page of Project Settings.


#include "AThrowable.h"
#include "Components/AudioComponent.h"
#include "GameFramework/Actor.h"
//#include "SoundComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAThrowable::AAThrowable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if(!SoundComp)
	{
		SoundComp = CreateDefaultSubobject<USoundComponent>(TEXT("My Sound Comp"));
	}
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


