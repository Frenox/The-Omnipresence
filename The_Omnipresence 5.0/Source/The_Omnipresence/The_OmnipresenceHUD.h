// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "The_OmnipresenceHUD.generated.h"

UCLASS()
class AThe_OmnipresenceHUD : public AHUD
{
	GENERATED_BODY()

public:
	AThe_OmnipresenceHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

