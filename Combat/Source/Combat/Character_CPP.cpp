// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_CPP.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACharacter_CPP::ACharacter_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera_Arm"));
	CameraArm->SetupAttachment(GetRootComponent());
	CameraArm->TargetArmLength = 350.f;
	CameraArm->bUsePawnControlRotation = true;

	MyCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera"));
	MyCamera->SetupAttachment(CameraArm);

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(40000.0f, 40000.0f, 0.0f);

	GetCharacterMovement()->JumpZVelocity = 400.f;
	GetCharacterMovement()->AirControl = 500.f;

}

// Called when the game starts or when spawned
void ACharacter_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacter_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	// ACTION
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump",IE_Released, this, &ACharacter::StopJumping);


	// TRANSLATION
	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacter_CPP::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacter_CPP::MoveRight);
	
	// ROTATION
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	
	//PlayerInputComponent->BindAxis("TurnRate", this, &ACharacter_CPP::Turn);
	//PlayerInputComponent->BindAxis("LookUpRate", this, &ACharacter_CPP::LookUp);
}

void ACharacter_CPP::MoveForward(float Value) {
	if (Controller != nullptr && Value != .0f) {
		const FRotator Rot = Controller->GetControlRotation();
		const FRotator YawRot(0.f, Rot.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACharacter_CPP::MoveRight(float Value) {
	if (Controller != nullptr && Value != .0f) {
		const FRotator Rot = Controller->GetControlRotation();
		const FRotator YawRot(0.f, Rot.Yaw, 0.f);

		const FVector Direction = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

void ACharacter_CPP::Turn(float Value) {
	AddControllerYawInput(Value * turnRate * GetWorld()->GetDeltaSeconds());
}

void ACharacter_CPP::LookUp(float Value) {
	AddControllerPitchInput(Value * lookUpRate * GetWorld()->GetDeltaSeconds());
}