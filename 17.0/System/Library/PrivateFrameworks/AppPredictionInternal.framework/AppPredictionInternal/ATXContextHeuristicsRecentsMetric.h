@class NSString;

@interface ATXContextHeuristicsRecentsMetric : _ATXCoreAnalyticsMetric

@property (copy, nonatomic) NSString *recentType;
@property (nonatomic) unsigned long long recentAge;
@property (nonatomic) unsigned long long numEngaged;
@property (nonatomic) unsigned long long numSearched;
@property (copy, nonatomic) NSString *trialDeploymentId;
@property (copy, nonatomic) NSString *trialExperimentId;
@property (copy, nonatomic) NSString *trialTreatmentId;

- (id)metricName;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;

@end
