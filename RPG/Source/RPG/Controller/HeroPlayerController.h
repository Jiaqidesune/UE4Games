// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HeroPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class RPG_API AHeroPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AHeroPlayerController(const class FObjectInitializer& InitializerObject);

	void ShowHeroDebug();

public:
	UPROPERTY(EditAnywhere, Category = "Player|Debug")
	TSubclassOf<class UUserWidget> HeroDebugMenu;

	class UUserWidget* HeroDebugMenuWidget;
};
