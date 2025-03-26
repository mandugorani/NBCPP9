// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NumberBaseball.generated.h"

/**
 * 
 */
UCLASS()
class YAGUGAME_API UNumberBaseball : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "NumberBaseball")
	static FString GenerateRandomNumber();

};
