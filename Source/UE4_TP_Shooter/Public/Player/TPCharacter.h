// Copyright 2019 Stuart McDonald.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TPCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class UE4_TP_SHOOTER_API ATPCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
	/** Is crouching */
	UPROPERTY(BlueprintReadOnly, Category = "Input")
	bool bIsCrouching;


private:
	////////////////////////////////////////////////////////////////////////////////
	// Camera setup

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	USpringArmComponent * CameraBoom;

	/** Third person camera */
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	UCameraComponent * TPCamera;


	////////////////////////////////////////////////////////////////////////////////
	// Input

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float BaseLookUpRate;


public:
	/** Sets default values for this character's properties */
	ATPCharacter();

protected:
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

public:

	////////////////////////////////////////////////////////////////////////////////
	// Input

	/** Called to bind functionality to input */
	virtual void SetupPlayerInputComponent(class UInputComponent * PlayerInputComponent) override;

private:
	////////////////////////////////////////////////////////////////////////////////
	// Input

	/** Move character along X-axis */
	void MoveForward(float Value);

	/** Move character along Y-axis */
	void MoveRight(float Value);

	/** Change characters view pitch */
	void LookUpAtRate(float Value);

	/** Change characters view Yaw */
	void TurnAtRate(float Value);

	/** Crouch and UnCrouch */
	void ToggleCrouch();

};
