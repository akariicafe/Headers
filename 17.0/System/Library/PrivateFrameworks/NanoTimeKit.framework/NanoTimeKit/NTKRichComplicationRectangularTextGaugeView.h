@class CLKUIColoringLabel, NTKRichComplicationLineProgressView;

@interface NTKRichComplicationRectangularTextGaugeView : NTKRichComplicationRectangularLargeHeadlineBaseView

@property (readonly, nonatomic) CLKUIColoringLabel *bodyLabel;
@property (readonly, nonatomic) NTKRichComplicationLineProgressView *progressView;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)isMeteredProgressView;
+ (long long)progressFillStyle;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_handleTemplateUpdateWithReason:(long long)a0 headerViewData:(id)a1 headerImageProvider:(id)a2 headerTextProvider:(id)a3 bodyTextProvider:(id)a4 gaugeProvider:(id)a5;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
