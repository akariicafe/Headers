@interface TSCHPresetImagerRadial : TSCHPresetImager

- (id)fillFromStyle:(id)a0;
- (struct CGPath { } *)newMutablePathWithRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 startAngle:(double)a2 endAngle:(double)a3;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 preset:(id)a3 target:(int)a4 shouldCache:(BOOL *)a5;
- (id)strokeFromStyle:(id)a0;

@end
