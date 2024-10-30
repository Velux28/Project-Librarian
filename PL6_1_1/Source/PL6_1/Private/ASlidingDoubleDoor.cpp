// Fill out your copyright notice in the Description page of Project Settings.


#include "ASlidingDoubleDoor.h"

void AASlidingDoubleDoor::OpenDoor()
{
	Super::OpenDoor();

	OpenDoorWithParams(Door2, Door2OpenPosition);
}

void AASlidingDoubleDoor::OpenDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorOpenPosition, FVector _Door2OpenPosition)
{
	OpenDoorWithParams(_Door2, _Door2OpenPosition);
	
	OpenDoorWithParams(_Door, _DoorOpenPosition);
}

void AASlidingDoubleDoor::CloseDoor()
{
	Super::CloseDoor();

	CloseDoorWithParams(Door2, Door2ClosePosition);
}

void AASlidingDoubleDoor::CloseDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorClosePosition, FVector _Door2ClosePosition)
{
	CloseDoorWithParams(_Door2, _Door2ClosePosition);
	
	CloseDoorWithParams(_Door, _DoorClosePosition);
}