// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AThrowable.h"
#include "SaveGameFile.generated.h"

/**
 * 
 */
UCLASS()
class PL6_1_API USaveGameFile : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Player")
	FTransform PlayerTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	bool HasPowerCell;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Envirorment")
	bool IsFinishAssembly;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player")
	bool HasScrewdriver;

	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	FName CurrSection; 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
	FName CurrMap;
};
