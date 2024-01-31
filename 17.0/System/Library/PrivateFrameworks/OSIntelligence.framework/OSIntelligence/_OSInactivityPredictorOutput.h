@interface _OSInactivityPredictorOutput : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long confidenceLevel;
@property (nonatomic) double confidenceValue;
@property (nonatomic) double predictedDuration;
@property (nonatomic) long long outputReason;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)adjustedPredictedDurationWithStrictLeeway:(double)a0 andRelaxedLeeway:(double)a1 andMaxPredictionCap:(double)a2;
- (id)confidenceLevelString;
- (id)confidenceValueString;
- (id)initInvalidOutput;
- (id)initWithConfidenceLevel:(long long)a0 andConfidenceValue:(double)a1 andPredictedDuration:(double)a2 andReason:(long long)a3;
- (id)initWithConfidenceValue:(double)a0 andRelaxedThreshold:(double)a1 andStrictThreshold:(double)a2 andPredictedDuration:(double)a3 andReason:(long long)a4;
- (id)initWithConfidenceValue:(double)a0 andRelaxedThreshold:(double)a1 andStrictThreshold:(double)a2 andPredictedDuration:(double)a3 withReason:(long long)a4;
- (id)outputReasonString;
- (id)predictedDurationString;
- (void)safeSubtractWaitTimeFromPredictedDuration:(double)a0;

@end
