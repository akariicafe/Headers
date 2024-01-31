@class CBGrimaldiModule;

@interface AABRear : CBModule {
    CBGrimaldiModule *_Grimaldi;
    BOOL _started;
    BOOL _sensorEnabled;
    float _frontALSThreshold;
    float _rearALSThreshold;
    float _luxRatioThreshold;
    float _nitsRatioThreshold;
    float _lastFrequency;
    float _activationFLux;
}

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)start;
- (void)unregisterNotificationBlock;
- (void)stop;
- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)checkSensorEnablementConditions:(float)a0;
- (id)copyParam:(id)a0;
- (void)evaluateSamplingFrequencyWithLux:(float)a0 andCap:(float)a1;
- (id)initWithGrimaldi:(id)a0;
- (float)nitsRatio;
- (BOOL)shouldUseRLux:(float)a0 rLux:(float)a1;
- (BOOL)shouldUseRearLuxFrontLux:(float)a0 rearLux:(float)a1 andCap:(float)a2;

@end
