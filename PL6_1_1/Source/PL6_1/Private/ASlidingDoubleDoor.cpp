// Fill out your copyright notice in the Description page of Project Settings.


#include "ASlidingDoubleDoor.h"

void AASlidingDoubleDoor::BeginPlay()
{
	Super::BeginPlay();

	if (Door2OpeningCurve)
	{
		//add the second curve to the timeline
		FOnTimelineVector TimelineCallback;

		TimelineCallback.BindUFunction(this, FName("OpenDoor"));

		DoorTimeline.AddInterpVector(Door2OpeningCurve, TimelineCallback);
	}

}

void AASlidingDoubleDoor::OpenDoor()
{
	Super::OpenDoor();

	//based on the value of the timeline, get the value and change second door location
	TimelineValue = DoorTimeline.GetPlaybackPosition();
	CurveValue = Door2OpeningCurve->GetVectorValue(TimelineValue);

	Door2->SetRelativeLocation(CurveValue);
}