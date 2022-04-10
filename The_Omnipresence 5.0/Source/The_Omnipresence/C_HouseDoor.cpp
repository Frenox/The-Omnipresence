// Fill out your copyright notice in the Description page of Project Settings.


#include "C_HouseDoor.h"

// Sets default values
AC_HouseDoor::AC_HouseDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	//DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	//DoorMesh->SetupAttachment(RootComponent);
	//HandleHolderMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandleHolderMesh"));
	//HandleHolderMesh->SetupAttachment(RootComponent);
	//HandleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HandleMesh"));
	//HandleMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AC_HouseDoor::BeginPlay()
{
	Super::BeginPlay();

	//GetWorldTimerManager().SetTimer(TimerHandle, this, &AC_HouseDoor::OpenDoor, 0.2f, true, 2.0f);
}

// Called every frame
void AC_HouseDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AC_HouseDoor::OpenDoor()
{
	callTime++;
	if (callTime == 130)
	{
		GetWorldTimerManager().ClearTimer(TimerHandle);
	}
}

