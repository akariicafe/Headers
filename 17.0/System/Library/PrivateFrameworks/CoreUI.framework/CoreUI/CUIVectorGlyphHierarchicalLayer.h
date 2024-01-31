@interface CUIVectorGlyphHierarchicalLayer : CUIVectorGlyphLayer

@property (readonly, nonatomic) unsigned long long hierarchyLevel;

- (id)debugDescription;
- (void)_readCSSAttributes:(struct CGSVGAttributeMap { } *)a0;
- (struct CGImage { } *)createImageUsingScaleFactor:(double)a0 targetSize:(struct CGSize { double x0; double x1; })a1 variableMinValue:(double)a2 variableMaxValue:(double)a3 hierarchicalColorResolver:(id /* block */)a4;
- (struct CGImage { } *)createImageUsingScaleFactor:(double)a0 targetSize:(struct CGSize { double x0; double x1; })a1 variableMinValue:(double)a2 variableMaxValue:(double)a3 paletteColorResolver:(id /* block */)a4;
- (void)drawInContext:(struct CGContext { } *)a0 scaleFactor:(double)a1 targetSize:(struct CGSize { double x0; double x1; })a2 variableMinValue:(double)a3 variableMaxValue:(double)a4 hierarchicalColorResolver:(id /* block */)a5;
- (void)drawInContext:(struct CGContext { } *)a0 scaleFactor:(double)a1 targetSize:(struct CGSize { double x0; double x1; })a2 variableMinValue:(double)a3 variableMaxValue:(double)a4 paletteColorResolver:(id /* block */)a5;

@end
