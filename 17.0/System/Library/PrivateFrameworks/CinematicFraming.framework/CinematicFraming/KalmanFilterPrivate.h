@interface KalmanFilterPrivate : NSObject {
    void /* unknown type, empty encoding */ _stateEstimate;
    struct { void /* unknown type, empty encoding */ columns[3]; } _covarianceEstimate;
    float _previousObservation;
    float _previousVelocity;
    float _previousAcceleration;
    struct { void /* unknown type, empty encoding */ columns[3]; } _stateTransitionModel;
    void /* unknown type, empty encoding */ _observationModel;
    float _observationMean;
    float _observationMeanSquared;
    void /* unknown type, empty encoding */ _noiseScaling;
    void /* unknown type, empty encoding */ _noiseBase;
    BOOL _isFirstObservation;
}

@property (nonatomic) float trailingAlpha;
@property (nonatomic) float measurementNoise;

- (id)init;
- (void)_update:(float)a0;
- (float)covariance;
- (void)addObservation:(float)a0;
- (void)_predict:(SEL)a0;
- (float)estimatedObservation;

@end
