@class _ATXCoreAnalyticsDimensionSet;

@interface _ATXCoreAnalyticsMetric : NSObject

@property (readonly, nonatomic) _ATXCoreAnalyticsDimensionSet *dimensionSet;

- (id)metricName;
- (id)init;
- (id)coreAnalyticsDictionary;
- (void).cxx_destruct;
- (id)initWithDimensions:(id)a0;
- (void)logToCoreAnalytics;
- (id)coreAnalyticsDictionaryWithDimensions;

@end
