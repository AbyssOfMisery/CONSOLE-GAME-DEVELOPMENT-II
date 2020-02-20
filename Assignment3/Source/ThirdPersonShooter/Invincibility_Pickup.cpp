// Fill out your copyright notice in the Description page of Project Settings.


#include "Invincibility_Pickup.h"

// Sets default values
AInvincibility_Pickup::AInvincibility_Pickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AInvincibility_Pickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInvincibility_Pickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

