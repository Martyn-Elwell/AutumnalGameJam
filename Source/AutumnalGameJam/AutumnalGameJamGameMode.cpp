// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutumnalGameJamGameMode.h"
#include "AutumnalGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAutumnalGameJamGameMode::AAutumnalGameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
