// Fill out your copyright notice in the Description page of Project Settings.


#include "JudgeBaseball.h"

void UJudgeBaseball::JudgeBaseball(const FString& PlayerInput, const FString& Answer, int32& Strike, int32& Ball)
{
    Strike = 0;
    Ball = 0;

    FString ProcessedInput = PlayerInput;
    if (PlayerInput.StartsWith(TEXT("/")) && PlayerInput.Len() == 4)
    {
        ProcessedInput = PlayerInput.Right(3);
    }

    for (int32 i = 0; i < 3; i++)
    {
        if (Answer[i] == ProcessedInput[i])
        {
            Strike++;
        }
        else if (Answer.Contains(FString::Chr(ProcessedInput[i])))
        {
            Ball++;
        }
    }
}

bool UJudgeBaseball::IsValidInput(const FString& Input)
{
    bool bIsCommand = Input.StartsWith(TEXT("/")) && Input.Len() == 4;

    if (!bIsCommand && Input.Len() != 3)
        return false;

    FString CheckString = bIsCommand ? Input.Right(3) : Input;

    TSet<TCHAR> UniqueChars;
    for (TCHAR c : CheckString)
    {
        if (!FChar::IsDigit(c)) return false;
        if (UniqueChars.Contains(c)) return false;
        UniqueChars.Add(c);
    }
    return true;
}