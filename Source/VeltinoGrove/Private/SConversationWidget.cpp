#include "SConversationWidget.h"

#define LOCTEXT_NAMESPACE "ConversationScreen"

void SConversationWidget::Construct(const FArguments& InArgs)
{
	// UI Built here

	const FMargin ContentPadding = FMargin(500.f, 300.f);
	const FText  MessageText = LOCTEXT("GAMETITLE", "GREAT GAME");

	ChildSlot
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SImage)
				.ColorAndOpacity(FColor::Black)
			]
			+ SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.Padding(ContentPadding)
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
					[
						SNew(STextBlock)
						.Text(MessageText)
					]
			]
		];
	
}

SConversationWidget::SConversationWidget()
{
}

#undef LOCTEXT_NAMESPACE
