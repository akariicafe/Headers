@interface HKAxisLabelDimensionScalar : NSObject <HKAxisLabelDimension>

+ (long long)_fractionDigitsForStep:(double)a0;

- (id)endingLabelsFactorOverride;
- (id)formatterForLabelStepSize:(double)a0;
- (double)niceStepSizeLargerThan:(double)a0;
- (id)stringForLocation:(id)a0 formatterForStepSize:(id)a1;
- (double)ticksPerStepSize:(double)a0;

@end
