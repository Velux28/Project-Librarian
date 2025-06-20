// Fill out your copyright notice in the Description page of Project Settings.


#include "ASlidingDoubleDoor.h"

void AASlidingDoubleDoor::BeginPlay()
{
	Super::BeginPlay();

	if (Door2OpeningCurve)
	{
		FOnTimelineVector TimelineCallback;
		//FOnTimelineEventStatic TimelineFinishedCallback;

		TimelineCallback.BindUFunction(this, FName("OpenDoor"));
		//TimelineFinishedCallback.BindUFunction(this, FName("CloseDoor"));

		DoorTimeline.AddInterpVector(Door2OpeningCurve, TimelineCallback);
		//DoorTimeline.SetTimelineFinishedFunc(TimelineFinishedCallback);
	}

}

void AASlidingDoubleDoor::OpenDoor()
{
	Super::OpenDoor();

	TimelineValue = DoorTimeline.GetPlaybackPosition();
	CurveValue = doorSpeed * Door2OpeningCurve->GetVectorValue(TimelineValue);

	Door2->SetRelativeLocation(CurveValue);
	//OpenDoorWithParams(Door2, Door2OpenPosition);
}

void AASlidingDoubleDoor::OpenDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorOpenPosition, FVector _Door2OpenPosition)
{
	OpenDoorWithParams(_Door2, _Door2OpenPosition);
	
	OpenDoorWithParams(_Door, _DoorOpenPosition);
}

void AASlidingDoubleDoor::CloseDoor()
{
	Super::CloseDoor();
	//CloseDoorWithParams(Door2, Door2ClosePosition);
}

void AASlidingDoubleDoor::CloseDoubleDoorWithParams(UStaticMeshComponent* _Door, UStaticMeshComponent* _Door2, FVector _DoorClosePosition, FVector _Door2ClosePosition)
{
	CloseDoorWithParams(_Door2, _Door2ClosePosition);
	
	CloseDoorWithParams(_Door, _DoorClosePosition);
}