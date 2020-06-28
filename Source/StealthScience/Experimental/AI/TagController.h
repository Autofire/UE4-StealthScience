// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Runtime/Engine/Classes/Engine/TargetPoint.h"

#include "CoreMinimal.h"
#include "AIController.h"
#include "TagController.generated.h"



/**
 * 
 */
UCLASS()
class STEALTHSCIENCE_API ATagController : public AAIController
{
	GENERATED_BODY()

public:
	void BeginPlay() override;

	void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

private:
	FTimerHandle TimerHandle;

	UPROPERTY()
		TArray<AActor*> Waypoints;

	UFUNCTION()
		ATargetPoint* GetRandomWaypoint();

	UFUNCTION()
		void GoToRandomWaypoint();
	
};