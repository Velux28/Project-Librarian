// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AISenseConfig.h"
#include "Perception/AISense.h"
#include "Perception/AISenseConfig.h"

ANPCAIController::ANPCAIController()
{
	if (AISight== nullptr)
	{
		AISight = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception Sight"));
		SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("sight"));
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
		AISight->SetDominantSense(SightConfig->GetSenseImplementation());
		AISight->ConfigureSense(*SightConfig);
	}

	if (AIHearing == nullptr)
	{
		AIHearing = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception Hear"));
		HearConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("hear"));
		HearConfig->DetectionByAffiliation.bDetectFriendlies = true;
		HearConfig->DetectionByAffiliation.bDetectEnemies = true;
		HearConfig->DetectionByAffiliation.bDetectNeutrals = true;
		AIHearing->SetDominantSense(HearConfig->GetSenseImplementation());
		AIHearing->ConfigureSense(*HearConfig);
	}
}

void ANPCAIController::BeginPlay()
{
	Super::BeginPlay();

	if (ControlledPawn == nullptr)
	{
		ControlledPawn = Cast<ANPCCharacter>(GetPawn());
	}

	SightConfiguration();
	HearConfiguration();

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
		ControlledPawn->CurrHuntTimer -= DeltaTime;

		if (ControlledPawn->CurrHuntTimer <= 0)
		{
			EnterPatrolState();
		}

		break;

	case EAIState::PlayerLost:

		break;

	default:
		break;
	}
}

void ANPCAIController::SightConfiguration()
{
	FAISenseID Id = UAISense::GetSenseID(UAISense_Sight::StaticClass());

	if (!Id.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Wrong Sense ID"));
		return;
	}
	SightConfig = Cast<UAISenseConfig_Sight>(AISight->GetSenseConfig(Id));
	if (SightConfig == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No sight"));
		return;
	}


	SightConfig->SightRadius = ControlledPawn->SightRadius;

	SightConfig->LoseSightRadius = ControlledPawn->SightRadius + ControlledPawn->SightLostRadiusDelta;
	SightConfig->PeripheralVisionAngleDegrees = ControlledPawn->SightHalfAngle;
	AISight->RequestStimuliListenerUpdate();
}

void ANPCAIController::HearConfiguration()
{
	FAISenseID Id = UAISense::GetSenseID(UAISense_Hearing::StaticClass());

	if (!Id.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Wrong Sense ID"));
		return;
	}
	HearConfig = Cast<UAISenseConfig_Hearing>(AIHearing->GetSenseConfig(Id));
	if (HearConfig == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("No hear"));
		return;
	}


	HearConfig->HearingRange = ControlledPawn->HearingRadius;
	AIHearing->RequestStimuliListenerUpdate();
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
	Blackboard->SetValueAsName(TEXT("SoundType"), _Stimulus.Tag);

	if (_Stimulus.Tag == TEXT("Human"))
	{
		HandleHearHumanSound();
	}
	else if (_Stimulus.Tag == TEXT("Non-Human"))
	{
		HandleHearNonHumanSound(_Stimulus.StimulusLocation);
	}
}

void ANPCAIController::HandleHearHumanSound()
{
	if (CurrAIState != EAIState::PlayerLost && CurrAIState != EAIState::Chase && CurrAIState != EAIState::Hunt)
	{
		EnterHuntState();
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

	UE_LOG(LogTemp, Warning, TEXT("Patrol"));
}

void ANPCAIController::EnterAlertState(FVector _TargetLocation)
{
	CurrAIState = EAIState::Alert;

	ControlledPawn->SetWalkSpeed(ControlledPawn->WalkingSpeed);
	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Alert"));
	ControlledPawn->ChangeMaterial(TEXT("Alert"));

	Blackboard->SetValueAsVector(TEXT("TargetLocation"), _TargetLocation);

	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("TargetActor"));
	Blackboard->ClearValue(TEXT("CurrPatrolPos"));

	UE_LOG(LogTemp, Warning, TEXT("sound loc  %d, %d, %d"), _TargetLocation.X, _TargetLocation.Y, _TargetLocation.Z);
}

void ANPCAIController::EnterHuntState()
{
	CurrAIState = EAIState::Hunt;
	ControlledPawn->CurrHuntTimer = ControlledPawn->HuntingResetTimer;
	ControlledPawn->CurrPlayerMaxRadius = ControlledPawn->HuntingRadius;
	ControlledPawn->SetWalkSpeed(ControlledPawn->WalkingSpeed);
	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Hunt"));
	ControlledPawn->ChangeMaterial(TEXT("Hunt"));
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("TargetActor"));
	Blackboard->ClearValue(TEXT("TargetLocation"));

	UE_LOG(LogTemp, Warning, TEXT("Hunt"));
}

void ANPCAIController::EnterChaseState(UObject* _TargetActor)
{
	CurrAIState = EAIState::Chase;

	ControlledPawn->SetWalkSpeed(ControlledPawn->ChasingSpeed);
	ControlledPawn->ChangeMaterial(TEXT("Chase"));
	ControlledPawn->SoundComp->PlaySoundByName(TEXT("Chase"));

	Blackboard->SetValueAsObject(TEXT("TargetActor"), _TargetActor);
	Blackboard->ClearValue(TEXT("CurrPatrolPos"));
	Blackboard->ClearValue(TEXT("TargetLocation"));
	Blackboard->ClearValue(TEXT("LastKnownLocation"));
	Blackboard->ClearValue(TEXT("SoundType"));

	UE_LOG(LogTemp, Warning, TEXT("Chase"));
}

void ANPCAIController::EnterPalyerLostState(FVector _LastKnownLocation)
{
	CurrAIState = EAIState::PlayerLost;

	ControlledPawn->SetWalkSpeed(ControlledPawn->WalkingSpeed);
	ControlledPawn->ChangeMaterial(TEXT("Lost"));

	Blackboard->SetValueAsVector(TEXT("LastKnownLocation"), _LastKnownLocation);

	Blackboard->ClearValue(TEXT("CurrPatrolPos"));
	Blackboard->ClearValue(TEXT("TargetLocation"));
	Blackboard->ClearValue(TEXT("SoundType"));
	Blackboard->ClearValue(TEXT("TargetActor"));

	UE_LOG(LogTemp, Warning, TEXT("PalyerLost"));

}



//void ANPCAIController::OnTargetDetected(AActor* Actor, FAIStimulus const Stimulus)
//{
//}
