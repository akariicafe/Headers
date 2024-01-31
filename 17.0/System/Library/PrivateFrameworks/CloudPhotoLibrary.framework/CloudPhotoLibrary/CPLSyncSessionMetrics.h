@class NSDictionary;

@interface CPLSyncSessionMetrics : NSObject

@property (copy, nonatomic) NSDictionary *metricsDict;

- (id)init;
- (void).cxx_destruct;
- (void)incrementCountForKey:(id)a0;
- (id)initWithMetricsDict:(id)a0;

@end
