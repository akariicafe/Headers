@class HMDAnalyticsUpdateEventTriggerData;

@interface HomeKitEventTriggerUpdateLogEvent : HMMLogEvent

@property (readonly, nonatomic) HMDAnalyticsUpdateEventTriggerData *analyticsData;

- (id)init;
- (void).cxx_destruct;

@end
