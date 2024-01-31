@class CALayer, CAReplicatorLayer;

@interface CAMTimelapseShutterRingView : UIView

@property (readonly, nonatomic) double _smallTickRotationRadians;
@property (readonly, nonatomic) double _largeTickRotationRadians;
@property (readonly, nonatomic) CALayer *_smallTickLayer;
@property (readonly, nonatomic) CALayer *_largeTickLayer;
@property (readonly, nonatomic) CAReplicatorLayer *_smallTickReplicatorLayer;
@property (readonly, nonatomic) CAReplicatorLayer *_largeTickReplicatorLayer;
@property (readonly, nonatomic) CALayer *_timerHandLayer;
@property (readonly, nonatomic) CALayer *_timerHandParentLayer;
@property (readonly, nonatomic) struct { long long smallTickCount; long long largeTickCount; double smallTickLength; double largeTickLength; } spec;
@property (nonatomic, getter=isAnimating) BOOL animating;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)setSpec:(struct { long long x0; long long x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (id)initWithSpec:(struct { long long x0; long long x1; double x2; double x3; })a0;
- (void)_startAnimating;
- (void)_stopAnimating;
- (BOOL)_shouldUseAnimations;
- (void)_addStartAnimations;
- (void)_addStopAnimations;
- (void)_commonCAMTimelapseShutterRingViewInitializationWithSpec:(struct { long long x0; long long x1; double x2; double x3; })a0;
- (void)_removeStartAnimations;
- (void)_removeStopAnimations;
- (double)_rotationRadiansFromTickCount:(long long)a0;
- (double)_rotationZFromTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (double)_tickRadiusForTickSize:(struct CGSize { double x0; double x1; })a0 ringSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 spec:(struct { long long x0; long long x1; double x2; double x3; })a1;

@end
