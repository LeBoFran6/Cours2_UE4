// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"




UCLASS()
class COMBAT_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ITEMS | Collision")
		class USphereComponent* CollideSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ITEMS | Mesh")
	class UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ITEMS | Particles")
		class UParticleSystemComponent* IdleParticle;

	//Skeleton mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WEAPON | myWeapon")
		class USkeletalMeshComponent* Weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ITEMS | Particles")
		class UParticleSystem* overlapParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ITEMS | Sound")
		class USoundCue* overlapSound;

	/*
	float RunningTime;

	UPROPERTY(EditAnywhere, Category = Movement)
		float Xvalue;

	UPROPERTY(EditAnywhere, Category = Movement)
		float Yvalue;

	UPROPERTY(EditAnywhere, Category = Movement)
		float Zvalue;
	*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	

	void EquipWeapon(class ACharacter_CPP* myChar);

	
};
