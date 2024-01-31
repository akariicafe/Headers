@class NSString, HDProfile, HDDemoDataGeneratorState;

@interface HDHRAFibBurdenDemoDataGenerator : NSObject <HDDemoDataObjectGenerator> {
    HDProfile *_profile;
    HDDemoDataGeneratorState *_generatorState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double nextAFibBurdenSampleTime;
@property (nonatomic) double nextHeartbeatSeriesSampleTime;
@property (nonatomic) double heartbeatSeriesSampleFrequency;
@property (nonatomic) BOOL aFibHistoryFeatureOnboarded;
@property (nonatomic) double percentAFibChance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)generateFirstRunObjectsForDemoPerson:(id)a0 firstDate:(id)a1 objectCollection:(id)a2;
- (void)generateObjectsForDemoPerson:(id)a0 fromTime:(double)a1 toTime:(double)a2 currentDate:(id)a3 objectCollection:(id)a4;
- (void)setDemoDataGenerationContextWithProfile:(id)a0 generatorState:(id)a1;
- (void)_completeAFibHistoryOnboardingIfNecessaryForDemoPerson:(id)a0 date:(id)a1;
- (id)_currentDateFromCurrentTime:(double)a0;
- (void)_generateAFibBurdenSamplesForDemoPerson:(id)a0 lastTime:(double)a1 atTime:(double)a2 sampleDate:(id)a3 objectCollection:(id)a4;
- (void)_generateTachogramSamplesForDemoPerson:(id)a0 lastTime:(double)a1 atTime:(double)a2 sampleDate:(id)a3 objectCollection:(id)a4;
- (id)_metadataForSampleWithPercentage:(double)a0;
- (double)_randomlySelectedGaussianWithMean:(double)a0 deviation:(double)a1;
- (void)_setDataTypeAsFavorite;

@end
