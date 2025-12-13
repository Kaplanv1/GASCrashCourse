// Copyright Emirhan Kaplan

#pragma once

#include "CoreMinimal.h"
#include "CC_BaseCharacter.h"
#include "CC_PlayerCharacter.generated.h"

class UCameraComponent;
class USpringArmComponent;

UCLASS()
class GASCRASHCOURSE_API ACC_PlayerCharacter : public ACC_BaseCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACC_PlayerCharacter();
	
private:
	
	UPROPERTY(VisibleAnywhere ,Category= "Camera")
	TObjectPtr<USpringArmComponent> SpringArmComponent;
	
	UPROPERTY(VisibleAnywhere ,Category= "Camera")
	TObjectPtr<UCameraComponent> CameraComponent;
	
	


};
