// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "ISpudObject.h"
#include "GameFramework/Actor.h"
#include "SPUDExamplesProjectile.generated.h"

// Tagging the projectile with ISpudObject is enough to restore its state
UCLASS(config=Game)
class ASPUDExamplesProjectile : public AActor, public ISpudObject
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	class USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;

	/// Because this is a runtime-spawned object, every projectile needs a unique identifier
	/// so that they can be re-spawned on load, Naming aproperty "SpudGuid" does this. We don't need to give
	/// it a value, SPUD does that when saving if it's blank
	UPROPERTY(SaveGame)
	FGuid SpudGuid;

public:
	ASPUDExamplesProjectile();

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	FORCEINLINE class USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	FORCEINLINE class UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

