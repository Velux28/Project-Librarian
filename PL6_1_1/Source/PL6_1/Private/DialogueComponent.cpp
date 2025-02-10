// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueComponent.h"
#include "..\Public\DialogueComponent.h"

// Sets default values for this component's properties
UDialogueComponent::UDialogueComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDialogueComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDialogueComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDialogueComponent::FillDialogue(TArray<FDialogue> Dialogues)
{
	DialogueList = Dialogues;
}

bool UDialogueComponent::AddDialogue(FDialogue _Dialogue)
{
	
	for (int i=0;i<DialogueList.Num();i++)
	{
		if (DialogueList[i].DialogueKey== _Dialogue.DialogueKey)
		{
			return false;
		}
	}
	DialogueList.Add(_Dialogue);
	return true;
}

FString UDialogueComponent::ShowDialogue(FString DialogueKey)
{
	if (DialogueKey.IsEmpty())
	{
		return DialogueList[0].DialogueText;
	}

	for (int i = 0; i < DialogueList.Num(); i++)
	{
		if (DialogueList[i].DialogueKey == DialogueKey)
		{
			return DialogueList[i].DialogueText;
		}
	}
	return TEXT("Dialogue not found");
}

FDialogue UDialogueComponent::GetDialogue(FString DialogueKey)
{
	if (DialogueKey.IsEmpty())
	{
		return DialogueList[0];
	}

	for (int i = 0; i < DialogueList.Num(); i++)
	{
		if (DialogueList[i].DialogueKey == DialogueKey)
		{
			return DialogueList[i];
		}
	}
	return DialogueList[0];
}

