@interface TSCHChartAxisTickMarksLayoutItem : TSCHChartLayoutItem

@property (readonly, nonatomic) float majorTickmarkLength;
@property (readonly, nonatomic) float minorTickmarkLength;

- (int)location;
- (id)initWithParent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_effectiveRootedLayoutRect;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingOutElementSize:(struct CGSize { double x0; double x1; } *)a0 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
