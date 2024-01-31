@class NSArray;
@protocol SFCollectionViewDelegateLayout;

@interface SFCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } evaluatedInset;
@property (nonatomic) struct CGSize { double width; double height; } evaluatedItemSize;
@property (nonatomic) struct CGSize { double width; double height; } evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset;
@property (copy, nonatomic) NSArray *preparedLayoutAttributes;
@property (copy, nonatomic) NSArray *preparedUpdateItems;
@property (weak, nonatomic) id<SFCollectionViewDelegateLayout> fallbackDelegate;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)shouldReverseLayoutDirection;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_evaluateInsetForSectionAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)a0;
- (id)_indexPathsForItemsInSection:(long long)a0;
- (id)_layoutAttributesForItemAtIndexPath:(id)a0 numberOfItemsInSection:(unsigned long long)a1;
- (void)invalidateGroupViewLayoutAnimated:(BOOL)a0;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize { double x0; double x1; })a0 inset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 containerWidth:(double)a2 offscreenPeekInFactor:(float)a3;
- (void)calculateLayoutValuesForIndexPaths:(id)a0 containerWidth:(double)a1;
- (struct CGPoint { double x0; double x1; })firstItemCenterForContainerWidth:(double)a0;

@end
