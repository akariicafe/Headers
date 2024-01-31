@interface PLSCDynamicStoreAgent : PLAgent

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)networkLinkQualityChanged:(struct __SCDynamicStore { } *)a0 withChangedKeys:(id)a1;

@end
