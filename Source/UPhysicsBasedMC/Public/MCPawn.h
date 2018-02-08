// Copyright 2018, Institute for Artificial Intelligence - University of Bremen
// Author: Andrei Haidu (http://haidu.eu)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "MCHand.h"
#include "MCPawn.generated.h"

UCLASS()
class UPHYSICSBASEDMC_API AMCPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMCPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
private:
	// MC Root
	USceneComponent* MCRoot;

	// VR Camera
	UCameraComponent* VRCamera;

	// Left Motion Controller
	UMotionControllerComponent* MCLeft;

	// Right Motion Controller
	UMotionControllerComponent* MCRight;

	// Left MC hand
	UPROPERTY(EditAnywhere, Category = "MC")
	UMCHand* LeftHand;

	// Right MC hand
	UPROPERTY(EditAnywhere, Category = "MC")
	UMCHand* RightHand;

	// Display MC controller mesh
	UPROPERTY(EditAnywhere, Category = "MC", DisplayName = "Visualize MC Meshes")
	bool bVisualizeMCMeshes;
};
