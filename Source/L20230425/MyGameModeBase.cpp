// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "MyPlayerController.h"
#include "MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	static ConstructorHelpers::FClassFinder<AMyPawn> MyPawnClass(TEXT("Blueprint'/Game/Blueprints/BP_MyPawn.BP_MyPawn_C'"));
	if (MyPawnClass.Succeeded())
	{
		DefaultPawnClass = MyPawnClass.Class;
	}
	else
	{
		DefaultPawnClass = AMyPawn::StaticClass();
	}
	
	PlayerControllerClass = AMyPlayerController::StaticClass();
}