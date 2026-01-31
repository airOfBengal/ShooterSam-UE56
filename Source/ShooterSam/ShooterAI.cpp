// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

#include "Kismet/GameplayStatics.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (PlayerPawn)
	{
		SetFocus(PlayerPawn);		
	}
}

void AShooterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MoveToActor(PlayerPawn, 200.0f);
}

