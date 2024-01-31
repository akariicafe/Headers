@class NSIndexPath;

@interface SFFluidTabOverviewZoomableGridLayout : SFFluidTabOverviewGridLayout

@property (retain, nonatomic) NSIndexPath *zoomedItemIndexPath;
@property (nonatomic) double itemCornerRadius;
@property (nonatomic) double sectionHeaderFadeOutPoint;

+ (Class)layoutAttributesClass;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldAllowScrollGesture;
- (id)unzoomedLayoutAttributesForItemAtIndexPath:(id)a0;

@end
