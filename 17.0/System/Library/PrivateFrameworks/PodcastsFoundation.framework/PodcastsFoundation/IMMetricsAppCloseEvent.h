@class NSString;

@interface IMMetricsAppCloseEvent : IMAMSMetricsEvent

@property (retain, nonatomic) NSString *exitURL;

- (id)initWithReason:(long long)a0;
- (void)setExitTypeWithSuspendReason:(long long)a0;

@end
