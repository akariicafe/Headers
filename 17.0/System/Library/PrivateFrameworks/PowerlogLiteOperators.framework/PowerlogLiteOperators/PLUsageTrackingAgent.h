@class USUsageReporter;

@interface PLUsageTrackingAgent : PLAgent

@property (retain) USUsageReporter *usageReporter;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitionUsageTime;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;

- (id)init;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)logEventIntervalUsageTime;
- (void).cxx_destruct;
- (void)logEntriesFromUsageReports:(id)a0;

@end
