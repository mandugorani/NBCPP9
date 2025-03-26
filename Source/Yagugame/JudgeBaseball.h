// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JudgeBaseball.generated.h"

/**
 * 
 */
UCLASS()
class YAGUGAME_API UJudgeBaseball : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "JudgeBaseball")
    static void JudgeBaseball(const FString& PlayerInput, const FString& Answer, int32& Strike, int32& Ball);

public:
    UFUNCTION(BlueprintCallable, Category = "JudgeBaseball")
    static bool IsValidInput(const FString& Input);
};
