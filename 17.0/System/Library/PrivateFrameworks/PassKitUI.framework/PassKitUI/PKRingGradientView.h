@class UIColor, CAGradientLayer, CAShapeLayer;

@interface PKRingGradientView : UIView {
    UIColor *_originalStartColor;
    UIColor *_originalEndColor;
    CAGradientLayer *_gradientLayer;
    CAShapeLayer *_gradientMaskLayer;
    CAShapeLayer *_strokeLayer;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_backgroundCap;
    CAShapeLayer *_gradientCap;
    struct CGColor { } *_effectiveStartColor;
    struct CGColor { } *_effectiveEndColor;
    struct CGColor { } *_effectiveFillColor;
    struct CGColor { } *_effectiveStrokeColor;
    BOOL _gradientCapIsFillColor;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) UIColor *gradientStartColor;
@property (copy, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) double minimumAngle;
@property (readonly, nonatomic) double totalWidth;
@property (nonatomic) double currentAngle;
@property (readonly, nonatomic) double radius;

- (void)_dynamicUserInterfaceTraitDidChange;
- (double)strokeWidth;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_radius;
- (struct CGPoint { double x0; double x1; })_center;
- (double)_offsetEndAngle;
- (void)_updateGradient;
- (struct CGPoint { double x0; double x1; })_centerPointForMaskViewWithAngle:(double)a0 adjustToCover:(BOOL)a1;
- (double)_maskRadius;
- (double)_offsetStartAngle;
- (void)_updateEffectiveColors;
- (double)ringWidth;

@end
