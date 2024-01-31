@class PLXPCListenerOperatorComposition;

@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *asrEventListener;
@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionDetectedListener;
@property (retain) PLXPCListenerOperatorComposition *selfTriggerSuppressionProcessingListener;
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener;
@property (retain) PLXPCListenerOperatorComposition *siriConfigListener;

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventForwardASREvent;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalSelfTriggerSuppression;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitionDictationConnection;
+ (id)entryEventPointDefinitionSiriWakes;
+ (id)entryEventForwardDefinitionSiriConfig;
+ (id)entryEventPointSelfTriggerSuppressionDetected;

- (void)logEventForwardASREvent:(id)a0;
- (id)init;
- (unsigned long long)convertSiriEvent:(id)a0;
- (void)log;
- (void)initOperatorDependancies;
- (unsigned long long)convertMode:(id)a0;
- (void)logEventForwardDictationConnection:(id)a0;
- (void)logEventForwardSiriConfig:(id)a0;
- (void)logEventPointSiriWakes:(id)a0;
- (void)logEventPointSelfTriggerSuppressionDetected:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)convertASREvent:(id)a0;
- (void)logEventIntervalSelfTriggerSuppression:(id)a0;
- (unsigned long long)convertRecognition:(id)a0;

@end
