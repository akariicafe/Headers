@interface AutoCropper : NSObject

@property (nonatomic) BOOL shouldFavorBottom;
@property (nonatomic) BOOL shouldFavorTop;
@property (nonatomic) struct CGSize { double width; double height; } originalImageSize;

- (id)init;
- (int)getRatioOfSize:(struct CGSize { double x0; double x1; })a0;
- (id)clusterRects:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeClippingWithinSize:(struct CGSize { double x0; double x1; })a0 andImportantRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeClippingWithinSize:(struct CGSize { double x0; double x1; })a0 andImportantRects:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeClippingWithinSize:(struct CGSize { double x0; double x1; })a0 forImportantRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andType:(int)a2 restrictRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeClippingWithinSize:(struct CGSize { double x0; double x1; })a0 forMultipleRects:(id)a1;
- (int)determineBestPositionWithinSize:(struct CGSize { double x0; double x1; })a0 forImportantRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 restrictRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContainRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectContainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andOtherRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithSize:(struct CGSize { double x0; double x1; })a0 andPoint:(struct CGPoint { double x0; double x1; })a1 inPosition:(int)a2 fromOriginalSize:(struct CGSize { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 byScale:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFitSize:(struct CGSize { double x0; double x1; })a1 withAnchorPoint:(struct CGPoint { double x0; double x1; })a2;

@end
