// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "../DebugMacros.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	
	DEBUG_SPHERE(GetActorLocation());
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

	FString message = FString::Printf(TEXT("Hallo aus C++: %f"), DeltaTime);
	GEngine->AddOnScreenDebugMessage(1, 30.f, FColor::Yellow, message);
}

