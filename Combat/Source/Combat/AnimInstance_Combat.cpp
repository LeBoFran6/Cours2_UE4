// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance_Combat.h"

void UAnimInstance_Combat::NativeInitializeAnimation() {

	if (myPawn == nullptr) {
		myPawn = TryGetPawnOwner();
		//myPawn->InputComponent->BindAction("Fire", IE_Pressed, this, &ACharacter::Fire);

	}
}

void UAnimInstance_Combat::UpdateAnimationAxis() {
	if (myPawn) {
		FVector speedVec = myPawn->GetVelocity();
		FVector HorizontalSpeed = FVector(speedVec.X, speedVec.Y, 0.f);

		hSpeed = HorizontalSpeed.Size();
		vSpeed = speedVec.Z;
	}
}
/*
void UAnimInstance_Combat::Fire() {
	UE_LOG(LogTemp, Warning, TEXT("Fire"));
}*/