// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectCFTUDGameMode.h"
#include "ProjectCFTUDCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectCFTUDGameMode::AProjectCFTUDGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}
