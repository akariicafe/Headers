@interface HUMosaicLayoutHelper : NSObject

+ (id)fakeFramesForGeometry:(id)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)framesForSizes:(id)a0 withGeometry:(id)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct HUGridSize { long long x0; long long x1; })gridSizeForGeometry:(id)a0 withEmptyCells:(long long)a1;

@end
