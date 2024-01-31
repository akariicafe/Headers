@class HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData;

@interface HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent : HMMLogEvent

@property (readonly, nonatomic) HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData *analyticsData;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;

@end
