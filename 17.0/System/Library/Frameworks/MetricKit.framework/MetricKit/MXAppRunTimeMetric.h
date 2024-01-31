@class NSMeasurement;

@interface MXAppRunTimeMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeForegroundTime;
@property (readonly) NSMeasurement *cumulativeBackgroundTime;
@property (readonly) NSMeasurement *cumulativeBackgroundAudioTime;
@property (readonly) NSMeasurement *cumulativeBackgroundLocationTime;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithCumulativeForegroundTimeMeasurement:(id)a0 cumulativeBackgroundTimeMeasurement:(id)a1 cumulativeBackgroundAudioTimeMeasurement:(id)a2 cumulativeBackgroundLocationTimeMeasurement:(id)a3;

@end
