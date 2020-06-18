// Fill out your copyright notice in the Description page of Project Settings.

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, FString::Printf(TEXT(text), fstring))
#include "HTNSandboxController.h"

//~ HTN Planner Plugin
#include "HTNPlanner.h"
//#include "HTNBuilder.h"
//~ HTN Planner Plugin


void AHTNSandboxController::OnPossess(APawn* InPawn) {
	Super::OnPossess(InPawn);

	printFString( "Possessed: %s", *(InPawn->GetFName().ToString()) );

	UE_LOG(LogTemp, Warning, TEXT("I just started running"));
}
