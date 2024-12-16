// Fill out your copyright notice in the Description page of Project Settings.


#include "BreathWidget.h"
#include "..\Public\BreathWidget.h"
#include "..\Public\BreathWidget.h"



void UBreathWidget::SetBreathPerc(float _NewPerc)
{
	if (_NewPerc > 0 && _NewPerc < 1)
	{
		//UE_LOG(LogTemp, Warning, TEXT(_NewPerc));
		BreathBar->SetPercent(_NewPerc);
	}
	UE_LOG(LogTemp, Warning, TEXT("%f"), _NewPerc);
}
