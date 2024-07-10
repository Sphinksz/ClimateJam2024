#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "AC_Conversation.generated.h"

USTRUCT(BlueprintType)
struct FConversationMessage
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ConversationMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EndsConversation;

	UPROPERTY(BlueprintReadOnly)
	int MessageID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NPCName;

	FConversationMessage()
	{
		ConversationMessage = TEXT("");
		EndsConversation = false;
		MessageID = 0;
		NPCName = TEXT("");
	}
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class VELTINOGROVE_API UAC_Conversation : public UActorComponent
{
	GENERATED_BODY()

public:
	UAC_Conversation();

	//Functions
	UFUNCTION(BlueprintCallable, Category = "Conversation")
	void EndConversation();

	UFUNCTION(BlueprintCallable, Category = "Conversation")
	void StartConversation();

	UFUNCTION(BlueprintCallable, Category = "Conversation")
	void AddMessage(FConversationMessage MessageToAdd);

	//Properties

	UPROPERTY(BlueprintReadWrite, Category = "Conversation")
	int CurrentConvoPosition;

	UPROPERTY(BlueprintReadWrite, Category = "Conversation")
	TArray< FConversationMessage> ConvoList;

	UPROPERTY(BlueprintReadWrite, Category = "Conversation")
	APlayerController* ConversingPlayerController;


private:
};