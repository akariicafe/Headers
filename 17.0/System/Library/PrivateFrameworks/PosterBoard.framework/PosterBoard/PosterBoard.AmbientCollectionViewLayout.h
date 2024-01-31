@interface PosterBoard.AmbientCollectionViewLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ cardSizeMultiplier;
    void /* unknown type, empty encoding */ spacingBetweenCards;
    void /* unknown type, empty encoding */ contentBounds;
    void /* unknown type, empty encoding */ cachedAttributes;
    void /* unknown type, empty encoding */ cachedSupplementaryFooterAttributes;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;

@end
