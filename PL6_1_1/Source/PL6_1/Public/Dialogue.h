// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Object.h"
#include "Dialogue.generated.h"
/**
 * 
 */
UCLASS()
class PL6_1_API UDialogue :: public UObject
{
//public:
//	UDialogue();
//	~UDialogue();

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FString DialogueKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FString DialogueText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	bool bNextDialogueIsPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
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
