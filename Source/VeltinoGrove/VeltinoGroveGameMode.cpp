// Copyright Epic Games, Inc. All Rights Reserved.

#include "VeltinoGroveGameMode.h"
#include "VeltinoGroveCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVeltinoGroveGameMode::AVeltinoGroveGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
