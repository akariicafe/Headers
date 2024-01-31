@interface PXStatsCalculator : NSObject {
    double _sum;
    double _squareSum;
}

@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double standardDeviation;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double first;

- (id)init;
- (void)addValue:(double)a0;

@end
