@interface _UITextLinkInteractionHandler : _UITextItemInteractionHandler

+ (id)handlerForItem:(id)a0 textContentView:(id)a1;

- (id)link;
- (id)_defaultMenuForInteractableItem;
- (id)_openURLAction:(id)a0;
- (id)_addLinkToReadingListAction:(id)a0;
- (id)_copyLinkAction:(id)a0;
- (id)_defaultPrimaryActionForInteractableItem;
- (id /* block */)_handlerRequiringUnlockedDevice:(id /* block */)a0;
- (id)_openAppLinkInDefaultBrowserAction:(id)a0;
- (id)_openAppLinkInExternalApplicationAction:(id)a0;
- (id)_shareLinkAction:(id)a0;
- (id)_titleForLink:(id)a0;

@end
