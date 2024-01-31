@class CLKUIColoringLabel, CDRichComplicationCurvedProgressView;

@interface NTKRichComplicationBaseCircularOpenGaugeSimpleTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) CLKUIColoringLabel *smallLabel;
@property (retain, nonatomic) CLKUIColoringLabel *centerLabel;
@property (retain, nonatomic) CDRichComplicationCurvedProgressView *progressView;

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (long long)_innerFilterStyle;
- (long long)_outerFilterStyle;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
