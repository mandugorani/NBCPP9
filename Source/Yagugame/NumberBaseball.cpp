// Fill out your copyright notice in the Description page of Project Settings.


#include "NumberBaseball.h"

FString UNumberBaseball::GenerateRandomNumber()
{
    FString Result;

    int32 FirstDigit = FMath::RandRange(1, 9);
    Result += FString::FromInt(FirstDigit);

    int32 SecondDigit;
    do {
        SecondDigit = FMath::RandRange(1, 9);
    } while (SecondDigit == FirstDigit);
    Result += FString::FromInt(SecondDigit);

    int32 ThirdDigit;
    do {
        ThirdDigit = FMath::RandRange(1, 9);
    } while (ThirdDigit == FirstDigit || ThirdDigit == SecondDigit);
    Result += FString::FromInt(ThirdDigit);

    return Result;
}