// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameLevelManager.generated.h"

/**
 * 
 */
UCLASS()
class THEGAUNTLET_API UGameLevelManager : public UGameInstance
{
    GENERATED_BODY()

public:
    // Load a level by name
    UFUNCTION(BlueprintCallable, Category = "Level Management")
    void LoadLevel(FName LevelName);

    // Quit the game
    UFUNCTION(BlueprintCallable, Category = "Level Management")
    void QuitGame();
};
