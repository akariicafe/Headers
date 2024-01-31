@interface TSCHRenderUtilities : NSObject

+ (void)addTextSubselectionHalosToArray:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
+ (void)addTextSubselectionKnobsToArray:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
+ (struct { double x0; double x1; double x2; BOOL x3; })barElementsRendererValueRangeForModelCache:(id)a0 groupIndex:(unsigned long long)a1;
+ (BOOL)centerPointForSeries:(id)a0 groupIndex:(unsigned long long)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 point:(struct CGPoint { double x0; double x1; } *)a3;
+ (BOOL)centerPointForSeries:(id)a0 groupIndex:(unsigned long long)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 point:(struct CGPoint { double x0; double x1; } *)a3 nullsUseIntercept:(BOOL)a4;
+ (void)debugRenderLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withColor:(id)a2 alpha:(double)a3 fillRect:(BOOL)a4;
+ (void)drawFill:(id)a0 inContext:(struct CGContext { } *)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (void)drawFill:(id)a0 inContext:(struct CGContext { } *)a1 path:(struct CGPath { } *)a2;
+ (void)drawImageFill:(id)a0 inContext:(struct CGContext { } *)a1 path:(struct CGPath { } *)a2 withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (void)drawSymbol:(int)a0 inContext:(struct CGContext { } *)a1 at:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 fill:(id)a4 stroke:(id)a5;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })integralFillRenderingRectFromElementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelRectFromClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 elementSize:(struct CGSize { double x0; double x1; })a1;
+ (id)lightenFillOrStroke:(id)a0 byPercent:(double)a1;
+ (struct CGSize { double x0; double x1; })maxSizeWithCount:(unsigned long long)a0 initialSize:(struct CGSize { double x0; double x1; })a1 sizeGeneratorBlock:(id /* block */)a2;
+ (struct CGLayer { } *)newCGLayerForUserSpaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 outUserSpaceLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
+ (struct CGPath { } *)newClipPathForSymbol:(int)a0 at:(struct CGPoint { double x0; double x1; })a1 width:(double)a2 stroke:(id)a3;
+ (struct CGImage { } *)newImageFromFills:(id)a0 size:(struct CGSize { double x0; double x1; })a1 spaceBetween:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 borderColor:(id)a4 outFillRects:(struct CGRect **)a5;
+ (struct CGColor { } *)newLightenedColor:(struct CGColor { } *)a0 byPercent:(double)a1;
+ (struct CGPath { } *)newPolarAxisShapePathWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 unitSpaceValue:(double)a1 numberOfValues:(unsigned long long)a2 elliptical:(BOOL)a3 rotation:(double)a4;
+ (struct CGPath { } *)newRegularPolygonPathWithEdges:(unsigned long long)a0 origin:(struct CGPoint { double x0; double x1; })a1 size:(struct CGSize { double x0; double x1; })a2 rotation:(double)a3;
+ (struct CGPath { } *)newStrokedPathFromPath:(struct CGPath { } *)a0 stroke:(id)a1 cap:(int)a2;
+ (struct CGPath { } *)newUnitPathForSymbol:(int)a0 symbolSize:(double)a1 stroke:(id)a2;
+ (struct CGPoint { double x0; double x1; })outerEndOfSpokeWithUnitCircleOffsetAngleInDegrees:(double)a0 chartBodySize:(struct CGSize { double x0; double x1; })a1 chartInfo:(id)a2;
+ (id)p_fillToRenderWithFill:(id)a0 inContext:(struct CGContext { } *)a1;
+ (struct CGPath { } *)p_newCirclePath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
+ (struct CGPath { } *)p_newCrossPath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
+ (struct CGPath { } *)p_newDiamondPath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
+ (struct CGPath { } *)p_newPathForSymbol:(int)a0 context:(struct CGContext { } *)a1 at:(struct CGPoint { double x0; double x1; })a2 width:(double)a3 pathLocation:(long long)a4 stroke:(id)a5;
+ (struct CGPath { } *)p_newPlusPath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3 context:(struct CGContext { } *)a4;
+ (struct CGPath { } *)p_newSquarePath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3 context:(struct CGContext { } *)a4;
+ (struct CGPath { } *)p_newTrianglePath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
+ (struct CGPath { } *)p_newYieldPath:(struct CGPoint { double x0; double x1; })a0 width:(double)a1 pathLocation:(long long)a2 stroke:(id)a3;
+ (struct CGPath { } *)p_regularPolygonOrLinePathWithEdges:(unsigned long long)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)printCGPath:(struct CGPath { } *)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toFit:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })spokeTransformWithUnitCircleOffsetAngleInDegrees:(double)a0 chartBodySize:(struct CGSize { double x0; double x1; })a1 chartInfo:(id)a2;
+ (BOOL)strokeEnabledForRenderingForAxis:(id)a0 chart:(id)a1;
+ (struct CGColor { } *)subSelectionKnobFillColor;
+ (double)subSelectionKnobRadius;
+ (struct CGColor { } *)subSelectionKnobStrokeColor;
+ (void)updateStackRectsDictionary:(id)a0 withElementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndex:(unsigned long long)a2 barModelCache:(id)a3;

@end
