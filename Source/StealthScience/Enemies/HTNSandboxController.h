// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "HTNSandboxController.generated.h"

/**
 * 
 */
UCLASS()
class STEALTHSCIENCE_API AHTNSandboxController : public AAIController
{
	GENERATED_BODY()

protected:
	void OnPossess(APawn* InPawn) override;
	
};
