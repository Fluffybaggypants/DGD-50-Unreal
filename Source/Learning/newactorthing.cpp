// Fill out your copyright notice in the Description page of Project Settings.


#include "newactorthing.h"

// Sets default values
Anewactorthing::Anewactorthing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Anewactorthing::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Anewactorthing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

