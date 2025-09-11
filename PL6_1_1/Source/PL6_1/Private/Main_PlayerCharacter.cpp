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

bool AMain_PlayerCharacter::HandleCrouch(UCameraComponent* _Camera)
{
	
	
	//if (bIsCrouching && _Camera->FieldOfView == CrouchFOV)
	if (bIsCrouching && !bIsMidCrouchAnim)
	{
		//DeltaFOV = UncrouchFOV - _Camera->FieldOfView;
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
		bIsMidCrouchAnim = true;
		return true;
	}
	//else if (!bIsCrouching && _Camera->FieldOfView == UncrouchFOV)
	else if (!bIsCrouching && !bIsMidCrouchAnim)
	{
		//DeltaFOV = CrouchFOV - _Camera->FieldOfView;
		Crouch();
		//playsound
		GetMesh()->SetRelativeLocation(FVector(-40, -15, 0));
		bIsCrouching = true;
		bIsMidCrouchAnim = true;
		return true;
	}

	return false;
}