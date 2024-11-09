// Fill out your copyright notice in the Description page of Project Settings.


#include "Main_PlayerCharacter.h"

// Sets default values
AMain_PlayerCharacter::AMain_PlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMain_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	BreathCurrTimer = 0;
	BreathMultiplier = 0;
}

// Called every frame
void AMain_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMain_PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMain_PlayerCharacter::HandleHoldBreath()
{
	if (BreathCurrTimer <= 0)
	{
		bIsHoldingBreath = false;
		return;
	}

	if (bIsMoving)
	{
		if (bIsCrouching)
		{
			BreathMultiplier = CrouchBreathMultiplier;
		}
		else
		{
			BreathMultiplier = MovingBreathMultiplier;
		}
	}
	else
	{
		BreathMultiplier = StillBreathMultiplier;
	}

	BreathCurrTimer -= GetWorld()->DeltaTimeSeconds * BreathMultiplier;

	//settare la percentuale della ui
	//BreathCurrTimer / BreathTimer
}

void AMain_PlayerCharacter::HoldBreath(bool _CurrBreathStatus)
{
	bIsHoldingBreath = _CurrBreathStatus;

	if (bIsHoldingBreath)
	{
		//Attivo la ui
	}
}

void AMain_PlayerCharacter::RechargeBreath()
{
	if (BreathCurrTimer >= BreathTimer)
	{
		BreathCurrTimer = BreathTimer;
		//disattivare la ui 
		return;
	}
	BreathCurrTimer += GetWorld()->DeltaTimeSeconds;
	//settare la percentuale della ui
}

bool AMain_PlayerCharacter::HandleCrouch()
{
	if (bIsCrouching)
	{
		FHitResult OnHit;
		FCollisionQueryParams Params;
		//if hits something does not uncrouch
		if (ActorLineTraceSingle(OnHit, GetActorLocation(), GetActorLocation() + PlayerUncrouchHeight, ECollisionChannel::ECC_Visibility, Params))
		{
			return false;
		}
		UnCrouch();
		GetMesh()->SetRelativeLocation(FVector::Zero());
		bIsCrouching = false;
	}
	else 
	{
		Crouch();
		//playsound
		GetMesh()->SetRelativeLocation(FVector(-40, -15, 0));
		bIsCrouching = true;
	}

	//activate the widget
	//set camera fov
	return true;
}