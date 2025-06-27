// Fill out your copyright notice in the Description page of Project Settings.


#include "ASlidingDoor.h"

// Sets default values
AASlidingDoor::AASlidingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//the door start closed and ready to be open
	bIsReady = true;
	bIsDoorOpen = false;
	bIsPlayerInTrigger = false;
}

// Called when the game starts or when spawned
void AASlidingDoor::BeginPlay()
{
	Super::BeginPlay();

	if (DoorOpeningCurve)
	{
		//Setup Timeline update event and finish event
		FOnTimelineVector TimelineCallback;
		FOnTimelineEventStatic TimelineFinishedCallback;

		TimelineCallback.BindUFunction(this, FName("OpenDoor"));
		TimelineFinishedCallback.BindUFunction(this, FName("TimelineEnd"));

		DoorTimeline.AddInterpVector(DoorOpeningCurve, TimelineCallback);
		DoorTimeline.SetTimelineFinishedFunc(TimelineFinishedCallback);
	}
	
}

// Called every frame
void AASlidingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	DoorTimeline.TickTimeline(DeltaTime);
}

void AASlidingDoor::OpenDoor()
{
	//based on the value of the timeline, get the value and change door location
	TimelineValue = DoorTimeline.GetPlaybackPosition();
	CurveValue = DoorOpeningCurve->GetVectorValue(TimelineValue);

	Door->SetRelativeLocation(CurveValue);
}

void AASlidingDoor::TimelineEnd()
{
	bIsDoorOpen = !bIsDoorOpen;
	CloseDoor();
	if (!bIsDoorOpen)
	{
		bIsReady = true;
	}
}

void AASlidingDoor::CloseDoor()
{
	//close door only when player is out trigger
	if (bIsPlayerInTrigger)
	{
		return;
	}
	//bIsDoorOpen = !bIsDoorOpen;
	//if door is open, start closing process
	if (bIsDoorOpen)
	{
		//reverse timeline
		DoorTimeline.Reverse();
	}
}

bool AASlidingDoor::TryOpenDoor()
{
	if (bIsReady || bIsPlayerInTrigger)
	{
		bIsReady = false;
		bIsDoorOpen = false;
		//open the door only if is fully closed and rady to be open
		//bIsDoorOpen = true;
		//DoorTimeline.PlayFromStart();
		DoorTimeline.Play();
		return true;
	}
	return false;
}
