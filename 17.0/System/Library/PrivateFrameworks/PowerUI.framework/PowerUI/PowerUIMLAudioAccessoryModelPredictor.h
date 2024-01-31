@class MLModel, NSObject;
@protocol OS_os_log, _DKKnowledgeQuerying;

@interface PowerUIMLAudioAccessoryModelPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_os_log> *statusLog;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (nonatomic) int minimumDaysOfHistory;
@property (nonatomic) int minimumNumberOfPreviousConnections;
@property (readonly, nonatomic) MLModel *highUsageEngageModel;
@property (readonly, nonatomic) MLModel *highUsageRegressionModel;
@property (readonly, nonatomic) MLModel *lowUsageEngageModel;
@property (readonly, nonatomic) MLModel *lowUsageRegressionModel;
@property (readonly, nonatomic) double lastUsedLeeway;

- (BOOL)deviceHasAtLeastOneLongConnection:(id)a0 forReferenceDate:(id)a1;
- (double)historicalMeaningfulUnderchargeRate:(id)a0;
- (id)getBTConnectionEventsInDescendingOrderForPredictionUpTo:(id)a0 forDevice:(id)a1;
- (id)initWithStore:(id)a0;
- (id)getInputFeaturesForDate:(id)a0 withEvents:(id)a1 withLog:(id)a2;
- (id)chargingDecisionForDate:(id)a0 forAudioAccessory:(id)a1;
- (void).cxx_destruct;
- (id)getBTConnectionEventsUpTo:(id)a0 withMinimumDuration:(double)a1 withLimit:(unsigned int)a2 ascending:(BOOL)a3 forDevice:(id)a4;
- (id)checkForSufficientBTConnectionEventsUpTo:(id)a0 forDevice:(id)a1;
- (BOOL)isSufficientDataAvailableForEngagementForDevice:(id)a0;

@end
