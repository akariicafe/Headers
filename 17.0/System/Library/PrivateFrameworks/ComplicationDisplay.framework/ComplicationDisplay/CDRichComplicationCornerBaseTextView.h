@class NSArray, CLKUICurvedColoringLabel;

@interface CDRichComplicationCornerBaseTextView : CDRichComplicationCornerView {
    CLKUICurvedColoringLabel *_innerLabel;
}

@property (retain, nonatomic) NSArray *innerLabelProviders;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (id)initWithFontFallback:(long long)a0;
- (id)innerLabel;

@end
