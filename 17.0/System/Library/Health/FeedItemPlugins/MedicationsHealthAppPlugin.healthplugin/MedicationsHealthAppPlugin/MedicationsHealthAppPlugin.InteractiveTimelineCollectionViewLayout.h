@class NSString;

@interface MedicationsHealthAppPlugin.InteractiveTimelineCollectionViewLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ itemHeight;
    void /* unknown type, empty encoding */ contentSize;
    void /* unknown type, empty encoding */ zoomAreaOffset;
    void /* unknown type, empty encoding */ zoomArea;
    void /* unknown type, empty encoding */ computedAttributes;
}

@property (class, nonatomic, readonly) Class layoutAttributesClass;
@property (class, nonatomic, readonly) Class invalidationContextClass;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL flipsHorizontallyInOppositeLayoutDirection;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
