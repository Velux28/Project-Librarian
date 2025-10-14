// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AISense.h"
#include "Perception/AISenseConfig.h"

ANPCAIController::ANPCAIController()
{
	if (AISense== nullptr)
	{
		AISense= CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception"));
		SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("sight"));
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
		AISense->SetDominantSense(SightConfig->GetSenseImplementation());
		AISense->ConfigureSense(*SightConfig);

		HearConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("hear"));
		HearConfig->DetectionByAffiliation.bDetectFriendlies = true;
		HearConfig->DetectionByAffiliation.bDetectEnemies = true;
		HearConfig->DetectionByAffiliation.bDetectNeutrals = true;
		AISense->ConfigureSense(*HearConfig);
	}
}

void ANPCAIController::BeginPlay()
{
	Super::BeginPlay();

	if (ControlledPawn == nullptr)
	{
		ControlledPawn = Cast<ANPCCharacter>(GetPawn());
	}

	if (ControlledPawn != nullptr)
	{
		SightPatrolConfig();
		HearPatrolConfig();
	}

	//UE_LOG(LogTemp, Warning, TEXT("%f"), ConfigSight->SightRadius);
}

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

		break;

	case EAIState::PlayerLost:

		break;

	default:
		break;
	}
}

void ANPCAIController::SetHearingSenseStatus(bool _NewStatus)
{
	AISense->SetSenseEnabled(UAISense_Hearing::StaticClass(), _NewStatus);
}

#pragma region SightConfig
void ANPCAIController::SightConfigWithParams(float _SightRadius, float _SightLostDelta, float _SightAngle)
{
	FAISenseID Id = UAISense::GetSenseID(UAISense_Sight::StaticClass());

	if (!Id.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Wrong Sense ID"));
		return;
	}
	SightConfig = Cast<UAISenseConfig_Sight>(AISense->GetSenseConfig(Id));
	if (SightConfig == nullptr)
	{
		SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("sight"));
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		AISense->ConfigureSense(*SightConfig);
	}


	SightConfig->SightRadius = _SightRadius;

	SightConfig->LoseSightRadius = _SightRadius + _SightLostDelta;
	SightConfig->PeripheralVisionAngleDegrees = _SightAngle;

	AISense->RequestStimuliListenerUpdate();
}

void ANPCAIController::SightPatrolConfig()
{
	SightConfigWithParams(ControlledPawn->SightPatrolRadius, ControlledPawn->SightPatrolLostRadiusDelta, ControlledPawn->SightPatrolHalfAngle);
}

void ANPCAIController::SightAlertConfig()
{
	SightConfigWithParams(ControlledPawn->SightAlertRadius, ControlledPawn->SightAlertLostRadiusDelta, ControlledPawn->SightAlertHalfAngle);
}

void ANPCAIController::SightHuntConfig()
{
	SightConfigWithParams(ControlledPawn->SightHuntRadius, ControlledPawn->SightHuntLostRadiusDelta, ControlledPawn->SightHuntHalfAngle);
}

void ANPCAIController::SightChaseConfig()
{
	SightConfigWithParams(ControlledPawn->SightChaseRadius, ControlledPawn->SightChaseLostRadiusDelta, ControlledPawn->SightChaseHalfAngle);
}

void ANPCAIController::SightPlayerLostConfig()
{
	SightConfigWithParams(ControlledPawn->SightPlayerLostRadius, ControlledPawn->SightPlayerLostLostRadiusDelta, ControlledPawn->SightPlayerLostHalfAngle);
}
#pragma endregion

#pragma region HearingConfig
void ANPCAIController::HearConfigWithParams(float _HearRadius)
{
	FAISenseID Id = UAISense::GetSenseID(UAISense_Hearing::StaticClass());

	if (!Id.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Wrong Sense ID"));
		return;
	}
	HearConfig = Cast<UAISenseConfig_Hearing>(AISense->GetSenseConfig(Id));
	if (HearConfig == nullptr)
	{
		HearConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("hear"));
		HearConfig->DetectionByAffiliation.bDetectFriendlies = true;
		HearConfig->DetectionByAffiliation.bDetectEnemies = true;
		HearConfig->DetectionByAffiliation.bDetectNeutrals = true;
		AISense->ConfigureSense(*HearConfig);
	}


	HearConfig->HearingRange = _HearRadius;
	AISense->RequestStimuliListenerUpdate();
}

void ANPCAIController::HearPatrolConfig()
{
	HearConfigWithParams(ControlledPawn->HearingPatrolRadius);
}

void ANPCAIController::HearAlertConfig()
{
	HearConfigWithParams(ControlledPawn->HearingAlertRadius);
}

void ANPCAIController::HearHuntConfig()
{
	HearConfigWithParams(ControlledPawn->HearingHuntRadius);
}
#pragma endregion

bool ANPCAIController::ActivateAlertScanner_Implementation()
{
	FAISenseID Id = UAISense::GetSenseID(UAISense_Sight::StaticClass());

	if (!Id.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Wrong Sense ID"));
		return false;
	}
	SightConfig = Cast<UAISenseConfig_Sight>(AISense->GetSenseConfig(Id));
	if (SightConfig == nullptr)
	{
		SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("sight"));
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;

		AISense->ConfigureSense(*SightConfig);
	}


	SightConfig->SightRadius = ControlledPawn->SightScanRadius;

	SightConfig->LoseSightRadius = ControlledPawn->SightScanRadius + ControlledPawn->SightScanLostRadiusDelta;
	SightConfig->PeripheralVisionAngleDegrees = ControlledPawn->SightScanHalfAngle;
	AISense->RequestStimuliListenerUpdate();

	return true;
}

bool ANPCAIController::ActivatePlayerLostScanner_Implementation()
{
	SightPlayerLostConfig();

	return true;
}

void ANPCAIController::HandleSight(AActor* _Actor, FAIStimulus _Stimulus)
{
	if (!Blackboard)
	{
		return;
	}
	//check if player ref is set
	if (_Actor != PlayerRef)
	{
		return;
	}

	//if the player is in sight radius
	if (_Stimulus.WasSuccessfullySensed())
	{
		UE_LOG(LogTemp, Warning, TEXT("SENSE"));
		//if the ai is in alert 
		if (CurrAIState == EAIState::Alert)
		{
			//deactivete scanner
			EnterChaseState(_Actor);
			return;
		}

		//if the blackboard value isn't set 
		if (!Blackboard->IsVectorValueSet(TEXT("TargetActor")))
		{
			//set the value and change color and speed
			EnterChaseState(_Actor);
			return;
		}
	}
	else 
	{
		//if the player is outside my sight radius, set his last location and change color and walk speed

		EnterPalyerLostState(_Stimulus.StimulusLocation);
		UE_LOG(LogTemp, Warning, TEXT("NOT SENSE"));


		//TODO:
		//enable earsense
		//reduce/disable sight
	}
}



void ANPCAIController::HandleHear(FAIStimulus _Stimulus)
{

	if (!Blackboard)
	{
		return;
	}
		

	if (_Stimulus.Tag == TEXT("Human"))
	{
		//Blackboard->ClearValue(TEXT("SoundType"));
		HandleHearHumanSound(_Stimulus.StimulusLocation);
	}
	else if (_Stimulus.Tag == TEXT("Non-Human"))
	{
		HandleHearNonHumanSound(_Stimulus.StimulusLocation);
	}

	Blackboard->SetValueAsName(TEXT("SoundType"), _Stimulus.Tag);
}

void ANPCAIController::HandleHearHumanSound(FVector StepPosition)
{

	if (CurrAIState != EAIState::PlayerLost && CurrAIState != EAIState::Chase)
	{
		EnterHuntState(StepPosition);
	}
}

void ANPCAIController::HandleHearNonHumanSound(FVector _TargetLocation)
{
	if (CurrAIState != EAIState::Alert)
	{
		EnterAlertState(_TargetLocation);
	}	
}

void ANPCAIController::ChosePatrolLocation(FVector& PatrolPosition)
{
	if (!ControlledPawn || !PlayerRef)
	{
		return;
	}
	//FVector PlayerPos = FVector::Zero();
	//ControlledPawn->ChosePatrolLocation(PlayerRef->GetActorLocation());
	PatrolPosition = ControlledPawn->ChosePatrolLocation(PlayerRef->GetActorLocation());
}

void ANPCAIController::EnterPatrolState_Implementation()
{
	CurrAIState = EAIState::Patrol;

	SetHearingSenseStatus(true);

	ControlledPawn->CurrPlayerMaxRadius = ControlledPawn->MovementPatrolRadius;
	ControlledPawn->SetWalkSpeed(ControlledPawn->MovementPatrolSpeed);

	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Patrol"));
	ControlledPawn->ChangeMaterial(TEXT("Patrol"));

	Blackboard->ClearValue(TEXT("SoundType"));
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("TargetActor"));
	Blackboard->ClearValue(TEXT("TargetLocation"));

	SightPatrolConfig();
	HearPatrolConfig();

	Blackboard->SetValueAsFloat(TEXT("PatrolWaitTime"), ControlledPawn->MovementPatrolWaitTimer);

}

void ANPCAIController::EnterAlertState_Implementation(FVector _TargetLocation)
{
	CurrAIState = EAIState::Alert;

	SetHearingSenseStatus(true);

	ControlledPawn->SetWalkSpeed(ControlledPawn->MovementAlertSpeed);

	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Alert"));
	ControlledPawn->ChangeMaterial(TEXT("Alert"));

	Blackboard->SetValueAsVector(TEXT("TargetLocation"), _TargetLocation);
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("TargetActor"));
	Blackboard->ClearValue(TEXT("CurrPatrolPos"));

	SightAlertConfig();
	HearAlertConfig();

}

void ANPCAIController::EnterHuntState_Implementation(FVector StepPosition)
{
	CurrAIState = EAIState::Hunt;

	SetHearingSenseStatus(true);

	ControlledPawn->SetWalkSpeed(ControlledPawn->MovementHuntSpeed);

	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Hunt"));
	ControlledPawn->ChangeMaterial(TEXT("Hunt"));

	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("TargetActor"));
	Blackboard->ClearValue(TEXT("TargetLocation"));

	SightHuntConfig();
	HearHuntConfig();

	Blackboard->SetValueAsFloat(TEXT("PatrolWaitTime"), ControlledPawn->MovementHuntWaitTimer);
	Blackboard->SetValueAsVector(TEXT("CurrPatrolPos"), StepPosition);
}

void ANPCAIController::EnterChaseState_Implementation(UObject* _TargetActor)
{
	CurrAIState = EAIState::Chase;

	SetHearingSenseStatus(false);

	ControlledPawn->SetWalkSpeed(ControlledPawn->MovementChaseSpeed);

	ControlledPawn->ChangeMaterial(TEXT("Chase"));
	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Chase"));

	Blackboard->SetValueAsObject(TEXT("TargetActor"), _TargetActor);
	Blackboard->ClearValue(TEXT("CurrPatrolPos"));
	Blackboard->ClearValue(TEXT("TargetLocation"));
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("SoundType"));

	SightChaseConfig();

}

void ANPCAIController::EnterPalyerLostState_Implementation	(FVector _LastKnownLocation)
{
	CurrAIState = EAIState::PlayerLost;

	SetHearingSenseStatus(false);

	ControlledPawn->SetWalkSpeed(ControlledPawn->MovementPlayerLostSpeed);
	ControlledPawn->ChangeMaterial(TEXT("Lost"));

	Blackboard->SetValueAsVector(TEXT("LastKnownLocation"), _LastKnownLocation);
	Blackboard->ClearValue(TEXT("CurrPatrolPos"));
	Blackboard->ClearValue(TEXT("TargetLocation"));
	Blackboard->ClearValue(TEXT("SoundType"));
	Blackboard->ClearValue(TEXT("TargetActor"));
}



//void ANPCAIController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
//{
//}
