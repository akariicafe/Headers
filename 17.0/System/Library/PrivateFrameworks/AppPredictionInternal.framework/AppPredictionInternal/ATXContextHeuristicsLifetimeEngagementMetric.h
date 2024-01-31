@class NSString;

@interface ATXContextHeuristicsLifetimeEngagementMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *actionId;
@property (copy, nonatomic) NSString *contextType;
@property (nonatomic) unsigned long long numShown;
@property (nonatomic) unsigned long long numEngaged;
@property (copy, nonatomic) NSString *trialDeploymentId;
@property (copy, nonatomic) NSString *trialExperimentId;
@property (copy, nonatomic) NSString *trialTreatmentId;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end
