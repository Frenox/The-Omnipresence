	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Misc/OutPutDeviceNull.h"

#include "C_Player.generated.h"

UCLASS()
class THE_OMNIPRESENCE_API AC_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AC_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool isInventoryOpen;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* MeshPlayer;

	UPROPERTY(EditAnywhere, Category = "Inventory")
		AActor * inventoryManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Inventory")
		TMap<FString, bool> itemsCollected;

private:
	UPROPERTY(EditAnywhere, Category = "BlueprintClass")
		AActor* hitActor;

	void MoveForward(float value);
	void MoveRight(float value);

	void TurnAtRate(float value);
	void LookUpAtRate(float value);

	void Sprint();
	void StopSprinting();

	void ToggleCrouch();

	void Interact();
	void InventoryToggle();

	bool isSprinting;
	bool isCrouching;
};
