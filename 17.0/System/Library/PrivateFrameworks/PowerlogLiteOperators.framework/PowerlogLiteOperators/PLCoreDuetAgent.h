@class PLNSNotificationOperatorComposition, PLXPCListenerOperatorComposition, _CDInBedDetector;

@interface PLCoreDuetAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityFeaturesListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionQueryListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionTimelineListener;
@property (retain) PLXPCListenerOperatorComposition *inactivityPredictionInterruptionListener;
@property (retain) _CDInBedDetector *inBedDetector;

+ (id)entryEventIntervalDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitionInactivityPredictionQuery;
+ (id)entryEventForwardDefinitionInactivityFeatures;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardDefinitionInactivityPredictionTimeline;
+ (id)entryEventForwardDefinitionInactivityPredictionInterruption;
+ (id)entryEventIntervalDefinitionInactivityPrediction;
+ (id)entryEventIntervalDefinitionInBedDetection;

- (id)init;
- (void)handleInBedDetection:(id)a0;
- (void)logEventForwardInactivityPredictionQuery:(id)a0;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)logEventForwardInactivityFeatures:(id)a0;
- (void)logEventForwardInactivityPredictionTimeline:(id)a0;
- (void)logEventForwardInactivityPredictionInterruption:(id)a0;
- (void)logEventIntervalInactivityPrediction:(id)a0;
- (void).cxx_destruct;
- (void)registerForDailyNotification;
- (void)logEventIntervalInBedDetection:(id)a0;
- (void)registerForTaskingNotification:(id)a0;

@end
