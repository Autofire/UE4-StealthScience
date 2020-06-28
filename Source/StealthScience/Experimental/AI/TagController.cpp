// Fill out your copyright notice in the Description page of Project Settings.

#include "TagController.h"

#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/TargetPoint.h"


void ATagController::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATargetPoint::StaticClass(), Waypoints);

	GoToRandomWaypoint();
}

ATargetPoint* ATagController::GetRandomWaypoint()
{
	auto index = FMath::RandRange(0, Waypoints.Num() - 1);
	return Cast<ATargetPoint>(Waypoints[index]);
}

void ATagController::GoToRandomWaypoint()
{
	//MoveToActor(GetRandomWaypoint());
	MoveToActor(GetRandomWaypoint(), -1.0f, true, true, true, 0, true);
}

void ATagController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
	Super::OnMoveCompleted(RequestID, Result);

	//GoToRandomWaypoint();
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ATagController::GoToRandomWaypoint, 1.0f, false);
}
