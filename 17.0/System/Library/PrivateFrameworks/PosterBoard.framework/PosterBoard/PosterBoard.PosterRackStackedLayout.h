@interface PosterBoard.PosterRackStackedLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ layoutMode;
    void /* unknown type, empty encoding */ selectedSectionIndex;
    void /* unknown type, empty encoding */ sectionRevealProgressProvider;
    void /* unknown type, empty encoding */ hidesHomeCardsInAlongsideLayout;
    void /* unknown type, empty encoding */ alongsideCompactLayoutShouldScaleFurtherBack;
    void /* unknown type, empty encoding */ layoutModeTransitioningTo;
    void /* unknown type, empty encoding */ itemSize;
    void /* unknown type, empty encoding */ minimumLineSpacing;
    void /* unknown type, empty encoding */ sectionInset;
    void /* unknown type, empty encoding */ scrollDirection;
    void /* unknown type, empty encoding */ zoomCardSizeMultiplier;
    void /* unknown type, empty encoding */ cardSizeMultiplier;
    void /* unknown type, empty encoding */ peekingCardSizeMultiplier;
    void /* unknown type, empty encoding */ alongsideCardUpscale;
    void /* unknown type, empty encoding */ alongsideCardLesserUpscale;
    void /* unknown type, empty encoding */ maximumVerticalRevealFraction;
    void /* unknown type, empty encoding */ overhangMultiplier;
    void /* unknown type, empty encoding */ zoomCardSizeOverlapMultiplier;
    void /* unknown type, empty encoding */ selectedFrontBaseOffset;
    void /* unknown type, empty encoding */ unselectedFrontBaseOffset;
    void /* unknown type, empty encoding */ unselectedFrontShovedMultiplier;
    void /* unknown type, empty encoding */ unselectedFrontShovedMultiplierPad;
    void /* unknown type, empty encoding */ unselectedFrontParallaxLeadingMultiplier;
    void /* unknown type, empty encoding */ unselectedFrontParallaxTrailingMultiplier;
    void /* unknown type, empty encoding */ backBaseOffset;
    void /* unknown type, empty encoding */ backParallaxMultiplier;
    void /* unknown type, empty encoding */ backParallaxMultiplierPad;
    void /* unknown type, empty encoding */ coupledContentEdgeMargin;
    void /* unknown type, empty encoding */ contentBounds;
    void /* unknown type, empty encoding */ cachedAttributes;
    void /* unknown type, empty encoding */ cachedSupplementaryHeaderAttributes;
    void /* unknown type, empty encoding */ cachedSupplementaryFooterAttributes;
    void /* unknown type, empty encoding */ cachedSupplementaryDecorationAttributes;
    void /* unknown type, empty encoding */ sectionRevealProgresses;
    void /* unknown type, empty encoding */ sectionIndexPathsToDelete;
    void /* unknown type, empty encoding */ indexPathToMaintainForTransition;
}

@property (nonatomic, readonly) BOOL flipsHorizontallyInOppositeLayoutDirection;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForTransitionFromLayout:(id)a0;
- (BOOL)_disablesDoubleSidedAnimations;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (void)prepareForTransitionToLayout:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
