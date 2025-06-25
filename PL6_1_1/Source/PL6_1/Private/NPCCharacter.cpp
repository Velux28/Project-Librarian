// Fill out your copyright notice in the Description page of Project Settings.

#include "NPCCharacter.h"
#include "Math/UnrealMathUtility.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ANPCCharacter::ANPCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if (!SoundComp)
	{
		SoundComp = CreateDefaultSubobject<USoundComponent>(TEXT("My Sound Comp"));
	}

	
}

// Called when the game starts or when spawned
void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();
	

}


// Called every frame
void ANPCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPCCharacter::ChangeMaterial(FString MattType)
{
	TArray<int32> Keys;
	if (MaterialMap.IsEmpty() || !MaterialMap.Contains(MattType))
	{
		DefaultMat.GetKeys(Keys);
		//GetMesh()->SetMaterial(0, DefaultMat);
		for (int32 i = 0; i < Keys.Num(); i++)
		{
			GetMesh()->SetMaterial(i, DefaultMat[i]);
		}
		return;
	}

	MaterialMap[MattType].MaterialChanges.GetKeys(Keys);
	for (int32 i = 0; i < Keys.Num(); i++)
	{
		GetMesh()->SetMaterial(i, MaterialMap[MattType].MaterialChanges[i]);
	}
}

void ANPCCharacter::SetWalkSpeed(float NewSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
	
}

FVector ANPCCharacter::ChosePatrolLocation(FVector PlayerPosition)
{
	float x = FMath::FRandRange(-1.f, 1.f);
	float y = FMath::FRandRange(-1.f, 1.f);

	return FVector(PlayerPosition.X + x * CurrPlayerMaxRadius, PlayerPosition.Y + y * CurrPlayerMaxRadius, PlayerPosition.Z);
}
