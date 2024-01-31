@class NSNumberFormatter;

@interface _HKAxisLabelDimensionBloodGlucosePercentInRange : NSObject <HKAxisLabelDimension>

@property (readonly, nonatomic) NSNumberFormatter *formatter;

- (id)init;
- (void).cxx_destruct;
- (id)endingLabelsFactorOverride;
- (id)formatterForLabelStepSize:(double)a0;
- (double)niceStepSizeLargerThan:(double)a0;
- (id)stringForLocation:(id)a0 formatterForStepSize:(id)a1;
- (double)ticksPerStepSize:(double)a0;

@end
