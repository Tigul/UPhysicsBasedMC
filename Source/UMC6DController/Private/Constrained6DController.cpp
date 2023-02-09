// Copyright 2017-2021, Institute for Artificial Intelligence - University of Bremen


#include "Constrained6DController.h"

UConstrained6DController::UConstrained6DController(){
  PrimaryComponentTick.bCanEverTick = true;
	// Disable tick, it will be enabled after init
	PrimaryComponentTick.bStartWithTickEnabled = true;

}

void UConstrained6DController::BeginPlay(){
  Super::BeginPlay();
  SetComponentTickEnabled(true);
}


void UConstrained6DController::Init(){

}

void UConstrained6DController::EndPlay(const EEndPlayReason::Type EndPlayReason){
  Super::EndPlay(EndPlayReason);
}

void UConstrained6DController::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  FVector loc = this->GetComponentLocation();
  FQuat rot = this->GetComponentQuat();

  //WorldConstraint->SetLinearPositionTarget(loc);
  //WorldConstraint->SetAngularOrientationTarget(rot.Rotator());
  //E_LOG(LogTemp, Warning, TEXT("%s"), *loc.ToString());
}
