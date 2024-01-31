@class SUUIFullscreenImageViewElement;

@interface SUUILockupViewElement : SUUIViewElement {
    char _enabled;
}

@property (readonly, nonatomic) BOOL containsElementGroups;
@property (readonly, nonatomic) SUUIFullscreenImageViewElement *fullscreenImage;
@property (readonly, nonatomic) long long lockupViewType;
@property (readonly, nonatomic, getter=isSelectable) BOOL selectable;

- (BOOL)isEnabled;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;
- (long long)pageComponentType;

@end
