// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCAIController.h"
#include "BehaviorTree/BlackboardComponent.h"

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
		//if the ai is in alert i
		if (CurrAIState == EAIState::Alert)
		{
			//endScanning
		}

		//if the blackboard value isn't set 
		if (!Blackboard->IsVectorValueSet(TEXT("TargetActor")))
		{
			//set the value and change color and speed
			Blackboard->SetValueAsObject(TEXT("TargetActor"), _Actor);
			CurrAIState = EAIState::Chase;

			ControlledPawn->SetWalkSpeed(ControlledPawn->ChasingSpeed);
			ControlledPawn->ChangeMaterial(0, nullptr);

		}
	}
	else 
	{
		//if the player is outside my sight radius, set his last location and change color and walk speed
		Blackboard->ClearValue(TEXT("TargetActor"));
		Blackboard->SetValueAsVector(TEXT("LastKnownLocation"), _Stimulus.StimulusLocation);
		/*GetBlackboardComponent()->ClearValue(TEXT("TargetActor"));
		GetBlackboardComponent()->SetValueAsVector(TEXT("LastKnownLocation"), _Stimulus.StimulusLocation);*/
		CurrAIState = EAIState::PlayerLost;

		ControlledPawn->SetWalkSpeed(ControlledPawn->WalkingSpeed);
		ControlledPawn->ChangeMaterial(0, nullptr);

		//TODO:
		//enable earsense
		//reduce/disable sight
		//set chase variable
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

	ControlledPawn->ChangeMaterial(0, nullptr);
}

void ANPCAIController::HandleHearHumanSound()
{
	if (CurrAIState != EAIState::PlayerLost && CurrAIState != EAIState::Chase && CurrAIState != EAIState::Hunt)
	{
		CurrAIState = EAIState::Hunt;
		ControlledPawn->CurrHuntTimer = ControlledPawn->HuntingResetTimer;
		ControlledPawn->CurrPlayerMaxRadius = ControlledPawn->HuntingRadius;
		//playsound
	}
}

void ANPCAIController::HandleHearNonHumanSound()
{
	if (CurrAIState != EAIState::Alert)
	{
		//playsound	
	}	
	CurrAIState = EAIState::Alert;
}

void ANPCAIController::ChosePatrolLocation(FVector& PatrolPosition)
{
}

//void ANPCAIController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
//{
//}
