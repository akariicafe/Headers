@class PLSemaphore, NSMutableDictionary, PLEntryNotificationOperatorComposition;

@interface PLScheduledWakeAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *canSleepNotification;
@property (retain) PLSemaphore *canSleepSemaphore;
@property (retain) NSMutableDictionary *previousScheduleWakeEvents;

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
- (void)log;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)humanReadableScheduledWakeString:(id)a0;
- (void)logEventForwardScheduledEvent;

@end
