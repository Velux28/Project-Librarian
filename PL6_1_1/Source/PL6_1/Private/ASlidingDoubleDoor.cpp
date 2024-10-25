// Fill out your copyright notice in the Description page of Project Settings.


#include "ASlidingDoubleDoor.h"

void AASlidingDoubleDoor::OpenDoor()
{
	Super::OpenDoor();

	//if the door is null skip this part
	if (!door2)
	{
		bIsDoor2Opening = false;
		return;
	}
	//Get the direction where the door is opening
	FVector direction = door2EndPosition - door2->GetRelativeLocation();
	if (direction.X < 3 && direction.X > -3
		&& direction.Y < 3 && direction.Y > -3
		&& direction.Z < 3 && direction.Z > -3)
	{
		// is door opening is true to start the delay before start closing the door
		bIsDoor2Opening = true;
		bIsDoor2Closing = true;
		return;
	}
	//update the door position
	door2->SetRelativeLocation(FMath::Lerp(door2->GetRelativeLocation(), door2EndPosition, FVector::One() * door2Speed * GetWorld()->GetDeltaSeconds()));
	//bIsDoor2Opening = true;
}

void AASlidingDoubleDoor::OpenDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorEndPosition, FVector _Door2EndPosition)
{
	OpenDoorWithParams(_Door2, _Door2EndPosition);
	//if the door is null skip this part
	if (!_Door)
	{
		bIsDoorOpening = false;
		return;
	}
	//Get the direction where the door is opening
	FVector direction = _DoorEndPosition - _Door->GetRelativeLocation();
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
	_Door->SetRelativeLocation(FMath::Lerp(_Door->GetRelativeLocation(), _DoorEndPosition, FVector::One() * doorSpeed * GetWorld()->GetDeltaSeconds()));
	//bIsDoorOpening = true;
}

void AASlidingDoubleDoor::CloseDoor()
{
	Super::CloseDoor();

	//if the door is null skip this part
	if (!door2)
	{
		bIsDoor2Closing = false;
		return;
	}
	//Get the direction where the door is opening
	FVector direction = door2StartPosition - door2->GetRelativeLocation();
	if (direction.X < .05f && direction.X > -.05f
		&& direction.Y < .05f && direction.Y > -.05f
		&& direction.Z < .05f && direction.Z > -.05f)
	{
		//reset bpth variable
		bIsDoor2Closing = false;
		bIsDoor2Opening = false;
		return;
	}
	//update the door position
	door2->SetRelativeLocation(FMath::Lerp(door2->GetRelativeLocation(), door2StartPosition, FVector::One() * door2Speed * GetWorld()->GetDeltaSeconds()));
	//bIsDoor2Closing = true;
}

void AASlidingDoubleDoor::CloseDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorStartPosition, FVector _Door2StartPosition)
{
	CloseDoorWithParams(_Door2, _Door2StartPosition);
	//if the door is null skip this part
	if (!_Door)
	{
		bIsDoorClosing = false;
		return;
	}
	//Get the direction where the door is opening
	FVector direction = _DoorStartPosition - _Door->GetRelativeLocation();
	if (direction.X < .05f && direction.X > -.05f
		&& direction.Y < .05f && direction.Y > -.05f
		&& direction.Z < .05f && direction.Z > -.05f)
	{
		//reset bpth variable
		bIsDoorClosing = false;
		bIsDoorOpening = false;
		return;
	}
	//update the door position
	_Door->SetRelativeLocation(FMath::Lerp(_Door->GetRelativeLocation(), _DoorStartPosition, FVector::One() * doorSpeed * GetWorld()->GetDeltaSeconds()));
	//bIsDoorClosing = true;
}