@class NSString;

@interface ATXLockscreenWidgetSuggestionMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *extensionBundleId;
@property (nonatomic) unsigned long long family;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) unsigned long long reason;
@property (nonatomic) BOOL outcome;
@property (nonatomic) long long numEngaged;
@property (copy, nonatomic) NSString *sessionId;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end
