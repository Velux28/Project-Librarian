// Fill out your copyright notice in the Description page of Project Settings.


#include "Dialogue.h"

FString UDialogue::GetDialogueKey()
{
	return DialogueKey;
}

FString UDialogue::GetDialogue()
{
	return DialogueText;
}

bool UDialogue::GetNextDialogueIsPlayer()
{
	return bNextDialogueIsPlayer;
}

float UDialogue::GetDialogueDuration()
{
	return DialogueDuration;
}
