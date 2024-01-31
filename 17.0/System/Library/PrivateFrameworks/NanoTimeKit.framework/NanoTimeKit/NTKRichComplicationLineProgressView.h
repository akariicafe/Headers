@interface NTKRichComplicationLineProgressView : CDRichComplicationProgressView

@property (readonly, nonatomic) long long progressFillStyle;

- (void)setProgress:(double)a0;
- (id)initForFamily:(long long)a0 device:(id)a1 progressFillStyle:(long long)a2;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)a0;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)a0 locations:(id)a1;

@end
