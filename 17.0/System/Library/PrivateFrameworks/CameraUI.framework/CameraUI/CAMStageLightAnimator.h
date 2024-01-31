@class CAGradientLayer, CAShapeLayer;

@interface CAMStageLightAnimator : NSObject

@property (nonatomic, setter=_setAppearingAnimationCount:) unsigned long long _appearingAnimationCount;
@property (readonly, nonatomic, getter=_isAppearing) BOOL _appearing;
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;
@property (readonly, nonatomic) CAShapeLayer *circleLayer;
@property (nonatomic) unsigned long long state;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } circleBaseFrame;

- (void).cxx_destruct;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; })_gradientPropertiesForGeometry:(struct { double x0; double x1; struct CGPoint { double x0; double x1; } x2; })a0;
- (void)_animateAppearing;
- (void)_animateBounceIfNeeded;
- (void)_animateCircleColorWithDuration:(double)a0 timing:(id)a1;
- (void)_animateCircleFromGeometry:(struct { double x0; struct CGPoint { double x0; double x1; } x1; })a0 toGeometry:(struct { double x0; struct CGPoint { double x0; double x1; } x1; })a1 duration:(double)a2 timing:(id)a3 repeats:(BOOL)a4 completion:(id /* block */)a5;
- (void)_animateCircleGeometry:(struct { double x0; struct CGPoint { double x0; double x1; } x1; } *)a0 count:(unsigned long long)a1 duration:(double)a2 timing:(id)a3 repeats:(BOOL)a4 completion:(id /* block */)a5;
- (void)_animateCircleToGeometry:(struct { double x0; struct CGPoint { double x0; double x1; } x1; })a0 duration:(double)a1 timing:(id)a2 completion:(id /* block */)a3;
- (void)_animateGradientFromProperties:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; })a0 toProperties:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; })a1 duration:(double)a2 timing:(id)a3 repeats:(BOOL)a4;
- (void)_animateGradientProperties:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; } *)a0 count:(unsigned long long)a1 duration:(double)a2 timing:(id)a3 repeats:(BOOL)a4;
- (void)_animateGradientToProperties:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; })a0 duration:(double)a1 timing:(id)a2;
- (void)_animateHidden;
- (void)_animateSearchingIfNeededFromState:(unsigned long long)a0;
- (struct { double x0; struct CGPoint { double x0; double x1; } x1; })_circleGeometryForState:(unsigned long long)a0;
- (double)_circleLineWidth;
- (struct { double x0; struct CGPoint { double x0; double x1; } x1; })_currentCircleGeometry;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; double x2; })_currentGradientProperties;
- (void)_didFinishAppearing;
- (struct { double x0; double x1; struct CGPoint { double x0; double x1; } x2; })_gradientGeometryForState:(unsigned long long)a0;
- (id)initWithGradientLayer:(id)a0 circleLayer:(id)a1;
- (void)setCircleBaseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;

@end
