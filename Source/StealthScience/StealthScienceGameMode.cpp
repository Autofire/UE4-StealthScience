// Copyright Epic Games, Inc. All Rights Reserved.

#include "StealthScienceGameMode.h"
#include "StealthScienceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStealthScienceGameMode::AStealthScienceGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
