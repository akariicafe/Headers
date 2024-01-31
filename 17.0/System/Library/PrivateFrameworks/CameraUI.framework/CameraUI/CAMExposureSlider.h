@class NSNumberFormatter;

@interface CAMExposureSlider : CEKDiscreteSlider

@property (nonatomic) double _previousHorizontalLabelOffset;
@property (readonly, nonatomic) NSNumberFormatter *_decimalFormatter;
@property (readonly, nonatomic) double exposureValue;

+ (id)exposureValues;
+ (id)decimalFormatter;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)valueText;
- (double)horizontalValueLabelOffset;
- (void)updateValueLabel;
- (unsigned long long)_indexOfClosestValidValueForExposureValue:(double)a0;
- (void)setExposureValueClosestTo:(double)a0;

@end
