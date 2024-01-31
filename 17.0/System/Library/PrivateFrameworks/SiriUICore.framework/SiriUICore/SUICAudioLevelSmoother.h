@interface SUICAudioLevelSmoother : NSObject {
    long long _historyLength;
    long long _samplesSinceLastCleared;
    float *_runningPowerLevels;
    unsigned int _powerPointer;
    float _previousLevel;
    float _attackVelocity;
    float _decayVelocity;
}

@property (readonly, nonatomic) BOOL usesExponentialCurve;
@property (readonly, nonatomic) BOOL usesAttackAndDecaySpeed;
@property (nonatomic) float minimumPower;
@property (nonatomic) float maximumPower;
@property (nonatomic) float attackSpeed;
@property (nonatomic) float decaySpeed;
@property (nonatomic) float baseValue;
@property (nonatomic) float exponentMultiplier;

- (void)dealloc;
- (void)clearHistory;
- (id)_initWithHistoryLength:(long long)a0;
- (float)_updateMedianWithNewValue:(float)a0;
- (id)initWithBaseValue:(float)a0 exponentMultiplier:(float)a1 historyLength:(long long)a2;
- (id)initWithMinimumPower:(float)a0 maximumPower:(float)a1 historyLength:(long long)a2;
- (id)initWithMinimumPower:(float)a0 maximumPower:(float)a1 historyLength:(long long)a2 attackSpeed:(float)a3 decaySpeed:(float)a4;
- (float)smoothedLevelForMicPower:(float)a0;

@end
