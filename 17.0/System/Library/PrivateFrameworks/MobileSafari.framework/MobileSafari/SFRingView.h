@class CAShapeLayer;

@interface SFRingView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (nonatomic) double radius;

+ (Class)layerClass;

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;

@end
