// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ProgressBar.h"
#include "Blueprint/UserWidget.h"
#include "BreathWidget.generated.h"

/**
 * 
 */
UCLASS()
class PL6_1_API UBreathWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UProgressBar* BreathBar;

public:

	UFUNCTION(BlueprintCallable, Category = "Breath")
	virtual void SetBreathPerc(float _NewPerc);
	
};
