@interface AKThoughtBubbleAnnotationRenderer : AKAnnotationRenderer

+ (struct CGSize { double x0; double x1; })_concreteDraggingBoundsInsetsForAnnotation:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteDrawingBoundsOfAnnotation:(id)a0;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1 minimumBorderThickness:(double)a2;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteRectangleForAnnotation:(id)a0 withTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)_concreteRenderAnnotation:(id)a0 intoContext:(struct CGContext { } *)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteTextBoundsOfAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 optionalText:(id)a2;
+ (void)_fillAndStrokePath:(struct CGPath { } *)a0 forAnnotation:(id)a1 inContext:(struct CGContext { } *)a2;
+ (struct CGPath { } *)_newCloudPathScaledToModelSpaceForAnnotation:(id)a0;
+ (struct CGPath { } *)_newConcreteTextExclusionPathForAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGPath { } *)_newLargestBubblePathScaledToModelSpaceForAnnotation:(id)a0;
+ (struct CGPath { } *)_newPathTransformedFromUnitToModelSpace:(struct CGPath { } *)a0 forAnnotation:(id)a1;
+ (struct CGPath { } *)_newSmallBubblePathForAnnotation:(id)a0 atCenter:(struct CGPoint { double x0; double x1; })a1 withSize:(struct CGSize { double x0; double x1; })a2;
+ (struct CGPath { } *)_newSmallestBubblePathScaledToModelSpaceForAnnotation:(id)a0;
+ (struct CGPoint { double x0; double x1; })_templatePointyPointToCircleIntersect;
+ (double)_templateToUnitPointyPointScaleForAnnotation:(id)a0;
+ (struct CGPoint { double x0; double x1; })_unitAnnotationPointyPointForAnnotation:(id)a0;
+ (struct CGPoint { double x0; double x1; })_unitCloudCenter;
+ (double)_unitCloudRadius;

@end
