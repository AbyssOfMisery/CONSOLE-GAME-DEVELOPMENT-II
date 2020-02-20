// Fill out your copyright notice in the Description page of Project Settings.


#include "Damage_Boost_Pickup.h"

// Sets default values
ADamage_Boost_Pickup::ADamage_Boost_Pickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADamage_Boost_Pickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADamage_Boost_Pickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

