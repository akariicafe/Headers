@interface TSCHLegendRenderer : TSCHRenderer

@property (nonatomic) struct CGPoint { double x; double y; } textEditingPixelAlignmentOffset;

- (void)p_drawBadgeForCell:(id)a0 intoContext:(struct CGContext { } *)a1;
- (void)addSelection:(id)a0 toCGPath:(struct CGPath { } *)a1 useWrapWidth:(BOOL)a2;
- (BOOL)canRenderSelectionPath:(id)a0;
- (id)legendLayoutItem;
- (void)p_draw3DLineBadgeIntoContext:(struct CGContext { } *)a0 forCell:(id)a1;
- (void)p_drawDefaultBadgeIntoContext:(struct CGContext { } *)a0 forCell:(id)a1;
- (void)p_drawDonutBadgeIntoContext:(struct CGContext { } *)a0 forCell:(id)a1;
- (void)p_drawLabelForCell:(id)a0 intoContext:(struct CGContext { } *)a1 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)p_drawLineAreaBadgeIntoContext:(struct CGContext { } *)a0 forCell:(id)a1;
- (void)p_drawPieBadgeIntoContext:(struct CGContext { } *)a0 forCell:(id)a1;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)p_selectionPathForCell:(id)a0;
- (void)renderIntoContext:(struct CGContext { } *)a0 selection:(id)a1;

@end
