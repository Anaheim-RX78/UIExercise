// Copyright Epic Games, Inc. All Rights Reserved.

#include "UIExerciseGameMode.h"
#include "UIExerciseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUIExerciseGameMode::AUIExerciseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
