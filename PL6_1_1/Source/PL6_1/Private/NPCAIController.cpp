// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

void ANPCAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	switch (CurrAIState)
	{
	case EAIState::Patrol:

		break;

	case EAIState::Alert:

		break; 

	case EAIState::Chase:

			break;

	case EAIState::Hunt:
		ControlledPawn->CurrHuntTimer -= DeltaTime;

		if (ControlledPawn->CurrHuntTimer <= 0)
		{
			Blackboard->ClearValue(TEXT("SoundType"));
			EnterPatrolState();
		}

		break;

	case EAIState::PlayerLost:

		break;

	default:
		break;
	}
}

void ANPCAIController::HandleSight(AActor* _Actor, FAIStimulus _Stimulus)
{
	
	//check if player ref is set
	if (_Actor != PlayerRef)
	{
		return;
	}
	//if the player is in sight radius
	if (_Stimulus.WasSuccessfullySensed())
	{
		//if the ai is in alert 
		if (CurrAIState == EAIState::Alert)
		{
			//endScanning
		}

		//if the blackboard value isn't set 
		if (!Blackboard->IsVectorValueSet(TEXT("TargetActor")))
		{
			//set the value and change color and speed
			Blackboard->SetValueAsObject(TEXT("TargetActor"), _Actor);
			EnterChaseState();

		}
	}
	else 
	{
		//if the player is outside my sight radius, set his last location and change color and walk speed
		Blackboard->ClearValue(TEXT("TargetActor"));
		Blackboard->SetValueAsVector(TEXT("LastKnownLocation"), _Stimulus.StimulusLocation);

		EnterPalyerLostState();

		//TODO:
		//enable earsense
		//reduce/disable sight
	}
}



void ANPCAIController::HandleHear(FAIStimulus _Stimulus)
{
	Blackboard->SetValueAsVector(TEXT("LastKnownLocation"), _Stimulus.StimulusLocation);
	Blackboard->SetValueAsName(TEXT("SoundType"), _Stimulus.Tag);

	if (_Stimulus.Tag == TEXT("Human"))
	{
		HandleHearHumanSound();
	}
	else if (_Stimulus.Tag == TEXT("Non-Human"))
	{
		HandleHearNonHumanSound();
	}
}

void ANPCAIController::HandleHearHumanSound()
{
	if (CurrAIState != EAIState::PlayerLost && CurrAIState != EAIState::Chase && CurrAIState != EAIState::Hunt)
	{
		EnterHuntState();
	}
}

void ANPCAIController::HandleHearNonHumanSound()
{
	if (CurrAIState != EAIState::Alert)
	{
		EnterAlertState();
	}	
}

void ANPCAIController::ChosePatrolLocation(FVector& PatrolPosition)
{
	FVector PlayerPos = FVector::Zero();
	ControlledPawn->ChosePatrolLocation(PlayerRef->GetActorLocation());
	PatrolPosition = ControlledPawn->ChosePatrolLocation(PlayerRef->GetActorLocation());
}

void ANPCAIController::EnterPatrolState()
{
	CurrAIState = EAIState::Patrol;
	ControlledPawn->CurrPlayerMaxRadius = ControlledPawn->PatrolRadius;
	ControlledPawn->SetWalkSpeed(ControlledPawn->WalkingSpeed);
	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Patrol"));
	ControlledPawn->ChangeMaterial(TEXT("Patrol")); 
	Blackboard->ClearValue(TEXT("SoundType"));
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("TargetActor"));
	Blackboard->ClearValue(TEXT("TargetLocation"));
}

void ANPCAIController::EnterAlertState()
{
	CurrAIState = EAIState::Alert;
	ControlledPawn->SetWalkSpeed(ControlledPawn->WalkingSpeed);
	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Alert"));
	ControlledPawn->ChangeMaterial(TEXT("Alert"));
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("TargetActor"));
	Blackboard->ClearValue(TEXT("CurrPatrolPos"));

}

void ANPCAIController::EnterHuntState()
{
	CurrAIState = EAIState::Hunt;
	ControlledPawn->CurrHuntTimer = ControlledPawn->HuntingResetTimer;
	ControlledPawn->CurrPlayerMaxRadius = ControlledPawn->HuntingRadius;
	ControlledPawn->SetWalkSpeed(ControlledPawn->WalkingSpeed);
	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Hunt"));
	ControlledPawn->ChangeMaterial(TEXT("Alert"));
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("TargetActor"));
	Blackboard->ClearValue(TEXT("TargetLocation"));
}

void ANPCAIController::EnterChaseState()
{
	CurrAIState = EAIState::Chase;

	ControlledPawn->SetWalkSpeed(ControlledPawn->ChasingSpeed);
	ControlledPawn->ChangeMaterial(TEXT("Chase"));
	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Chase"));
	Blackboard->ClearValue(TEXT("CurrPatrolPos"));
	Blackboard->ClearValue(TEXT("TargetLocation"));
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("SoundType"));
}

void ANPCAIController::EnterPalyerLostState()
{
	CurrAIState = EAIState::PlayerLost;

	ControlledPawn->SetWalkSpeed(ControlledPawn->WalkingSpeed);
	ControlledPawn->ChangeMaterial(TEXT("Chase"));
	Blackboard->ClearValue(TEXT("CurrPatrolPos"));
	Blackboard->ClearValue(TEXT("TargetLocation"));
	Blackboard->ClearValue(TEXT("SoundType"));
	Blackboard->ClearValue(TEXT("TargetActor"));

}



//void ANPCAIController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
//{
//}
