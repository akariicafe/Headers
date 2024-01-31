@class CLKUIColoringLabel, CDRichComplicationCurvedProgressView;

@interface NTKRichComplicationBaseCircularOpenGaugeRangeTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) CDRichComplicationCurvedProgressView *progressView;
@property (retain, nonatomic) CLKUIColoringLabel *leadingSmallLabel;
@property (retain, nonatomic) CLKUIColoringLabel *trailingSmallLabel;
@property (retain, nonatomic) CLKUIColoringLabel *centerLabel;

+ (long long)progressFillStyle;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (long long)_innerFilterStyle;
- (long long)_outerFilterStyle;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
