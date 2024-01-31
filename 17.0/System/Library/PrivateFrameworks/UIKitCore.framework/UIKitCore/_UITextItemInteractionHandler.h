@class _UITextInteractableItem, UIView;
@protocol _UITextContent;

@interface _UITextItemInteractionHandler : NSObject

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, weak, nonatomic) _UITextInteractableItem *item;
@property (readonly, weak, nonatomic) UIView<_UITextContent> *textContentView;

- (void).cxx_destruct;
- (id)primaryAction;
- (id)_defaultMenuForInteractableItem;
- (BOOL)_canPresentMenuWithoutPrimaryAction;
- (id)_defaultContextMenuConfiguration;
- (id)_defaultPrimaryActionForInteractableItem;
- (id)_menuForInteractableItem;
- (id)_preparedMenuConfigurationWithDefaultMenu:(id)a0;
- (id)contextMenuConfiguration;
- (id)initWithItem:(id)a0 textContentView:(id)a1;

@end
