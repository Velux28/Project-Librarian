// Fill out your copyright notice in the Description page of Project Settings.


#include "Main_PlayerCharacter.h"

// Sets default values
AMain_PlayerCharacter::AMain_PlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!PlayerDialogue)
	{
		PlayerDialogue = CreateDefaultSubobject<UDialogueComponent>(TEXT("Player Dialogue"));
	}
}

// Called when the game starts or when spawned
void AMain_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	BreathCurrTimer = BreathTimer;
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
		BreathCurrTimer = 0;
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

	BreathBar->SetBreathPerc(BreathCurrTimer / BreathTimer);
}

void AMain_PlayerCharacter::HoldBreath(bool _CurrBreathStatus)
{
	bIsHoldingBreath = _CurrBreathStatus;

	//if (bIsHoldingBreath)
	//{
	//	BreathBar->SetIsEnabled(true);
	//	return;
	//}
	////BreathBar->Visibility = ESlateVisibility::Hidden;
	//return;
}

bool AMain_PlayerCharacter::RechargeBreath()
{
	if (BreathCurrTimer >= BreathTimer)
	{
		BreathCurrTimer = BreathTimer;
		//BreathBar->SetIsEnabled(false);
		return false;
	}
	BreathCurrTimer += GetWorld()->DeltaTimeSeconds;
	BreathBar->SetBreathPerc(BreathCurrTimer / BreathTimer);
	return true;
}

bool AMain_PlayerCharacter::HandleCrouch(UCameraComponent* _Camera)
{
	if (bIsCrouching && _Camera->FieldOfView == CrouchFOV)
	{
		DeltaFOV = UncrouchFOV - _Camera->FieldOfView;
		FHitResult OnHit;
		FCollisionQueryParams Params;
		//Params.AddIgnoredActor(this);
		//if hits something does not uncrouch
		if (GetWorld()->SweepSingleByChannel(OnHit, GetActorLocation(), GetActorLocation() + PlayerUncrouchHeight, FQuat::Identity, ECC_Visibility, FCollisionShape::MakeSphere(25.f), Params))
		{
			return false;
		}
		UnCrouch();
		GetMesh()->SetRelativeLocation(FVector::Zero());
		bIsCrouching = false;
		return true;
	}
	else if (!bIsCrouching && _Camera->FieldOfView == UncrouchFOV)
	{
		DeltaFOV = CrouchFOV - _Camera->FieldOfView;
		Crouch();
		//playsound
		GetMesh()->SetRelativeLocation(FVector(-40, -15, 0));
		bIsCrouching = true;
		return true;
	}

	return false;
}