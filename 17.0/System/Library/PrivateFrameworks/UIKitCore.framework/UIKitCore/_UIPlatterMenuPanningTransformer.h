@class _UIVelocityIntegrator, NSDate;
@protocol _UIPlatterMenuPanningTransformerDelegate;

@interface _UIPlatterMenuPanningTransformer : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } transitionZonePosition;
@property (nonatomic) struct CGSize { double width; double height; } transitionZoneSize;
@property (nonatomic) struct CGPoint { double x; double y; } lastTouchPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } transitionZoneRect;
@property (nonatomic) unsigned long long axisLock;
@property (nonatomic) unsigned long long overrideLockAxis;
@property (nonatomic) double lastAxisLockTime;
@property (nonatomic) struct CGVector { double dx; double dy; } lastOffset;
@property (retain, nonatomic) NSDate *timeForLastDirectionalChange;
@property (nonatomic) struct CGPoint { double x; double y; } lastTransformedPoint;
@property (nonatomic) struct CGPoint { double x; double y; } panBeginTouchPosition;
@property (nonatomic) struct CGPoint { double x; double y; } lastDirectionChangeTouchPosition;
@property (retain, nonatomic) NSDate *panBeginTime;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (weak, nonatomic) id<_UIPlatterMenuPanningTransformerDelegate> delegate;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } offset;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } velocity;
@property (nonatomic) double minimumXVelocityForAxisLock;

+ (id)transformerWithAxisTransitionZonePosition:(struct CGPoint { double x0; double x1; })a0 axisTransitionZoneSize:(struct CGSize { double x0; double x1; })a1;

- (void).cxx_destruct;
- (void)_enterYLockedState;
- (void)didBeginPanningWithTouchPosition:(struct CGPoint { double x0; double x1; })a0 currentTransformedPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)didEndPanningWithTouchPosition:(struct CGPoint { double x0; double x1; })a0 currentTransformedPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)didPanWithTouchPosition:(struct CGPoint { double x0; double x1; })a0 currentTransformedPosition:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithAxisTransitionZonePosition:(struct CGPoint { double x0; double x1; })a0 axisTransitionZoneSize:(struct CGSize { double x0; double x1; })a1;
- (void)lockIntoYAxis;
- (double)timeIntervalSinceLastDirectionChange;

@end
