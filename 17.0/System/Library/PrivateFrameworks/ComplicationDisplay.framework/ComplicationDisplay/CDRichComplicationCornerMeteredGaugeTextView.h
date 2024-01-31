@class CDRichComplicationImageView;

@interface CDRichComplicationCornerMeteredGaugeTextView : CDRichComplicationCornerGaugeTextView

@property (readonly, nonatomic) CDRichComplicationImageView *outerImageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (long long)progressFillStyle;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (id)initWithFontFallback:(long long)a0;
- (long long)tritiumUpdateMode;

@end
