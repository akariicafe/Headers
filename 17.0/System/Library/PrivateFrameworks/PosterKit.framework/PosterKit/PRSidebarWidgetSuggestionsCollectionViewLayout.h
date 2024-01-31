@class NSDictionary;
@protocol PRSidebarWidgetSuggestionsCollectionViewLayoutDelegate;

@interface PRSidebarWidgetSuggestionsCollectionViewLayout : UICollectionViewLayout

@property (nonatomic) double displayScale;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (retain, nonatomic) NSDictionary *computedAttributesByIndexPath;
@property (weak, nonatomic) id<PRSidebarWidgetSuggestionsCollectionViewLayoutDelegate> layoutDelegate;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; })_gridCoordinateForCircularItemAtIndex:(long long)a0;
- (struct { long long x0; long long x1; })_gridCoordinateForDescriptor:(id)a0 atIndex:(long long)a1;
- (struct { long long x0; long long x1; })_gridCoordinateForRectangularItemAtIndex:(long long)a0;
- (struct { long long x0; long long x1; })_gridCoordinateForSystemSmallItemAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })_originForGridCoordinate:(struct { long long x0; long long x1; })a0;
- (id)initWithDisplayScale:(double)a0;

@end
