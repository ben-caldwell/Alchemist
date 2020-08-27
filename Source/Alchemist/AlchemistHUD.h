// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AlchemistHUD.generated.h"

UCLASS()
class AAlchemistHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAlchemistHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

