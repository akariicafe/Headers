@interface TabOverviewInterpolatedLocation : NSObject {
    struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } _instantaneousTargetLocation;
    struct CGPoint { double x; double y; } _interactionFixedPoint;
    BOOL _interactionIncludesScale;
    BOOL _interacting;
    double _interactionLogScaleVelocity;
    double _previousInteractionLogScaleVelocity;
    struct CGPoint { double x; double y; } _interactionVelocity;
    double _lastInteractionTimestamp;
    struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } _lastRenderedLocation;
    struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } _interactionLocation;
}

@property (readonly, nonatomic) struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } location;
@property (nonatomic) struct { struct CGPoint { double x; double y; } offset; double zOffset; double logScale; } targetLocation;
@property (nonatomic) double minimumTranslationSpeed;
@property (nonatomic) double decelerationFactor;

- (id)description;
- (void)resetToLocation:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; })a0;
- (void)endInteraction;
- (BOOL)isInSteadyStateWithConstraints:(id /* block */)a0;
- (void)beginInteractionAtTime:(double)a0;
- (double)decelerationFactorForTargetLocation:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; })a0;
- (void)endInteractionWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithLocation:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; })a0 decelerationFactor:(double)a1;
- (BOOL)interpolateByTimeInterval:(double)a0 roundingAtSize:(struct CGSize { double x0; double x1; })a1 zScaleFactor:(double)a2 withHorizontalBounceFactor:(double)a3 verticalBounceFactor:(double)a4 constraints:(id /* block */)a5;
- (BOOL)isInSteadyStateWithConstraints:(id /* block */)a0 epsilon:(double)a1;
- (void)moveBy:(struct CGPoint { double x0; double x1; })a0 atTime:(double)a1;
- (void)moveInstantaneouslyBy:(struct CGPoint { double x0; double x1; })a0;
- (void)moveLogScaleBy:(double)a0 centeringOffset:(struct CGPoint { double x0; double x1; })a1 withLastCenteringOffset:(struct CGPoint { double x0; double x1; })a2 atTime:(double)a3;
- (void)moveLogScaleBy:(double)a0 centeringOffset:(struct CGPoint { double x0; double x1; })a1 withLastCenteringOffset:(struct CGPoint { double x0; double x1; })a2 atTime:(double)a3 shiftLocation:(BOOL)a4;
- (void)resetRenderedLocation;
- (void)shiftTargetLocation:(struct { struct CGPoint { double x0; double x1; } x0; double x1; double x2; })a0;

@end
