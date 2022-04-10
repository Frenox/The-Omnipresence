// Copyright Epic Games, Inc. All Rights Reserved.

#include "The_OmnipresenceGameMode.h"
#include "The_OmnipresenceHUD.h"
#include "The_OmnipresenceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThe_OmnipresenceGameMode::AThe_OmnipresenceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AThe_OmnipresenceHUD::StaticClass();
}
