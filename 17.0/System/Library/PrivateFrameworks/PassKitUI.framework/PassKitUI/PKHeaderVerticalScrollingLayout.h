@class NSString, NSIndexPath;

@interface PKHeaderVerticalScrollingLayout : UICollectionViewCompositionalLayout <PKDashboardLayout> {
    NSIndexPath *_headerIndexPath;
    BOOL _needsCustomLocation;
    double _headerHeight;
    double _horizontalInset;
}

@property (nonatomic) BOOL useStickyHeader;
@property (nonatomic) unsigned long long titleInset;
@property (nonatomic) BOOL fade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)_customAttributesForStickyHeader:(id)a0;
- (BOOL)_indexPathIsHeaderIndexPath:(id)a0;
- (id)layoutSectionAtIndex:(long long)a0 layoutEnvironment:(id)a1;

@end
