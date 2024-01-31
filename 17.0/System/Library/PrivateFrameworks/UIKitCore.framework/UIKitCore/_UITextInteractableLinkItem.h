@class NSURL;

@interface _UITextInteractableLinkItem : _UITextInteractableItem

@property (retain, nonatomic) NSURL *link;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_itemRepresentationWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isLinkItem;

@end
