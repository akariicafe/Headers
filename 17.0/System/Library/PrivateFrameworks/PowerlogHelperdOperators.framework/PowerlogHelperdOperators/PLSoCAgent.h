@interface PLSoCAgent : PLAgent

+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryAggregateDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionLifetimeServoStats;

- (id)init;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)taskingEndNotificationReceived:(id)a0;
- (id)requestLTSStats;
- (void)logEventPointLifetimeServoStats:(id)a0;
- (void)registerForTaskingEndNotification;
- (void)registerForTaskingStartNotification;
- (void)taskingStartNotificationReceived:(id)a0;

@end
