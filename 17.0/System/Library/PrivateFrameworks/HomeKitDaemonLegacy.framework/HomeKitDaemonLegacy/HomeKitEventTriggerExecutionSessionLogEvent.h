@class HMDAnalyticsEventTriggerExecutionSessionData;

@interface HomeKitEventTriggerExecutionSessionLogEvent : HMMLogEvent

@property (readonly, nonatomic) HMDAnalyticsEventTriggerExecutionSessionData *analyticsData;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;

@end
