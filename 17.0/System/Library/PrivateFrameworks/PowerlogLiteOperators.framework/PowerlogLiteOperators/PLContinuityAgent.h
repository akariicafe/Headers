@interface PLContinuityAgent : PLAgent

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (long long)unlockPeerTypeStringToEnum:(id)a0;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionAutoUnlock;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;

@end
