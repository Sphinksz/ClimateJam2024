#pragma once
#include "SlateBasics.h"
#include "SlateExtras.h"
#include "VeltinoGrove/AC_Conversation.h"

class SConversationWidget : public SCompoundWidget
{

public:

	SLATE_BEGIN_ARGS(SConversationWidget) {}

	SLATE_ARGUMENT(class UAC_Conversation*, Convo)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	UAC_Conversation Convo;

	SConversationWidget();
	
};
