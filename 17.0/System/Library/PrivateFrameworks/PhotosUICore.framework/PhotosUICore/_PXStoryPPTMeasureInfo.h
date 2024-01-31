@class PXStatsCalculator;

@interface _PXStoryPPTMeasureInfo : NSObject

@property (readonly, nonatomic) long long metric;
@property (readonly, nonatomic) PXStatsCalculator *statistics;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetric:(long long)a0;

@end
