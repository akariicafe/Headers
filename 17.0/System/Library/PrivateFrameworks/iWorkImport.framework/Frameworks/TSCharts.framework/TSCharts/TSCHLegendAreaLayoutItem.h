@class NSValue, TSCHLegendModelCache;

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem {
    NSValue *_legendGeometryFrame;
}

@property (readonly) TSCHLegendModelCache *legendModelCache;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } legendModelGeometryFrame;

- (void)clearAll;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (void)setLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (void)clearLayoutSize;
- (void)resetLayoutSize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingBadge:(unsigned long long)a0 cellType:(int)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 cellType:(int)a1 outElementSize:(struct CGSize { double x0; double x1; } *)a2 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (double)p_legendModelWidth;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForRenderingLabel:(unsigned long long)a0 paragraphStyle:(id)a1 cellType:(int)a2 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 outElementSize:(struct CGSize { double x0; double x1; } *)a4 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (id)renderersWithRep:(id)a0;
- (id)textStyleProvidingSource;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 cellType:(int)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 outElementSize:(struct CGSize { double x0; double x1; } *)a3 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingLabel:(unsigned long long)a0 paragraphStyle:(id)a1 cellType:(int)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 outElementSize:(struct CGSize { double x0; double x1; } *)a4 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (void)updateLegendGeometryFrameFromLegendModelCache;

@end
