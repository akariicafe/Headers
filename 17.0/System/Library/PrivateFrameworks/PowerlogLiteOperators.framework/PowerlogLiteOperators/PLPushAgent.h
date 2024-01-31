@class PLTimer, NSMutableDictionary, PLXPCListenerOperatorComposition, NSDate;

@interface PLPushAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *receivedPushListener;
@property (retain) PLXPCListenerOperatorComposition *sentPushListener;
@property (retain) PLXPCListenerOperatorComposition *suppressedPushesListener;
@property (retain) PLXPCListenerOperatorComposition *sentKeepAliveListener;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property unsigned long long numKeepAlives;
@property (retain) PLXPCListenerOperatorComposition *apsdConnectedListener;
@property (retain) NSMutableDictionary *pushUsageDict;
@property (retain) NSDate *detectionStartTime;
@property (retain) PLXPCListenerOperatorComposition *messageSentListener;
@property (retain) PLXPCListenerOperatorComposition *messageReceivedListener;

+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionsReceivedPush;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)bundleIdFromTopic:(id)a0;
+ (id)entryAggregateDefinitionAPSDConnected;
+ (id)entryAggregateDefinitionSentPushes;
+ (id)entryAggregateDefinitionSuppressedPushes;
+ (id)entryEventPointDefinitionMessage;
+ (id)entryEventPointDefinitionMessageReceived;
+ (id)entryEventPointDefinitionMessageSent;
+ (id)entryEventPointDefinitionsAPSDConnectedEvent;
+ (id)entryEventPointDefinitionsSentKeepAlive;
+ (id)entryEventPointDefinitionsSentPush;
+ (BOOL)isHighPriorityPushEntry:(id)a0;
+ (id)replaceConnectionTypeWithEnum:(id)a0;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)sendEnergyIssueSignatureNotification:(id)a0 withThreshold:(double)a1;
- (void).cxx_destruct;
- (void)handleMessageEvent:(id)a0 isSentEvent:(BOOL)a1;
- (void)accountReceivedPushWithEntry:(id)a0;
- (void)checkPushUsage:(id)a0 withPLEntry:(id)a1;
- (void)logAggregateSuppressedPushes:(id)a0;

@end
