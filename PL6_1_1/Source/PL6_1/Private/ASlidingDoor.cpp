// Fill out your copyright notice in the Description page of Project Settings.


#include "ASlidingDoor.h"

// Sets default values
AASlidingDoor::AASlidingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AASlidingDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AASlidingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AASlidingDoor::OpenDoor()
{
	if(!door)
	{
		bIsDoorOpening = false;
		return;
	}
	FVector direction = doorEndPosition - door->GetRelativeLocation();
	if (direction.X < 3 && direction.X > -3
		&& direction.Y < 3 && direction.Y > -3
		&& direction.Z < 3 && direction.Z > -3)
	{
		bIsDoorOpening = true;
		bIsDoorClosing = true;
		return;
	}
	door->SetRelativeLocation(FMath::Lerp(door->GetRelativeLocation(), doorEndPosition, FVector::One() * doorSpeed * GetWorld()->GetDeltaSeconds()));
	bIsDoorOpening = true;
}

void AASlidingDoor::CloseDoor()
{
	
	if (!door)
	{
		bIsDoorClosing = false;
		return;
	}
	FVector direction = doorStartPosition - door->GetRelativeLocation();
	if (direction.X < 1 && direction.X > -1
		&& direction.Y < 1 && direction.Y > -1
		&& direction.Z < 1 && direction.Z > -1)
	{
		bIsDoorClosing = false;
		bIsDoorOpening = false;
		return;
	}
	door->SetRelativeLocation(FMath::Lerp(door->GetRelativeLocation(), doorStartPosition, FVector::One() * doorSpeed * GetWorld()->GetDeltaSeconds()));
	bIsDoorClosing = true;
}

