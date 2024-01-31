@class NSArray, CLKUICurvedColoringLabel;

@interface CDRichComplicationCornerGaugeTextView : CDRichComplicationCornerBaseGaugeView

@property (readonly, nonatomic) CLKUICurvedColoringLabel *outerLabel;
@property (retain, nonatomic) NSArray *outerLabelProviders;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setFontStyle:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (id)initWithFontFallback:(long long)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
