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

	void MoveForward(float value);
	void MoveRight(float value);

	void TurnAtRate(float value);
	void LookUpAtRate(float value);

	void Sprint();
	void StopSprinting();
	bool isSprinting;

	void LeftClick();

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* MeshPlayer;

private:
	UPROPERTY(EditAnywhere, Category = "BlueprintClass")
		AActor* doorBP;
};
