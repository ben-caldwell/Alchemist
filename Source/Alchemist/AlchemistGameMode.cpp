// Copyright Epic Games, Inc. All Rights Reserved.

#include "AlchemistGameMode.h"
#include "AlchemistHUD.h"
#include "AlchemistCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlchemistGameMode::AAlchemistGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAlchemistHUD::StaticClass();
}
