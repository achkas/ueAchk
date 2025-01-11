

#include "CppBaseActor.h"


ACppBaseActor::ACppBaseActor() {
  PrimaryActorTick.bCanEverTick = true;

  Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
  SetRootComponent(Mesh);
}


void ACppBaseActor::BeginPlay() {
  Super::BeginPlay();

  InitialLocation = FVector(1.0f, 1.0f, 1.0f);
}

void ACppBaseActor::SinMovement() {
  InitialLocation.Z +=
      FMath::Sin(GetWorld()->GetTimeSeconds() * Frequency) * Amplitude;
  SetActorLocation(InitialLocation);
}


void ACppBaseActor::Tick(float DeltaTime) { Super::Tick(DeltaTime); }
