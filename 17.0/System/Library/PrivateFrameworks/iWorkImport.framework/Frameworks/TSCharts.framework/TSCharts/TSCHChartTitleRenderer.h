@interface TSCHChartTitleRenderer : TSCHRenderer {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingEditingFrame;
}

+ (id)defaultParagraphStyleForCenteredTitleEllipsisWithChartInfo:(id)a0 originalParagraphStyle:(id)a1 scaleTextPercent:(double)a2 titleRootedLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

- (void)addSelection:(id)a0 toCGPath:(struct CGPath { } *)a1 useWrapWidth:(BOOL)a2;
- (BOOL)canEditTextForSelectionPath:(id)a0;
- (BOOL)canRenderSelectionPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForEditingTextForSelectionPath:(id)a0;
- (double)frameHeightChangeForPath:(id)a0;
- (void)p_drawTitle:(struct CGContext { } *)a0 rangePtr:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_rawFrameForEditingTextForSelectionPath:(id)a0;
- (void)p_renderIntoContext:(struct CGContext { } *)a0 visible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)renderIntoContext:(struct CGContext { } *)a0 selection:(id)a1;
- (BOOL)shouldPlaceTitleAtCenter;
- (id)textLayoutPropertiesWithWrapWidth:(double)a0;
- (void)useEditedString:(id)a0;

@end
