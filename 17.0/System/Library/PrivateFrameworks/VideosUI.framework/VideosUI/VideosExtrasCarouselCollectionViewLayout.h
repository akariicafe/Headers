@class NSDictionary;

@interface VideosExtrasCarouselCollectionViewLayout : UICollectionViewLayout <VideosExtrasCarouselCollectionViewLayout>

@property (retain, nonatomic) NSDictionary *cachedLayoutAttributes;
@property (nonatomic) struct CGSize { double width; double height; } cachedCollectionViewContentSize;
@property (nonatomic) long long indexOfVisibleItemForBoundsChange;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (double)itemWidth;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finalizeAnimatedBoundsChange;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)setIndexOfVisibleItem:(unsigned long long)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_contentOffsetForItemAtIndex:(long long)a0 collectionViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_indexOfVisibleItemForContentOffset:(struct CGPoint { double x0; double x1; })a0 collectionViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_neighboringItemVisibleWidth;
- (double)_spaceBetweenItems;
- (double)_spaceBetweenItemsForCollectionViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)indexOfVisibleItem;
- (void)setIndexOfVisibleItem:(unsigned long long)a0;

@end
