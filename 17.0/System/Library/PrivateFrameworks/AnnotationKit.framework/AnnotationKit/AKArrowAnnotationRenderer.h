@interface AKArrowAnnotationRenderer : AKAnnotationRenderer

+ (void)_arrowHeadLineIntersection:(id)a0 outStartIntersection:(struct CGPoint { double x0; double x1; } *)a1 outBezierStartParameter:(double *)a2 outEndIntersection:(struct CGPoint { double x0; double x1; } *)a3 outBezierEndParameter:(double *)a4;
+ (void)_arrowHeadPathsForArrow:(id)a0 inOutStartArrowHead:(struct CGPath { } *)a1 outBezierStartParameter:(double *)a2 inOutEndArrowHead:(struct CGPath { } *)a3 outBezierEndParameter:(double *)a4;
+ (struct CGSize { double x0; double x1; })_concreteDraggingBoundsInsetsForAnnotation:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteDrawingBoundsOfAnnotation:(id)a0;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1 minimumBorderThickness:(double)a2;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1;
+ (void)_concreteRenderAnnotation:(id)a0 intoContext:(struct CGContext { } *)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteTextBoundsOfAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 optionalText:(id)a2;
+ (void)_controlPointsForArrow:(id)a0 outControlPoint1:(struct CGPoint { double x0; double x1; } *)a1 outControlPoint2:(struct CGPoint { double x0; double x1; } *)a2;
+ (struct CGPoint { double x0; double x1; })_cubicBezierPointForParameter:(double)a0 start:(struct CGPoint { double x0; double x1; })a1 controlPt1:(struct CGPoint { double x0; double x1; })a2 controlPt2:(struct CGPoint { double x0; double x1; })a3 end:(struct CGPoint { double x0; double x1; })a4;
+ (void)_drawPathForArrow:(id)a0 inContext:(struct CGContext { } *)a1 inPath:(struct CGPath { } *)a2 pageControllerForPixelAlignmentOrNil:(id)a3 minimumGrabbableBorderThickness:(double)a4;
+ (unsigned long long)_drawableArrowHeads:(id)a0;
+ (struct CGPath { } *)_newConcreteTextExclusionPathForAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGPath { } *)_newLinePathForArrow:(id)a0 withHeads:(BOOL)a1 fromBezierParameter:(double)a2 toBezierParameter:(double)a3 optionalPageController:(id)a4 optionalContext:(struct CGContext { } *)a5;
+ (double)_oneDimensionalCubicBezierValueForParameter:(double)a0 start:(double)a1 controlPt1:(double)a2 controlPt2:(double)a3 end:(double)a4;

@end
