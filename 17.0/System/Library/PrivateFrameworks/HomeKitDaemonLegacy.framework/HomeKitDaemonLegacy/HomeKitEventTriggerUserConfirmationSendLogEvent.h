@class HMDAnalyticsEventTriggerUserConfirmationSendData;

@interface HomeKitEventTriggerUserConfirmationSendLogEvent : HMMLogEvent

@property (readonly, nonatomic) HMDAnalyticsEventTriggerUserConfirmationSendData *analyticsData;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;

@end
