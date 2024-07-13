// Fill out your copyright notice in the Description page of Project Settings.
// Adding this line as a test.


#include "AC_Interactable.h"
#include "CoreUObject.h"

// Sets default values for this component's properties
UAC_Interactable::UAC_Interactable()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	AActor* Parent = GetOwner();

	// Set default type to Pickup.
	if (Parent != nullptr)
	{
		SetType(EInteractableType::IT_PICKUPABLE);
	}
}

void UAC_Interactable::SetType(EInteractableType const E_Type)
{
	ObjectType = static_cast<int32>(E_Type);
}

int UAC_Interactable::GetType() const
{
	return ObjectType;
}