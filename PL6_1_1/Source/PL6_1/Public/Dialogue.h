// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dialogue.generated.h"

USTRUCT(BlueprintType)
struct PL6_1_API FDialogue 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
		FString DialogueKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
		FString NextDialogueKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
		FString DialogueText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
		bool bNextDialogueIsPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
		float DialogueDuration;

	FDialogue()
	{
		DialogueKey = "";
		NextDialogueKey = "";
		DialogueText = "";
		bNextDialogueIsPlayer = true;
		DialogueDuration = 0;
	}
};
