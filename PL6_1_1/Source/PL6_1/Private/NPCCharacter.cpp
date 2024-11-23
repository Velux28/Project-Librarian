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

void ANPCCharacter::ChangeMaterial(FString MattType, int32 MatIndex)
{
	if (MaterialMap.IsEmpty() || !MaterialMap.Contains(MattType))
	{
		GetMesh()->SetMaterial(MatIndex, DefaultMat);
		return;
	}
	GetMesh()->SetMaterial(MatIndex, MaterialMap[MattType]);
}

void ANPCCharacter::SetWalkSpeed(float NewSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = NewSpeed;
	
}

void ANPCCharacter::ChosePatrolLocation(FVector& PatrolPosition)
{
	float x = FMath::FRandRange(-1.f, 1.f);
	float y = FMath::FRandRange(-1.f, 1.f);

	PatrolPosition = FVector(PatrolPosition.X + x * CurrPlayerMaxRadius, PatrolPosition.X + y * CurrPlayerMaxRadius, PatrolPosition.Z);
}
