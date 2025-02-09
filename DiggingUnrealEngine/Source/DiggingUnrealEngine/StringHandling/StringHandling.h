// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "StringHandling.generated.h"

UCLASS(Blueprintable)
class UStringHandling : public UObject
{
	GENERATED_BODY()

	UFUNCTION(Blueprintcallable)
	void ToTestConstructFName();
};