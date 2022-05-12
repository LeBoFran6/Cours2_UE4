// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "Components/SphereComponent.h"
#include "particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Sound/SoundCue.h"

void AItem::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("ON COLLISION"));
	if (overlapParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), overlapParticle, GetActorLocation(), FRotator(.0f), true);
	}

	if (overlapSound)
	{
		UGameplayStatics::PlaySound2D(this, overlapSound);
	}

	//Destroy();
}

// Sets default values
AItem::AItem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Colide Shpere
	CollideSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollideSphere"));
	RootComponent = CollideSphere;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(GetRootComponent());

	//Particles
	IdleParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Idle_Particles"));
	IdleParticle->SetupAttachment(GetRootComponent());


}
// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	CollideSphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnOverlapBegin);
	CollideSphere->OnComponentEndOverlap.AddDynamic(this, &AItem::OnOverlapEnd);

}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Faire floter l'item avec cos

	/*
	FVector NewLocation = GetActorLocation();

	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));

	NewLocation.X += DeltaHeight * XValue;
	NewLocation.Y += DeltaHeight * YValue;
	NewLocation.Z += DeltaHeight * ZValue;

	RuningTime += DeltaTime;

	SetActorLocation(NewLocation);
	*/

	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	float RunningTime = GetGameTimeSinceCreation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20.0f;       //Scale our height by a factor of 20
	float DeltaRotation = DeltaTime * 20.0f;    //Rotate by 20 degrees per second
	NewRotation.Yaw += DeltaRotation;
	SetActorLocationAndRotation(NewLocation, NewRotation);


}



void AItem::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("END COLLISION"));
}