@class NSMutableArray;

@interface SKUIGridComponent : SKUIPageComponent {
    long long _missingItemCount;
}

@property (readonly, nonatomic) long long gridType;
@property (readonly, nonatomic) NSMutableArray *children;
@property (readonly, nonatomic) struct SKUIEditorialStyle { long long alignment; long long bodyFontWeight; float bodyFontSize; float linkSpacing; long long titleFontWeight; float titleFontSize; float titleSpacing; } editorialStyle;
@property (readonly, nonatomic) struct SKUILockupStyle { long long artworkSize; long long layoutStyle; unsigned long long visibleFields; } lockupStyle;
@property (readonly, nonatomic) BOOL showsIndexNumbers;

- (id)description;
- (void).cxx_destruct;
- (long long)componentType;
- (id)_newLockupComponentWithItem:(id)a0 defaultStyle:(struct SKUILockupStyle { long long x0; long long x1; unsigned long long x2; })a1;
- (void)_reloadMissingItemCount;
- (void)_setChildrenWithFeaturedContextContext:(id)a0;
- (id)_updateWithInvalidItemIdentifiers:(id)a0;
- (id)_updateWithMissingItems:(id)a0;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithBrickItems:(id)a0;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithFeaturedContentContext:(id)a0 kind:(long long)a1;
- (id)initWithGridItems:(id)a0;
- (id)initWithLockups:(id)a0;
- (id)initWithRoomContext:(id)a0 gridType:(long long)a1;
- (id)initWithViewElement:(id)a0;
- (BOOL)isMissingItemData;
- (id)metricsElementName;

@end
