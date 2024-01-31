@class NSString;

@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem

@property (nonatomic) double chartBodyWidth;
@property (copy, nonatomic) NSString *editedString;
@property (nonatomic) double minHitSize;

- (id)titleText;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcDrawingRect;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (struct CGSize { double x0; double x1; })calcMinSizeForModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calcOverhangRect;
- (void)iterateHitChartElements:(struct CGPoint { double x0; double x1; })a0 withBlock:(id /* block */)a1;
- (struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (id)p_titleParagraphStyle;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })p_transformForRenderingRangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 outElementSize:(struct CGSize { double x0; double x1; } *)a1 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 forSubselection:(BOOL)a3 forSearchSelection:(BOOL)a4;
- (BOOL)pointHitsTitleRect:(struct CGPoint { double x0; double x1; })a0;
- (id)renderersWithRep:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })searchSelectionTransformForRenderingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 outElementSize:(struct CGSize { double x0; double x1; } *)a1 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (BOOL)shouldPlaceTitleAtCenter;
- (id)subselectionHaloPositionsForSelections:(id)a0;
- (id)subselectionKnobPositionsForSelection:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingOutElementSize:(struct CGSize { double x0; double x1; } *)a0 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingOutElementSize:(struct CGSize { double x0; double x1; } *)a0 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forSubselection:(BOOL)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForRenderingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 outElementSize:(struct CGSize { double x0; double x1; } *)a1 outClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

@end
