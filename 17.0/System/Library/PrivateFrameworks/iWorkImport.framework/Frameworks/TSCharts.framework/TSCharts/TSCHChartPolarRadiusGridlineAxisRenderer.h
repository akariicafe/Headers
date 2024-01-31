@interface TSCHChartPolarRadiusGridlineAxisRenderer : TSCHChartAxisRenderer

- (void)drawIntoLayer:(int)a0 inContext:(struct CGContext { } *)a1 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)p_addTickmarkPaths:(struct CGContext { } *)a0 axis:(id)a1 locations:(id)a2 stroke:(id)a3 width:(float)a4 isMinor:(BOOL)a5;

@end
