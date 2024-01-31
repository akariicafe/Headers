@class NSString;

@interface ATXDigestOnboardingSuggestionMetrics : _ATXCoreAnalyticsMetric

@property (retain, nonatomic) NSString *sessionUUID;
@property (retain, nonatomic) NSString *outcome;
@property (nonatomic) double timeToResolution;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end
