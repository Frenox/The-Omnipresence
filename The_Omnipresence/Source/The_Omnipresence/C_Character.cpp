// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Character.h"
#include "GameFramework/PawnMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include <Runtime/Core/Public/Misc/OutputDeviceNull.h>

// Sets default values
AC_Character::AC_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConeIntercation = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("IntercationConeMesh"));
	ConeIntercation->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Cone(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	ConeIntercation->SetStaticMesh(Cone.Object);
	ConeIntercation->SetRelativeRotation(FRotator(0.0f, 90.0f, 90.0f));
	ConeIntercation->SetRelativeLocation(FVector(131.0f, 0.0f, 29.0f));
	ConeIntercation->SetVisibility(false);
	ConeIntercation->SetCollisionProfileName(TEXT("OverlapAll"));
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

	FVector loc;
	FRotator rot;
	FHitResult hit;

	GetController()->GetPlayerViewPoint(loc, rot);

	FVector start = loc;
	FVector end = start + (rot.Vector() * 100);

	FCollisionQueryParams traceParams;
	if (GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Visibility, traceParams))
	{
		FOutputDeviceNull ar;
		hitActor = hit.GetActor();
		if (hitActor)
		{
			if (hitActor->ActorHasTag(TEXT("HouseDoor")))
			{
				const FString command = FString::Printf(TEXT("DoorInteract"));
				hitActor->CallFunctionByNameWithArguments(*command, ar, NULL, true);
			}
		}
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

