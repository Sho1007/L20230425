// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UBoxComponent;
class UStaticMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UFloatingPawnMovement;
UCLASS()
class L20230425_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* BoxComponent;
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Body;
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Left;
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Right;
	UPROPERTY(EditDefaultsOnly)
	USpringArmComponent* SpringArm;
	UCameraComponent* Camera;
	UFloatingPawnMovement* Movement;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	float MovementSpeed = 1000.0f;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	float PropellerRotateSpeed = 54000.0f;
};
