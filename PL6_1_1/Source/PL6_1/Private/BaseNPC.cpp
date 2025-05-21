// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseNPC.h"
#include "..\Public\BaseNPC.h"

// Sets default values
ABaseNPC::ABaseNPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (ActorName.IsEmpty())
	{
		ActorName = "Set actor name in editor";
	}

	if (!NPCDialogues)
	{
		NPCDialogues = CreateDefaultSubobject<UDialogueComponent>(TEXT("NPC Dialogue"));
	}
}

// Called when the game starts or when spawned
void ABaseNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseNPC::SetNextInteractionDialogueKey(const FString& _DialogueKey)
{
	if (!NextInteractionDialogueKey.IsEmpty())
	{
		DialogueKey = NextInteractionDialogueKey;
	}

	if (!_DialogueKey.IsEmpty())
	{
		NextInteractionDialogueKey = _DialogueKey;
	}
}

FDialogue ABaseNPC::SetDialogue_Implementation(const FString& _DialogueKey)
{
	CurrNPCDialogue = NPCDialogues->GetDialogue(_DialogueKey);
	return CurrNPCDialogue;
}