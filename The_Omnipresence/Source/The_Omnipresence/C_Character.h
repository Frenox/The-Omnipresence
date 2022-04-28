// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "C_Character.generated.h"

UCLASS()
class THE_OMNIPRESENCE_API AC_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AC_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditAnywhere, Category = "Interaction")
		UStaticMeshComponent* ConeIntercation;

	UFUNCTION(BlueprintCallable, Category = "Movements")
		void MoveForward(float value);
	UFUNCTION(BlueprintCallable, Category = "Movements")
		void MoveRight(float value);

	bool isSprinting;
	bool isCrouching;

	int testMove;
	int moveForward;
	int moveRight;

	UPROPERTY(EditAnywhere, Category = "BlueprintClass")
		AActor* hitActor;
};
