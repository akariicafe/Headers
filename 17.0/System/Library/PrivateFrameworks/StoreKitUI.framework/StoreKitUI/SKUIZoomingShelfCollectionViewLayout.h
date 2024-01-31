@class NSString, SKUIShelfLayoutData, NSMutableDictionary;

@interface SKUIZoomingShelfCollectionViewLayout : UICollectionViewLayout <SKUIHorizontalScrollingContainerMenuBarCollectionViewLayout, SKUIShelfCollectionViewLayout> {
    struct CGSize { double width; double height; } _cachedCollectionViewContentSize;
    NSMutableDictionary *_cachedLayoutAttributes;
    BOOL _invalidateGeometryOnlyOfExistingLayoutAttributes;
}

@property (nonatomic) double focusedItemHorizontalCenterOffset;
@property (nonatomic) double interItemSpacing;
@property (nonatomic) double itemWidth;
@property (nonatomic) double scaledItemWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SKUIShelfLayoutData *layoutData;

+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;
+ (BOOL)collectionViewCanClipToBounds;
+ (double)snapToBoundariesDecelerationRate;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (id)menuBarFocusedItemIndexPathWithTransitionProgress:(double *)a0;
- (void)setMenuBarFocusedItemIndexPath:(id)a0 withTransitionProgress:(double)a1;

@end
