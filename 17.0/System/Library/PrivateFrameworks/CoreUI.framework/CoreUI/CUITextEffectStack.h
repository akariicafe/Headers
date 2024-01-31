@interface CUITextEffectStack : CUIShapeEffectStack {
    BOOL _renderHighQuality;
}

- (void)_drawShadow:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; })a0 forGlyphs:(const unsigned short *)a1 inContext:(struct CGContext { } *)a2 usingFont:(struct __CTFont { } *)a3 atPositions:(const struct CGPoint { double x0; double x1; } *)a4 count:(unsigned long long)a5;
- (void)_drawShadow:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; })a0 forGlyphs:(const unsigned short *)a1 inContext:(struct CGContext { } *)a2 usingFont:(struct __CTFont { } *)a3 withAdvances:(const struct CGSize { double x0; double x1; } *)a4 count:(unsigned long long)a5;
- (void)_drawShadow:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; })a0 usingQuartz:(id /* block */)a1 inContext:(struct CGContext { } *)a2;
- (void)drawGlyphs:(const unsigned short *)a0 inContext:(struct CGContext { } *)a1 usingFont:(struct __CTFont { } *)a2 atPositions:(const struct CGPoint { double x0; double x1; } *)a3 count:(unsigned long long)a4 lineHeight:(double)a5 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 atScale:(double)a7;
- (void)drawGlyphs:(const unsigned short *)a0 inContext:(struct CGContext { } *)a1 usingFont:(struct __CTFont { } *)a2 withAdvances:(const struct CGSize { double x0; double x1; } *)a3 count:(unsigned long long)a4 lineHeight:(double)a5 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 atScale:(double)a7;
- (void)drawProcessedMask:(struct CGContext { } *)a0 atBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 withScale:(double)a3;
- (void)drawUsingQuartz:(id /* block */)a0 inContext:(struct CGContext { } *)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atScale:(double)a3;
- (double)effectiveInteriorFillOpacity;
- (id)initWithEffectPreset:(id)a0;
- (struct CGColor { } *)newBackgroundPatternColorWithSize:(struct CGSize { double x0; double x1; })a0 contentScale:(double)a1 forContext:(struct CGContext { } *)a2;
- (struct CGContext { } *)newGlyphMaskContextForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContext:(struct CGContext { } *)a1 withScale:(double)a2;
- (BOOL)useCoreImageRendering;

@end
