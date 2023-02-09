// Copyright 2017-2021, Institute for Artificial Intelligence - University of Bremen

#pragma once

#include "CoreMinimal.h"
#include "MotionControllerComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Animation/SkeletalMeshActor.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"
#include "Constrained6DController.generated.h"

/**
 *
 */
UCLASS(ClassGroup=(MC), meta=(BlueprintSpawnableComponent, DisplayName = "Constrained 6D Target"), hidecategories = (Physics, Collision, Lighting))
class UMC6DCONTROLLER_API UConstrained6DController : public UMotionControllerComponent
{
	GENERATED_BODY()

public:
	UConstrained6DController();

	~UConstrained6DController() = default;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Init();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// Called when actor removed from game or game ended
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;


public:

	// Skeletal mesh actor to control
	UPROPERTY(EditAnywhere, Category = "Movement Control")
	ASkeletalMeshActor* SkeletalMeshActor;

	UPROPERTY(EditAnywhere, Category = "Movement Control")
	UPhysicsConstraintComponent* WorldConstraint;



};
