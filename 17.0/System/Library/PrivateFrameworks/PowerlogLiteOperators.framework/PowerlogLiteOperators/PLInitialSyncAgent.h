@class PLXPCListenerOperatorComposition;

@interface PLInitialSyncAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (id)entryEventIntervalDefinitions;
+ (void)load;

- (void)initOperatorDependancies;
- (void)logInitialSyncFromEvent:(id)a0;
- (void)logInitialSyncActivityFromEvent:(id)a0;
- (void).cxx_destruct;

@end
