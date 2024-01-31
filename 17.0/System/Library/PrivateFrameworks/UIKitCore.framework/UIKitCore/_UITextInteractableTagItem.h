@class NSString;

@interface _UITextInteractableTagItem : _UITextInteractableItem

@property (retain, nonatomic) NSString *tag;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_showsPreviewByDefault;
- (BOOL)isTagItem;

@end
