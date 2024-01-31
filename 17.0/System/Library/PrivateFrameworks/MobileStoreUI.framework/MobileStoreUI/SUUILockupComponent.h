@class SUUIItem, SUUIEditorialComponent, SUUILockupViewElement;

@interface SUUILockupComponent : SUUIPageComponent

@property (readonly, nonatomic) SUUILockupViewElement *viewElement;
@property (readonly, nonatomic) BOOL _needsItemData;
@property (readonly, nonatomic) SUUIEditorialComponent *editorial;
@property (readonly, nonatomic) SUUIItem *item;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, nonatomic) struct SUUILockupStyle { long long artworkSize; long long layoutStyle; unsigned long long visibleFields; } lockupStyle;

- (void).cxx_destruct;
- (long long)componentType;
- (id)initWithItem:(id)a0 style:(struct SUUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;
- (void)_setItem:(id)a0;
- (void)_setLockupStyle:(struct SUUILockupStyle { long long x0; long long x1; unsigned long long x2; })a0;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithItemIdentifier:(long long)a0 style:(struct SUUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;
- (id)initWithViewElement:(id)a0;

@end
