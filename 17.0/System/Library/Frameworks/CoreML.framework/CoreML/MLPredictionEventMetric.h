@class NSDictionary, NSString, NSNumber;

@interface MLPredictionEventMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *modelName;
@property (readonly, nonatomic) NSNumber *firstPartyExecutable;
@property (readonly, nonatomic) NSNumber *modelType;
@property (readonly, nonatomic) double featuresPredictionDuration;
@property (readonly, nonatomic) long long featuresPredictionCountSoFar;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 modelName:(id)a1 firstPartyExecutable:(id)a2 modelType:(id)a3 featuresPredictionDuration:(double)a4 featuresPredictionCountSoFar:(long long)a5;

@end
