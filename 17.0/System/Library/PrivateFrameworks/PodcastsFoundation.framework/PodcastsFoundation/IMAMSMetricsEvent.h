@class NSString;

@interface IMAMSMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *pageType;

- (id)init;
- (id)eventType;
- (void)setEventType:(id)a0;

@end
