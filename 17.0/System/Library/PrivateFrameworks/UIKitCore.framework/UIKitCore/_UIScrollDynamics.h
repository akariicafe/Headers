@interface _UIScrollDynamics : NSObject

@property (nonatomic) BOOL shouldRoundCalculations;
@property (readonly, nonatomic) struct CGSize { double width; double height; } tolerance;
@property (nonatomic) struct CGPoint { double x; double y; } decelerationTarget;
@property (nonatomic) struct CGPoint { double x; double y; } initialContentOffset;
@property (nonatomic) struct CGVector { double dx; double dy; } initialVelocity;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrame;
@property (nonatomic) struct CGPoint { double x; double y; } contentOrigin;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (readonly, nonatomic) double durationUntilStop;

- (id)init;
- (void)calculateDecelerationTarget;
- (void)calculateToReachDecelerationTarget;
- (id)initWithInitialContentOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGVector { double x0; double x1; })a1 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 viewSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4;
- (BOOL)isRubberBandingAfterDuration:(double)a0;
- (struct CGPoint { double x0; double x1; })positionAfterDuration:(double)a0;
- (void)recalculateForDecelerationTarget:(struct CGPoint { double x0; double x1; })a0;
- (double)speedAfterDuration:(double)a0;
- (struct CGVector { double x0; double x1; })velocityAfterDuration:(double)a0;

@end
