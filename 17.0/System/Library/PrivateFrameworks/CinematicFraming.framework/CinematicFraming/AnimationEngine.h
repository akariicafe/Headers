@interface AnimationEngine : NSObject {
    float _targetPosition;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastAnimationDriveTime;
    double _animationDuration;
    unsigned long long _animationOptions;
}

@property (nonatomic) float position;
@property (nonatomic) float velocity;

- (void)_resetAnimations;
- (void)animateWithDuration:(double)a0 toTarget:(float)a1 options:(unsigned long long)a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)driveAnimationAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withConstraints:(struct AnimationEngineAnimationConstraints { struct MotionConstraints { float x0; float x1; } x0; struct MotionConstraints { float x0; float x1; } x1; struct MotionConstraints { float x0; float x1; } x2; })a1 withMultiplier:(float)a2;
- (id)initWithInitialPosition:(float)a0;

@end
