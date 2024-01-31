@class NSValue, AVTEngagementLayout;

@interface AVTEngagementListCollectionViewLayout : UICollectionViewLayout <AVTCollectionViewLayout>

@property (retain, nonatomic) NSValue *targetContentOffset;
@property (retain, nonatomic) NSValue *ignoredProposedContentOffset;
@property (readonly, nonatomic) AVTEngagementLayout *engagementLayout;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForElementAtIndex:(long long)a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)indexesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 numberOfItems:(long long)a2;
- (struct CGPoint { double x0; double x1; })centerForCenteringElementAtIndex:(long long)a0 visibleBoundsSize:(struct CGSize { double x0; double x1; })a1 proposedOrigin:(struct CGPoint { double x0; double x1; })a2;
- (void)clearTargetContentOffsetForAnimations;
- (struct CGSize { double x0; double x1; })contentSizeForVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfItems:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })engagementInsetsForCollectionViewBounds:(struct CGSize { double x0; double x1; })a0;
- (id)initWithEngagementLayout:(id)a0;
- (void)setTargetContentOffsetForAnimations:(struct CGPoint { double x0; double x1; })a0;

@end
