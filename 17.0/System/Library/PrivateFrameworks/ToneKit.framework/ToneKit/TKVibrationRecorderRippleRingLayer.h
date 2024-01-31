@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer {
    double _creationTimestamp;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } normalizedRingLocation;
@property (readonly, nonatomic) double ringSpeed;

- (id)init;
- (void)reset;
- (void)configureWithTimeIntervalSinceCreation:(double)a0 normalizedRingLocation:(struct CGPoint { double x0; double x1; })a1 ringSpeed:(double)a2;
- (double)timeIntervalSinceCreation;

@end
