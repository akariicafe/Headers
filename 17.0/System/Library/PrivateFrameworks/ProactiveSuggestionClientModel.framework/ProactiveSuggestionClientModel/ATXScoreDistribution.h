@class NSMutableArray;

@interface ATXScoreDistribution : NSObject {
    NSMutableArray *_scores;
    double _sum;
}

@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double standardDeviation;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)enumerateAsHistogramWithNumberOfBins:(unsigned long long)a0 binHandler:(id /* block */)a1;
- (BOOL)isEqualToATXDeviceLevelMetricsScoreDistribution:(id)a0;
- (void)recordScore:(double)a0;

@end
