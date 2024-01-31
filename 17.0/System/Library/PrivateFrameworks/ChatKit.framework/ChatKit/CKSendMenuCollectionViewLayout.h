@interface CKSendMenuCollectionViewLayout : UICollectionViewCompositionalLayout {
    void /* unknown type, empty encoding */ sendMenuLayoutDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dynamicAnimator;
    void /* unknown type, empty encoding */ frozenCollectionViewContentSize;
    void /* unknown type, empty encoding */ lastPanGestureRecognizerPositionInCollectionViewCoordinates;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void)stretchSpringsAttachedToCellsForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSectionProvider:(id /* block */)a0;
- (id)initWithSectionProvider:(id /* block */)a0 configuration:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)initWithSection:(id)a0 sectionProvider:(id /* block */)a1 configuration:(id)a2;
- (id)initWithSection:(id)a0 configuration:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initWithSection:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id /* block */)_animationForReusableView:(id)a0 toLayoutAttributes:(id)a1 type:(unsigned long long)a2;

@end
