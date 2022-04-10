// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_HouseDoor.generated.h"

UCLASS()
class THE_OMNIPRESENCE_API AC_HouseDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_HouseDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int callTime;	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* DoorMesh;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* HandleHolderMesh;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* HandleMesh;

	void OpenDoor();
	FTimerHandle TimerHandle;
};
