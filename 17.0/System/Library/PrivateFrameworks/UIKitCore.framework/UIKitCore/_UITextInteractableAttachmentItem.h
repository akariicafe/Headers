@class NSTextAttachment;

@interface _UITextInteractableAttachmentItem : _UITextInteractableItem

@property (retain, nonatomic) NSTextAttachment *attachment;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isAttachmentItem;

@end
