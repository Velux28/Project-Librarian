// Fill out your copyright notice in the Description page of Project Settings.


#include "ASlidingDoor.h"

// Sets default values
AASlidingDoor::AASlidingDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bIsDoorOpen = false;
	bIsDoorReady = true;
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
		TimelineFinishedCallback.BindUFunction(this, FName("CloseDoor"));

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

// Function for opening the door
void AASlidingDoor::OpenDoor()
{
	TimelineValue = DoorTimeline.GetPlaybackPosition();
	CurveValue = doorSpeed * DoorOpeningCurve->GetVectorValue(TimelineValue);

	Door->SetRelativeLocation(CurveValue);

	//OpenDoorWithParams(Door, DoorOpenPosition);
}

void AASlidingDoor::OpenDoorWithParams(UStaticMeshComponent* _Door, FVector _DoorOpenPosition)
{
	//if the door is null skip this part
	if (!_Door)
	{
		bIsDoorOpening = false;
		return;
	}
	//Get the direction where the door is opening
	FVector direction = _DoorOpenPosition - _Door->GetRelativeLocation();
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
	_Door->SetRelativeLocation(FMath::Lerp(_Door->GetRelativeLocation(), _DoorOpenPosition, FVector::One() * doorSpeed * GetWorld()->GetDeltaSeconds()));
	//bIsDoorOpening = true;
}

// Function for opening the door
void AASlidingDoor::CloseDoor()
{
	if (bIsDoorOpen)
	{
		bIsDoorOpen = false;
		DoorTimeline.Reverse();
	}
	else 
	{
		bIsDoorReady = true;
	}


	//CloseDoorWithParams(Door, DoorClosePosition);
}

void AASlidingDoor::CloseDoorWithParams(UStaticMeshComponent* _Door, FVector _DoorClosePosition)
{
	//if the door is null skip this part
	if (!_Door)
	{
		bIsDoorClosing = false;
		return;
	}
	//Get the direction where the door is opening
	FVector direction = _DoorClosePosition - _Door->GetRelativeLocation();
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
	_Door->SetRelativeLocation(FMath::Lerp(_Door->GetRelativeLocation(), _DoorClosePosition, FVector::One() * doorSpeed * GetWorld()->GetDeltaSeconds()));
	//bIsDoorClosing = true;
}

bool AASlidingDoor::TryOpenDoor()
{
	if (bIsDoorReady)
	{
		bIsDoorReady = false;
		bIsDoorOpen = true;
		DoorTimeline.PlayFromStart();
		return true;
	}
	return false;
}
