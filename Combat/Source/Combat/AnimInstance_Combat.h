// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstance_Combat.generated.h"

/**
 * 
 */
UCLASS()
class COMBAT_API UAnimInstance_Combat : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	virtual void NativeInitializeAnimation() override;

	UFUNCTION(BlueprintCallable, Category = Animation)
	void UpdateAnimationAxis();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Chara)
	float hSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Chara)
	float vSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Chara)
	class APawn* myPawn;
};
