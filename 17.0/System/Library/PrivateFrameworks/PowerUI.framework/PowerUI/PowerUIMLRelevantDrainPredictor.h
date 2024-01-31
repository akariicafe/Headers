@class NSString, PowerUITrialManager, MLModel, NSObject;
@protocol _CDLocalContext, OS_os_log, _DKKnowledgeQuerying;

@interface PowerUIMLRelevantDrainPredictor : NSObject

@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadModelLock;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double threshold;
@property (readonly, retain, nonatomic) MLModel *relevantDrainPredictorModel;

- (void).cxx_destruct;
- (void)addStatisticalSummaryFeaturesintoFeatureDictionary:(id)a0 forDataFrame:(id)a1 withFeatureNameSuffix:(id)a2 whereDimension:(id)a3 isFilteredWithHandler:(id /* block */)a4;
- (id)analyticsEventFromFeatures:(id)a0;
- (id)featuresForChargeSessionAtDate:(id)a0 withChargeStartSoC:(id)a1 withChargeAndDrainSessionHistory:(id)a2;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1 withKnowledgeStore:(id)a2 withTrialManager:(id)a3;
- (BOOL)isStartSecondsValue:(double)a0 withinDynamicBinWindowOfLength:(int)a1 aroundCurrentStartSecondValue:(double)a2;
- (BOOL)isStartSoCValue:(double)a0 withinDynamicBinWindowOfLength:(int)a1 aroundCurrentStartSoCValue:(double)a2;
- (id)predictedRelevantDrainAfterChargeSessionAtDate:(id)a0 withChargeStartSoC:(id)a1;
- (id)predictedRelevantDrainwithFeatures:(id)a0;

@end
