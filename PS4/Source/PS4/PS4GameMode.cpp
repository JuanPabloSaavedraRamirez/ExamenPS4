// Copyright Epic Games, Inc. All Rights Reserved.

#include "PS4GameMode.h"
#include "PS4Character.h"
#include "UObject/ConstructorHelpers.h"

APS4GameMode::APS4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
