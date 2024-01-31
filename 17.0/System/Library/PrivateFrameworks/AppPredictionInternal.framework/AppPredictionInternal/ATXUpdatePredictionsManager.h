@class ATXMLActionProducer, ATXUpdatePredictionsSources, ATXServer, ATXUpdatePredictionsLogger, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUpdatePredictionsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) ATXMLActionProducer *actionProducer;
@property (readonly, nonatomic) ATXUpdatePredictionsSources *updateSources;
@property (readonly, nonatomic) ATXUpdatePredictionsLogger *updatePredictionsLogger;
@property (retain, nonatomic) ATXServer *atxServer;

+ (id)sharedInstance;
+ (BOOL)shouldOverrideRefreshRateForDisabledConsumerSubTypesForReason:(unsigned long long)a0;
+ (id)homeScreenPageConfigs;

- (void)processSpotlightAppFeedback;
- (id)init;
- (id)disabledConsumerSubTypes;
- (void)refreshActionPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)logPredictionUpdatesForBoxedAppConsumerSubTypes:(id)a0 actionConsumerSubTypes:(id)a1 reason:(unsigned long long)a2;
- (void)processHomeScreenFeedback;
- (void)processSpotlightAppFeedbackNoSync;
- (void)processHomeScreenFeedbackNoSync;
- (void)refreshAppPredictionsWithConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)updateBehavioralPredictionsIfOlderThan:(double)a0 reason:(unsigned long long)a1;
- (id)initWithATXServer:(id)a0 actionProducer:(id)a1 updateSources:(id)a2 updatePredictionsLogger:(id)a3;
- (void)processAppDirectoryFeedback;
- (void)processSpotlightActionFeedback;
- (id)appConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (id)_stringArrayFromBoxedConsumerSubTypeArray:(id)a0;
- (void)processLockscreenFeedbackNoSync;
- (id)actionConsumerSubTypesToUpdateWithRefreshRate:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (void).cxx_destruct;
- (void)processSpotlightActionFeedbackNoSync;
- (void)processLockscreenFeedback;
- (id)disabledConsumerSubTypesWithHomeScreenPageConfigs:(id)a0;
- (void)processAppDirectoryFeedbackNoSync;

@end
