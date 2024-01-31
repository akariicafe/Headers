@class NSArray;

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator {
    struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { unsigned int __x_; } _generator;
    struct normal_distribution<double> { struct param_type { double __mean_; double __stddev_; } __p_; double __v_; BOOL __v_hot_; } _distribution;
    NSArray *_pseudoRandomDoubles;
}

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_pseudoRandomDoubles;
- (double)computeNoiseFromTime:(double)a0 stdDev:(double)a1;
- (double)computeStatisticalTimeFromCurrentTime:(double)a0 mean:(double)a1 stdDev:(double)a2;
- (double)pseudoRandomDoubleFromTime:(double)a0;
- (double)randomDoubleFromGenerator;
- (double)randomSampleFromNormalDistributionWithMean:(double)a0 stdDev:(double)a1;
- (void)setupWithDemoDataGenerator:(id)a0;

@end
