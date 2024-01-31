@class NSNumber, HKValueRange;

@interface HKNumericMinimumRangeAxisScalingRule : HKAbstractMinimumRangeScalingRule <HKInteractiveChartNumericDefaultAxisBoundsProvider> {
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

@property (retain, nonatomic) HKValueRange *noDataAxisBounds;

+ (id)ruleWithDefaultYAxisRange:(double)a0 axisRangeOverrides:(id)a1;
+ (id)ruleWithDefaultYAxisRange:(double)a0 minimumValue:(id)a1 maximumValue:(id)a2 axisRangeOverrides:(id)a3;
+ (id)ruleWithDefaultYAxisRange:(double)a0 minimumValue:(id)a1 maximumValue:(id)a2 axisRangeOverrides:(id)a3 noDataAxisBounds:(id)a4;

- (id)description;
- (void).cxx_destruct;
- (id)noDataStartingRange;

@end
