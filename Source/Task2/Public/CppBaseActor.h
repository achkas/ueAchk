// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class TASK2_API ACppBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ACppBaseActor();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;

	UFUNCTION(BlueprintCallable)
	void SinMovement();

	UPROPERTY(EditAnywhere)
	float Frequency = 4.0;

	UPROPERTY(EditAnywhere)
	float Amplitude = 70.0;

	UPROPERTY(VisibleAnywhere)
	FVector InitialLocation;

protected:
	
	virtual void BeginPlay() override;

	

public:	
	
	virtual void Tick(float DeltaTime) override;

private:

	

};
