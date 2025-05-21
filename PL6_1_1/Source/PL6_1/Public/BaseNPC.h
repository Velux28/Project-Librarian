// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Dialogue.h"
#include "DialogueComponent.h"
#include "GameFramework/Actor.h"
#include "BaseNPC.generated.h"

UCLASS()
class PL6_1_API ABaseNPC : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseNPC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Dialogue")
	FString ActorName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FString DialogueKey;
	UPROPERTY(EditAnywhere, Category = "Dialogue")
	FString NextInteractionDialogueKey;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	FDialogue CurrNPCDialogue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dialogue")
	UDialogueComponent* NPCDialogues;


public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Dialogue")
	FDialogue SetDialogue(const FString& _DialogueKey);
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
		void SetNextInteractionDialogueKey(const FString& _DialogueKey);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Dialogue")
		void SkipDialogue();

};
