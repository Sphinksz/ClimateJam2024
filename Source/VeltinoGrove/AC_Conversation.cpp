#include "AC_Conversation.h"

UAC_Conversation::UAC_Conversation()
{
	AActor* Parent = GetOwner();

	if (Parent != nullptr)
	{
		//printf("test");
	}
}

void UAC_Conversation::EndConversation()
{
	
}

void UAC_Conversation::StartConversation()
{
	
}

void UAC_Conversation::AddMessage(FConversationMessage MessageToAdd)
{
	MessageToAdd.MessageID = ConvoList.Num();
	this->ConvoList.Add(MessageToAdd);
}
