@class NSString;

@interface ATXModeSetupExperienceMetrics : NSObject

@property (copy, nonatomic) NSString *modeSemanticType;
@property (nonatomic) long long onboardingOutcome;

- (id)metricName;
- (id)description;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)outcomeToString:(long long)a0;
- (void)sendToCoreAnalytics;

@end
