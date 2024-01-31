@class NSString;

@interface HMAccessorySettingsMessageDispatcherFinishSendingMessageEvent : HMCoreAnalyticsTimedMetricEvent

@property (readonly) NSString *messageName;

- (id)eventPayload;
- (void).cxx_destruct;
- (id)initWithMessageName:(id)a0;

@end
