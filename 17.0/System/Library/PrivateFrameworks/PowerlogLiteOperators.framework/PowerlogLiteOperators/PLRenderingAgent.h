@class FBSDisplayLayoutMonitor, NSString, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition, NSNumber;

@interface PLRenderingAgent : PLAgent <FBSDisplayLayoutObserver>

@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor;
@property (retain) PLEntryNotificationOperatorComposition *pluggedInStateNotification;
@property unsigned int lastFrameCount;
@property (retain) NSNumber *deviceIsPlugged;
@property (retain) PLXPCListenerOperatorComposition *frameStatsListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventBackwardDefinitionFrameCount;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitionFrameStats;

- (id)init;
- (void)disableCAScreenTelemetry;
- (void)dealloc;
- (void)logEventForwardFrameCount:(id)a0;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)enableCAScreenTelemetry;
- (void).cxx_destruct;
- (BOOL)shouldLogFrameStats;
- (void)logFrameCount:(unsigned int)a0 forConnectedState:(BOOL)a1;
- (void)logEventBackwardFrameStats:(id)a0;
- (void)handleConnectedChange:(id)a0;

@end
