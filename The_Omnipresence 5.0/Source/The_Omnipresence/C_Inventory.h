// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class THE_OMNIPRESENCE_API C_Inventory
{
public:
	C_Inventory();
	~C_Inventory();

	TMap<FString, bool> itemsCollected;
};
