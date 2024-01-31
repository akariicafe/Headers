@class NSString;

@interface ATXHomeScreenFocusSuggestionMetrics : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *modeSemanticType;
@property (nonatomic) long long outcome;

- (id)metricName;
- (id)description;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)outcomeToString:(long long)a0;
- (unsigned long long)cappedForPrivacyWithValue:(long long)a0;

@end
