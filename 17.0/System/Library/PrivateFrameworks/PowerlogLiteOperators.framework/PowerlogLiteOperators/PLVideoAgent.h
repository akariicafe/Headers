@class PLXPCListenerOperatorComposition;

@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *notification;
@property (retain) PLXPCListenerOperatorComposition *cMFileListener;
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener;
@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener;
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener;
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)stateEnumForStateString:(id)a0;
+ (id)entryEventIntervalDefinitionGroupSession;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)logEventBackwardCMHlsWithEntry:(id)a0;
- (void)logEventBackwardVTSessionWithEntry:(id)a0;
- (void)logEventIntervalGroupSession:(id)a0;
- (void).cxx_destruct;
- (void)logEventBackwardCMFileWithEntry:(id)a0;
- (void)logEventBackwardCMCrabsWithEntry:(id)a0;
- (void)logEventForwardVideoWithEntry:(id)a0;

@end
