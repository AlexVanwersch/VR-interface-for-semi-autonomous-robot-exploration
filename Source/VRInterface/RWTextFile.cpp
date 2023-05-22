// Fill out your copyright notice in the Description page of Project Settings.

#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "RWTextFile.h"


bool URWTextFile::LoadTxt(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::ProjectDir() + FileNameA));
}

bool URWTextFile::SaveTxt(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::ProjectDir() + FileNameB));
}