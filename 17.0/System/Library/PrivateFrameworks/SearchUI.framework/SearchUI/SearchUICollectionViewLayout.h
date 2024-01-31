@class SearchUICollectionViewLayoutConfiguration;
@protocol SearchUICollectionViewSizingDelegate;

@interface SearchUICollectionViewLayout : UICollectionViewCompositionalLayout

@property (readonly) SearchUICollectionViewLayoutConfiguration *snapshotConfiguration;
@property (weak, nonatomic) id<SearchUICollectionViewSizingDelegate> sizingDelegate;

+ (Class)layoutAttributesClass;
+ (void)applyForcedFrameToAttributes:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)applyForcedMaxHeightToAttributes:(id)a0 maxHeight:(double)a1;

- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sectionContentFrameFromCellAttributes:(id)a0;
- (void).cxx_destruct;

@end
