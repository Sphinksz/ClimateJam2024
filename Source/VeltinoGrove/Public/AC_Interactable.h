// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "AC_Interactable.generated.h"

UENUM(BlueprintType, Meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EInteractableType : uint8
{
	IT_NONE = 0x00 UMETA(DisplayName = "NoInteraction"), //Doesn't matter. Won't be on objects that can't interact with
	IT_PICKUPABLE = 0x01 UMETA(DisplayName = "Pickupable"),
	IT_CONVERSABLE = 0x02 UMETA(DisplayName = "Conversable"),
};

ENUM_CLASS_FLAGS(EInteractableType);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VELTINOGROVE_API UAC_Interactable : public UActorComponent
{
	GENERATED_BODY()

public:	
	UAC_Interactable();
	void SetType(EInteractableType E_Type);
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	int GetType() const;
private:
	UPROPERTY(EditAnywhere, Meta = (Bitmask, BitmaskEnum = "EInteractableType"))
	int ObjectType;
};

