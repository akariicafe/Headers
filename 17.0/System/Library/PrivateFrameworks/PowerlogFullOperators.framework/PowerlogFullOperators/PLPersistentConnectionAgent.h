@class PLCFNotificationOperatorComposition;

@interface PLPersistentConnectionAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *intervalChangedNotification;
@property (readonly) PLCFNotificationOperatorComposition *preferencesChangedNotification;

+ (id)defaults;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;

- (id)init;
- (long long)pollingInterval;
- (void)log;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)logEventForwardConfig;
- (void)logEventPointCache;
- (BOOL)pushEnabled;

@end
