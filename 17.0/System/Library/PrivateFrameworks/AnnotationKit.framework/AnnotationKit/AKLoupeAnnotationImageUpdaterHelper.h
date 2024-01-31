@interface AKLoupeAnnotationImageUpdaterHelper : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })magnifiedRectForUnmagnifiedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofLoupeAnnotation:(id)a1 onPageController:(id)a2;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForFastPathLayer:(id)a0 ofLoupeAnnotation:(id)a1 onPageController:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })unmagnifiedRectForMagnifiedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofLoupeAnnotation:(id)a1;
+ (void)updateFastPathImageOnLoupeAnnotation:(id)a0 withFastPathLayer:(id)a1 onPageController:(id)a2;
+ (void)updateModelImageOnLoupeAnnotation:(id)a0 onPageController:(id)a1;

@end
