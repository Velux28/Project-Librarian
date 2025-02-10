// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dialogue.generated.h"

UCLASS()
class PL6_1_API UDialogue : public UObject
{
	GENERATED_BODY()

private:

	UPROPERTY(EditAnywhere, Category = "Dialogue")
		FString DialogueKey;
	UPROPERTY(EditAnywhere, Category = "Dialogue")
		FString DialogueText;
	UPROPERTY(EditAnywhere, Category = "Dialogue")
		bool bNextDialogueIsPlayer;
	UPROPERTY(EditAnywhere, Category = "Dialogue")
		float DialogueDuration;

public:
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
		FString GetDialogueKey();
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
		FString GetDialogue();
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
		bool GetNextDialogueIsPlayer();
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
		float GetDialogueDuration();
};
