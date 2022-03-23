// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Player.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AC_Player::AC_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshPlayer = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	MeshPlayer->SetOnlyOwnerSee(true);
	MeshPlayer->SetupAttachment(RootComponent);
	MeshPlayer->bCastDynamicShadow = false;
	MeshPlayer->CastShadow = false;
	MeshPlayer->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	MeshPlayer->SetRelativeLocation(FVector(0.0f, 0.0f, -95.0f));
}

// Called when the game starts or when spawned
void AC_Player::BeginPlay()
{
	Super::BeginPlay();
	isSprinting = false;
}

// Called every frame
void AC_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AC_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (InputComponent)
	{
		InputComponent->BindAxis("MoveForward", this, &AC_Player::MoveForward);
		InputComponent->BindAxis("MoveRight", this, &AC_Player::MoveRight);

		InputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
		InputComponent->BindAxis("TurnRate", this, &AC_Player::TurnAtRate);
		InputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
		InputComponent->BindAxis("LookUpRate", this, &AC_Player::LookUpAtRate);

		InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
		InputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

		InputComponent->BindAction("Sprint", IE_Pressed, this, &AC_Player::Sprint);
		InputComponent->BindAction("Sprint", IE_Released, this, &AC_Player::StopSprinting);

		InputComponent->BindAction("LeftClick", IE_Pressed, this, &AC_Player::LeftClick);
	}
}

void AC_Player::MoveForward(float value)
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

void AC_Player::MoveRight(float value)
{
	if (value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), value);
	}
}

void AC_Player::TurnAtRate(float value)
{
	AddControllerYawInput(value * 45.f * GetWorld()->GetDeltaSeconds());
}

void AC_Player::LookUpAtRate(float value)
{
	AddControllerPitchInput(value * 45.f * GetWorld()->GetDeltaSeconds());
}

void AC_Player::Sprint()
{
	isSprinting = true;
}

void AC_Player::StopSprinting()
{
	isSprinting = false;
}

void AC_Player::LeftClick()
{
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
		const FString command = FString::Printf(TEXT("DoorInteract"));
		doorBP = hit.GetActor();
		if (doorBP)
		{
			doorBP->CallFunctionByNameWithArguments(*command, ar, NULL, true);
		}
	}
}

