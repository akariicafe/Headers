@class NSTextAttachment;

@interface _UITextAttachmentInteractionHandler : _UITextItemInteractionHandler

@property (readonly, nonatomic) NSTextAttachment *textAttachment;

- (void).cxx_destruct;
- (id)_defaultMenuForInteractableItem;
- (BOOL)_canPresentMenuWithoutPrimaryAction;
- (id)initWithAttachmentItem:(id)a0 textContentView:(id)a1;

@end
