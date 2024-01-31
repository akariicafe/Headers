@class PLXPCListenerOperatorComposition;

@interface PLHealthKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *queryHandler;
@property (retain) PLXPCListenerOperatorComposition *cloudSyncHandler;

+ (void)load;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void).cxx_destruct;

@end
