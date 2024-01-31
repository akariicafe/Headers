@class NSString;

@interface QLPinchRotationTracker : NSObject <QLDismissGestureTracking> {
    double _trackedScale;
    double _rotation;
    double _previousScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialBounds;
    struct CGPoint { double x; double y; } _initialTrackingCenter;
    struct CGPoint { double x; double y; } _initialGestureLocation;
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _anchorLocationOffset;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } trackedCenter;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } trackedBounds;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } trackedTransform;
@property (readonly, nonatomic) struct _QLDismissGestureTrackingVelocity { double x0; double x1; double x2; double x3; } trackedVelocity;
@property (readonly, nonatomic) double finalAnimationDuration;
@property (readonly, nonatomic) double finalAnimationSpringDamping;
@property (readonly, nonatomic) double dismissalProgress;
@property (readonly, nonatomic) BOOL shouldFinishDismissal;
@property (nonatomic) double targetZoom;
@property (nonatomic) double minimumZoomForDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)update;
- (void)startTrackingCenter:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 withInitialGestureLocation:(struct CGPoint { double x0; double x1; })a3;
- (void)trackGestureLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)trackRotation:(double)a0;
- (void)trackScale:(double)a0;

@end
