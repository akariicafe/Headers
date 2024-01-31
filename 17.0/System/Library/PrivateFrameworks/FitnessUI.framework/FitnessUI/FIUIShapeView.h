@interface FIUIShapeView : UIView

+ (Class)layerClass;

- (void)setFillColor:(id)a0;
- (void)setStrokeColor:(id)a0;
- (void)setLineWidth:(double)a0;
- (void)setPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)shapeLayer;
- (void)setStrokeEnd:(double)a0;

@end
