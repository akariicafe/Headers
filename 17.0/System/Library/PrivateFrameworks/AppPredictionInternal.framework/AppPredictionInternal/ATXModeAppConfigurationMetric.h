@class NSString;

@interface ATXModeAppConfigurationMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *modeSemanticType;

- (id)metricName;
- (id)description;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end
