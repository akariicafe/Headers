@class HKQuantity, NSDateInterval;

@interface HKChartSummaryTrendSpan : NSObject

@property (readonly, nonatomic) NSDateInterval *trendDateInterval;
@property (readonly, nonatomic) HKQuantity *trendAverage;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTrendDateInterval:(id)a0 trendAverage:(id)a1;

@end
