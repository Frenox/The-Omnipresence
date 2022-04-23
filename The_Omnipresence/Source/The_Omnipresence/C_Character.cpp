// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Character.h"

// Sets default values
AC_Character::AC_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AC_Character::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AC_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (moveForward > 0)
	{
		AC_Character::MoveForward(1.0f);
		moveForward--;
	}
	else if (moveForward < 0)
	{
		AC_Character::MoveForward(-1.0f);
		moveForward++;
	}
	else if (moveRight > 0)
	{
		AC_Character::MoveRight(1.0f);
		moveRight--;
	}
	else if (moveRight < 0)
	{
		AC_Character::MoveRight(-1.0f);
		moveRight++;
	}
}

// Called to bind functionality to input
void AC_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AC_Character::StartMove(int mvmt)
{
	switch (mvmt)
	{
	case(0):
		moveForward = FMath::RandRange(10, 30);
		break;
	case(1):
		moveForward = FMath::RandRange(-10, -30);
		break;
	case(2):
		moveRight = FMath::RandRange(10, 30);
		break;
	case(3):
		moveRight = FMath::RandRange(-10, -30);
		break;
	default:
		break;
	}
}

void AC_Character::MoveForward(float value)
{
	if (value < 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), value);
	}
	else
	{
		if (isSprinting == true)
		{
			AddMovementInput(GetActorForwardVector(), value * 2.5f);
		}
		else
		{
			AddMovementInput(GetActorForwardVector(), value * 1.5f);
		}
	}
}

void AC_Character::MoveRight(float value)
{
	if (value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), value);
	}
}

