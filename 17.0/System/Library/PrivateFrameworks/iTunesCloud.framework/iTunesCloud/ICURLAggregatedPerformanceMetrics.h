@class NSArray;

@interface ICURLAggregatedPerformanceMetrics : NSObject

@property (retain, nonatomic) NSArray *urlMetrics;
@property (readonly, nonatomic) BOOL isNotEmpty;
@property (readonly, nonatomic) double networkTime;

+ (id)aggregatedMetricsFromAggregatedMetrics:(id)a0 addingAggregatedMetrics:(id)a1;
+ (id)aggregatedMetricsFromAggregatedMetrics:(id)a0 addingMetrics:(id)a1;

- (void).cxx_destruct;
- (id)initWithURLMetrics:(id)a0;

@end
