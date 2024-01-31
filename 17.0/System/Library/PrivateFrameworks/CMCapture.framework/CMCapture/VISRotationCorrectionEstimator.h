@class HighPassIIR2FilterFloat3;

@interface VISRotationCorrectionEstimator : NSObject {
    float _timeScale;
    BOOL _isInitialized;
    double _prevTime;
    struct { void /* unknown type, empty encoding */ vector; } _prevRotation;
    void /* unknown type, empty encoding */ _accumulatedCorrection;
    HighPassIIR2FilterFloat3 *highPassFilter1;
    HighPassIIR2FilterFloat3 *highPassFilter2;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ estimatedCorrection;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithTimeScale:(float)a0;
- (void)updateWithRotation:(struct { })a0 atTime:(double)a1;

@end
