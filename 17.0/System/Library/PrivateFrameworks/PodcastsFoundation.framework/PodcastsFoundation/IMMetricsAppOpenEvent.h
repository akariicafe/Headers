@class NSString;

@interface IMMetricsAppOpenEvent : IMAMSMetricsEvent

@property (retain, nonatomic) NSString *referringAppName;
@property (retain, nonatomic) NSString *referringURL;

- (id)initWithReason:(long long)a0;
- (void)setEnterTypeWithLaunchReason:(long long)a0;

@end
