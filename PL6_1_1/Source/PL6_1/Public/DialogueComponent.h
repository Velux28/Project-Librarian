// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Dialogue.h"
#include "DialogueComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PL6_1_API UDialogueComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDialogueComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	void FillDialogue(TArray<FDialogue> Dialogues);
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	bool AddDialogue(FDialogue _Dialogue);

	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	FString ShowDialogue(FString DialogueKey);
	UFUNCTION(BlueprintCallable, Category = "Dialogue")
	FDialogue GetDialogue(FString DialogueKey);

private:
	UPROPERTY(EditAnywhere, Category = "Dialogue")
	TArray<FDialogue> DialogueList;


		
};
