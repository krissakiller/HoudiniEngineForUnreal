// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HoudiniParameterInterface.generated.h"

class UHoudiniParameter;

// This class does not need to be modified.
UINTERFACE()
class UHoudiniParameterInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class HOUDINIENGINERUNTIME_API IHoudiniParameterInterface
{
	GENERATED_BODY()

public:
	
#if WITH_EDITOR
	virtual int32 GetNodeID() const = 0;
	virtual void OnParameterValueChanged(UHoudiniParameter* ChangedParam) = 0;
#endif
	
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};
