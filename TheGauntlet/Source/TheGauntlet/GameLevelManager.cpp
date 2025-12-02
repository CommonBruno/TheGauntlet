// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLevelManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UGameLevelManager::LoadLevel(FName LevelName)
{
    if (!LevelName.IsNone())
    {
        UGameplayStatics::OpenLevel(GetWorld(), LevelName);
    }
}

void UGameLevelManager::QuitGame()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
}

