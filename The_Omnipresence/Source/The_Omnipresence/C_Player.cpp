// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Player.h"
#include "GameFramework/PawnMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AC_Player::AC_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GetMovementComponent()->GetNavAgentPropertiesRef().bCanCrouch = true;

	MeshPlayer = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	MeshPlayer->SetupAttachment(RootComponent);
	const ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshPlr(TEXT("SkeletalMesh'/Game/FirstPerson/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms'"));
	MeshPlayer->SetSkeletalMesh(MeshPlr.Object);
	MeshPlayer->bCastDynamicShadow = false;
	MeshPlayer->CastShadow = false;
	MeshPlayer->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	MeshPlayer->SetRelativeLocation(FVector(0.0f, 0.0f, -95.0f));

	MeshItem = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	MeshItem->SetupAttachment(RootComponent);
	const ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObj(TEXT("StaticMesh'/Game/Models/Items/SM_AudioRecorder.SM_AudioRecorder'"));
	MeshItem->SetStaticMesh(MeshObj.Object);
	MeshItem->SetRelativeRotation(FRotator(0.0f, 0.0f, 90.0f));
	MeshItem->SetRelativeLocation(FVector(26.0f, 27.0f, 0.0f));
	MeshItem->SetRelativeScale3D(FVector(0.3f, 0.3f, 0.3f));

}

// Called when the game starts or when spawned
void AC_Player::BeginPlay()
{
	Super::BeginPlay();
	isSprinting = false;

	itemsCollected.Add("AudioRecorder", false);
	//TArray<FName> ClassNames = ItemsDataTable->GetRowNames();
	//FItemsMeshes* Row = ItemsDataTable->FindRow<FItemsMeshes>(FName("AudioRecorder"), "", true);
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

		InputComponent->BindAxis("Turn", this, &AC_Player::TurnAtRate);
		InputComponent->BindAxis("LookUp", this, &AC_Player::LookUpAtRate);

		InputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
		InputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

		InputComponent->BindAction("Sprint", IE_Pressed, this, &AC_Player::Sprint);
		InputComponent->BindAction("Sprint", IE_Released, this, &AC_Player::StopSprinting);

		InputComponent->BindAction("Crouch", IE_Pressed, this, &AC_Player::ToggleCrouch);

		InputComponent->BindAction("Interact", IE_Pressed, this, &AC_Player::Interact);
		InputComponent->BindAction("Inventory", IE_Pressed, this, &AC_Player::InventoryToggle);
	}
}

void AC_Player::MoveForward(float value)
{
	if (isInventoryOpen == false)
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
				AddMovementInput(GetActorForwardVector(), value * 1.0f);
			}
		}
	}
}

void AC_Player::MoveRight(float value)
{
	if (value != 0.0f && isInventoryOpen == false)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), value);
	}
}

void AC_Player::TurnAtRate(float value)
{
	if (isInventoryOpen == false)
	{
		APlayerController* const PC = CastChecked<APlayerController>(Controller);
		PC->AddYawInput(value);
	}
}

void AC_Player::LookUpAtRate(float value)
{
	if (isInventoryOpen == false)
	{
		APlayerController* const PC = CastChecked<APlayerController>(Controller);
		PC->AddPitchInput(value);
	}
}

void AC_Player::Sprint()
{
	isSprinting = true;
}

void AC_Player::StopSprinting()
{
	isSprinting = false;
}

void AC_Player::ToggleCrouch()
{
	if (isCrouching)
	{
		UnCrouch();
	}
	else
	{
		Crouch();
	}
	isCrouching = !isCrouching;
}

void AC_Player::InventoryToggle()
{
	isInventoryOpen = !isInventoryOpen;
	FOutputDeviceNull ar;
	const FString command = FString::Printf(TEXT("InventoryToggle"));
	inventoryManager->CallFunctionByNameWithArguments(*command, ar, NULL, true);
}

void AC_Player::Interact()
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
		hitActor = hit.GetActor();
		if (hitActor)
		{
			if (hitActor->ActorHasTag(TEXT("HouseDoor")))
			{
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Need to finish interface thing"));
				const FString command = FString::Printf(TEXT("DoorInteract"));
				hitActor->CallFunctionByNameWithArguments(*command, ar, NULL, true);
			}
			else if (hitActor->ActorHasTag(TEXT("Item")))
			{
				if (hitActor->GetActorLabel() == "SM_AudioRecorder" && itemsCollected["AudioRecorder"] == false)
				{
					missionsManager->CallFunctionByNameWithArguments(*FString::Printf(TEXT("UpdateMission Get_Ready1")), ar, NULL, true);
					missionsManager->CallFunctionByNameWithArguments(*FString::Printf(TEXT("MissionTrigger AudioRecorder")), ar, NULL, true);
					
					itemsCollected["AudioRecorder"] = true;
					inventoryManager->CallFunctionByNameWithArguments(*FString::Printf(TEXT("Item_picked AudioRecorder")), ar, NULL, true);
				}

				hitActor->Destroy();
			}
		}
	}
}

