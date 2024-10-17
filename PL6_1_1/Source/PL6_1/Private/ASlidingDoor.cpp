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

// Function for opening the door
void AASlidingDoor::OpenDoor()
{
	//if the door is null skip this part
	if(!door)
	{
		bIsDoorOpening = false;
		return;
	}
	//Get the direction where the door is opening
	FVector direction = doorEndPosition - door->GetRelativeLocation();
	if (direction.X < 3 && direction.X > -3
		&& direction.Y < 3 && direction.Y > -3
		&& direction.Z < 3 && direction.Z > -3)
	{
		// is door opening is true to start the delay before start closing the door
		bIsDoorOpening = true;
		bIsDoorClosing = true;
		return;
	}
	//update the door position
	door->SetRelativeLocation(FMath::Lerp(door->GetRelativeLocation(), doorEndPosition, FVector::One() * doorSpeed * GetWorld()->GetDeltaSeconds()));
	bIsDoorOpening = true;
}

// Function for opening the door
void AASlidingDoor::CloseDoor()
{
	//if the door is null skip this part
	if (!door)
	{
		bIsDoorClosing = false;
		return;
	}
	//Get the direction where the door is opening
	FVector direction = doorStartPosition - door->GetRelativeLocation();
	if (direction.X < 1 && direction.X > -1
		&& direction.Y < 1 && direction.Y > -1
		&& direction.Z < 1 && direction.Z > -1)
	{
		//reset bpth variable
		bIsDoorClosing = false;
		bIsDoorOpening = false;
		return;
	}
	//update the door position
	door->SetRelativeLocation(FMath::Lerp(door->GetRelativeLocation(), doorStartPosition, FVector::One() * doorSpeed * GetWorld()->GetDeltaSeconds()));
	bIsDoorClosing = true;
}

