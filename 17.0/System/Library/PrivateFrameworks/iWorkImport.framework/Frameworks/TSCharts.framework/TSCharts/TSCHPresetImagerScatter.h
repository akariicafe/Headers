@interface TSCHPresetImagerScatter : TSCHPresetImagerLineFamily

- (id)p_chartType;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 preset:(id)a3 target:(int)a4 shouldCache:(BOOL *)a5;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swatchImageEdgeInsetsForSize:(struct CGSize { double x0; double x1; })a0;

@end
