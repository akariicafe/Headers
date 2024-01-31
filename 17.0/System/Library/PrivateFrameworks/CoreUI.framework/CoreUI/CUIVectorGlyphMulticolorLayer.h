@class NSString;

@interface CUIVectorGlyphMulticolorLayer : CUIVectorGlyphLayer

@property (readonly, retain, nonatomic) NSString *fillColorName;
@property (readonly, retain, nonatomic) NSString *strokeColorName;
@property (readonly, retain, nonatomic) id fillColor;
@property (readonly, retain, nonatomic) id strokeColor;

- (void)dealloc;
- (id)debugDescription;
- (void)_readCSSAttributes:(struct CGSVGAttributeMap { } *)a0;
- (struct CGImage { } *)createImageUsingScaleFactor:(double)a0 targetSize:(struct CGSize { double x0; double x1; })a1 variableMinValue:(double)a2 variableMaxValue:(double)a3 colorResolver:(id /* block */)a4;
- (void)drawInContext:(struct CGContext { } *)a0 scaleFactor:(double)a1 targetSize:(struct CGSize { double x0; double x1; })a2 variableMinValue:(double)a3 variableMaxValue:(double)a4 colorResolver:(id /* block */)a5;
- (BOOL)needsWideGamut;

@end
