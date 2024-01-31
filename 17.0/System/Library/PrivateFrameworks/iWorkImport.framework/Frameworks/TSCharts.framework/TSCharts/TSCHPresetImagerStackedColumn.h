@interface TSCHPresetImagerStackedColumn : TSCHPresetImagerBarFamily

- (id)p_chartType;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 preset:(id)a3 target:(int)a4 shouldCache:(BOOL *)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_stackRectWithRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 atIndex:(unsigned long long)a1;

@end
