@interface MenstrualCyclesAppPlugin.CycleChartsCollectionViewLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ sectionLayoutAttributes;
    void /* unknown type, empty encoding */ contentSize;
    void /* unknown type, empty encoding */ headerHeight;
    void /* unknown type, empty encoding */ footerHeight;
    void /* unknown type, empty encoding */ axisColumnWidth;
    void /* unknown type, empty encoding */ dayColumnWidth;
    void /* unknown type, empty encoding */ headerHeightAdjustment;
    void /* unknown type, empty encoding */ axisColumnWidthAdjustment;
    void /* unknown type, empty encoding */ pendingScrollToSectionIndex;
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
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
