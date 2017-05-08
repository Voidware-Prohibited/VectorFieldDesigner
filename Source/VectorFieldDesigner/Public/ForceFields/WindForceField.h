// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ForceFieldBase.h"

#include "UObject/NoExportTypes.h"
#include "WindForceField.generated.h"

/**
 * 
 */
UCLASS()
class UWindForceField : public UForceFieldBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual FVector ForceAtLocation(const FVector& VectorLocation) const override;
	virtual void Draw(FPrimitiveDrawInterface* PDI, const FColor& Color) const override;
	virtual bool IsInRange(const FVector & VectorLocation) const override;

private:
	TAssetPtr<UTexture2D> WindSpriteTexture;
};
