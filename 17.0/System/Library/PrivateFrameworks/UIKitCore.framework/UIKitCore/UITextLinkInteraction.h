@protocol UIContextMenuInteractionDelegate;

@interface UITextLinkInteraction : UITextItemInteractionInteraction

@property (readonly, weak, nonatomic) id<UIContextMenuInteractionDelegate> contextMenuDelegateProxy;

+ (id)interactionWithShouldProxyContextMenuDelegate:(BOOL)a0;

@end
