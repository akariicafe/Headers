@interface AKHighlightAnnotationRenderer : AKAnnotationRenderer

+ (struct CGSize { double x0; double x1; })_concreteDraggingBoundsInsetsForAnnotation:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteDrawingBoundsOfAnnotation:(id)a0;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1 minimumBorderThickness:(double)a2;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1;
+ (void)_concreteRenderAnnotation:(id)a0 intoContext:(struct CGContext { } *)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (void)_enumerateQuadPathsOfAnnotation:(id)a0 applyStyle:(BOOL)a1 handler:(id /* block */)a2;
+ (double)_highlightOutsetFactor;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForQuad:(struct AKQuadrilateral { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })a0 rotationAngle:(double *)a1;

@end
