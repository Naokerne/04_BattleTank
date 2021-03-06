// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"
#include "BattleTank.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerControlled not possessing a Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController Begin Play"));
	}
	UE_LOG(LogTemp, Warning, TEXT("PlayerController possessing %s"), *(ControlledTank->GetName()));
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}