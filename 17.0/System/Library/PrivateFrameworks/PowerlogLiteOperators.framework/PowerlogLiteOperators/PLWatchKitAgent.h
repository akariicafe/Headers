@class PLXPCListenerOperatorComposition;

@interface PLWatchKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler;

+ (void)load;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)appNameForWatchAppExtension:(id)a0;

@end
