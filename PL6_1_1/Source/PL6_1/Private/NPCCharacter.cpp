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

	MovementPatrolSpeed = 200; 
	MovementPatrolRadius = 5000;
	MovementPatrolWaitTimer = 5;
	HearingPatrolRadius = 3000;
	SightPatrolRadius = 200;
	SightPatrolLostRadiusDelta = 50000;
	SightPatrolHalfAngle = 60;
	
	MovementAlertSpeed = 200;
	HearingAlertRadius = 3000;
	SightAlertRadius = 400;
	SightAlertLostRadiusDelta = 50000;
	SightAlertHalfAngle = 60;

	SightScanRadius = 1500;
	SightScanLostRadiusDelta = 50000;
	SightScanHalfAngle = 75;

	MovementHuntSpeed = 300;
	MovementHuntRadius = 800;
	MovementHuntWaitTimer = 2.5;
	MovementHuntResetTimer = 20;
	MovementHuntCurrResetTimer = MovementHuntResetTimer;
	HearingHuntRadius = 3000;
	SightHuntRadius = 400;
	SightHuntLostRadiusDelta = 50000;
	SightHuntHalfAngle = 60;

	MovementChaseSpeed = 350;
	SightChaseRadius = 400;
	SightChaseLostRadiusDelta = 50000;
	SightChaseHalfAngle = 90;

	MovementPlayerLostSpeed = 250;
	SightPlayerLostRadius = 1500;
	SightPlayerLostLostRadiusDelta = 50000;
	SightPlayerLostHalfAngle = 75;
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
