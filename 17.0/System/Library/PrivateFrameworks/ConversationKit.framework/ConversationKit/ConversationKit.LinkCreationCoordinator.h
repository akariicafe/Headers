@interface ConversationKit.LinkCreationCoordinator : NSObject <UIActivityViewControllerObjectManipulationDelegate> {
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ shareSheetViewController;
    void /* unknown type, empty encoding */ conversationLink;
}

- (BOOL)_customizationAvailableForActivityViewController:(id)a0;
- (id)_customizationGroupsForActivityViewController:(id)a0;
- (id)customActionViewControllerForActivityViewController:(id)a0;
- (id)customLocalizedActionTitleForActivityViewController:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
