// Copyright Epic Games, Inc. All Rights Reserved.

#include "DataStructureGameMode.h"
#include "DataStructureCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADataStructureGameMode::ADataStructureGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
