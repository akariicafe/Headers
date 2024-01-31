@class CLKUIColoringLabel, NTKRichComplicationRingProgressView;

@interface NTKRichComplicationBaseCircularClosedGaugeTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) CLKUIColoringLabel *centerLabel;
@property (retain, nonatomic) NTKRichComplicationRingProgressView *progressView;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (long long)_innerFilterStyle;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
