@class HFNumberValueConstraints, HUElasticSliderValueNormalizationOptions;

@interface HUElasticSliderValueNormalizer : NSObject

@property (retain, nonatomic) HFNumberValueConstraints *minValueConstraints;
@property (retain, nonatomic) HFNumberValueConstraints *maxValueConstraints;
@property (nonatomic) struct { double minimum; double maximum; } currentValueRange;
@property (nonatomic) BOOL hasSecondaryValue;
@property (retain, nonatomic) HUElasticSliderValueNormalizationOptions *options;

- (void).cxx_destruct;
- (struct { double x0; double x1; })normalizeRange:(struct { double x0; double x1; })a0;
- (id)_effectiveConstraintsForValueOfType:(unsigned long long)a0 boundRange:(BOOL)a1;
- (id)_originalConstraintsForValueType:(unsigned long long)a0;
- (double)_rubberBandValue:(double)a0 ofType:(unsigned long long)a1;
- (id)initWithCurrentValueRange:(struct { double x0; double x1; })a0 hasSecondaryValue:(BOOL)a1;
- (double)normalizeValue:(double)a0 ofType:(unsigned long long)a1;

@end
