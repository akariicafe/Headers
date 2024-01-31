@interface TSCHChartStackedBarElementsRenderer : TSCHChartBarElementsRenderer

- (struct CGPath { } *)clippingPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inGroupIndex:(unsigned long long)a1 series:(id)a2 withContext:(struct CGContext { } *)a3 relativelyPositive:(BOOL)a4 stackRects:(id)a5 forceRoundedCornersOff:(BOOL)a6;
- (void)renderRoundedCornerElementStrokeIntoContext:(struct CGContext { } *)a0 stroke:(id)a1 clippingPath:(struct CGPath { } *)a2 elementRenderRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)stackRectsWithContext:(struct CGContext { } *)a0;

@end
