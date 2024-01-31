@class NSString, NSArray;

@interface AXPhoenixClassifierConfiguration : NSObject

@property (retain, nonatomic) NSString *dataKey;
@property (retain, nonatomic) NSString *accelerometerSampleRateInHzKey;
@property (retain, nonatomic) NSString *maxAccelerationBufferSizeKey;
@property (nonatomic) unsigned long long accelerometerSampleRateInHz;
@property (nonatomic) unsigned long long maxAccelerationBufferSize;
@property (retain, nonatomic) NSString *policyKey;
@property (retain, nonatomic) NSString *modelPredictionRateInHzKey;
@property (retain, nonatomic) NSString *predictionConfidenceThresholdKey;
@property (retain, nonatomic) NSString *minDurationBetweenTriggersInSecondsKey;
@property (retain, nonatomic) NSString *maxPredictionBufferSizeKey;
@property (nonatomic) unsigned long long modelPredictionRateInHz;
@property (nonatomic) double predictionConfidenceThreshold;
@property (nonatomic) unsigned long long minDurationBetweenTriggersInSeconds;
@property (nonatomic) unsigned long long maxPredictionBufferSize;
@property (retain, nonatomic) NSString *predictionCountThresholdsKey;
@property (retain, nonatomic) NSString *doubleTapPolicyKey;
@property (retain, nonatomic) NSString *tripleTapPolicyKey;
@property (retain, nonatomic) NSString *generalPolicyKey;
@property (retain, nonatomic) NSString *predictionClassNoneKey;
@property (retain, nonatomic) NSString *predictionClassDoubleTapKey;
@property (retain, nonatomic) NSString *predictionClassTripleTapKey;
@property (retain, nonatomic) NSArray *doubleTapPolicyThresholds;
@property (retain, nonatomic) NSArray *tripleTapPolicyThresholds;
@property (retain, nonatomic) NSArray *generalPolicyThresholds;

- (id)init;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)a0 missingKeys:(id)a1;
- (void)_initializeKeys;
- (void)_parseFromDictionary:(id)a0 missingKeys:(id)a1;
- (void)_setDefaultConfiguration;

@end
