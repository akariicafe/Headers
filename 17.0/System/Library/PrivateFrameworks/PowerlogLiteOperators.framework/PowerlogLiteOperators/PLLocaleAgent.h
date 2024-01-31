@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)accountingGroupDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)railDefinitions;

- (id)init;
- (void)logEventForwardTimeZone;
- (void)log;
- (void)initOperatorDependancies;
- (void)logTimeZoneEntry:(id)a0;
- (void).cxx_destruct;
- (void)logEventForwardTimeZoneWithTrigger:(id)a0;

@end
