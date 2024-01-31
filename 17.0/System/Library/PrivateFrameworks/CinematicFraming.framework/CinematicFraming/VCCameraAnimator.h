@class VCCamera;

@interface VCCameraAnimator : NSObject {
    struct SpringAnimation<double, 6UL> { double stiffness; double mass; double dampRatio; struct NDVector<double, 6UL> { double arr[6]; } targetValue; struct NDVector<double, 6UL> { double arr[6]; } currValue; struct NDVector<double, 6UL> { double arr[6]; } velocity; double duration; } _animation;
}

@property (readonly, nonatomic) VCCamera *targetCamera;
@property (readonly, nonatomic) VCCamera *animatedCamera;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentTime;
@property (readonly, nonatomic) BOOL animating;
@property (readonly, nonatomic) float duration;

- (id)init;
- (void)reset;
- (id).cxx_construct;
- (void)stop;
- (void).cxx_destruct;
- (void)interrupt;
- (void)configureWithPreset:(unsigned long long)a0;
- (void)startAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withCamera:(id)a1;
- (void)updateToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
