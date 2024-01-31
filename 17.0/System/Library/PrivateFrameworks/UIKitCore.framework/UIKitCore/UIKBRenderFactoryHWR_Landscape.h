@interface UIKBRenderFactoryHWR_Landscape : UIKBRenderFactoryHWR_Portrait

- (double)symbolImageControlKeyFontSize;
- (id)_traitsForKey:(id)a0 onKeyplane:(id)a1;
- (struct CGPoint { double x0; double x1; })deleteGlyphOffset;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)a0 key:(id)a1 onKeyplane:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })handwritingAreaInsets;
- (double)handwritingGradientStartLocation;
- (void)setupLayoutSegments;
- (double)spaceKeyFontSize;
- (struct CGPoint { double x0; double x1; })spaceKeyTextOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })symbolFrameInsets;

@end
