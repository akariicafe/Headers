@class NTKRichComplicationRingProgressView, UIView;

@interface NTKRichComplicationCircularClosedGaugeContentView : NTKRichComplicationCircularBaseView {
    UIView *_innerView;
    NTKRichComplicationRingProgressView *_progressView;
}

@property (readonly, nonatomic) NTKRichComplicationRingProgressView *progressView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (id)gaugeProviderFromTemplate:(id)a0;
- (id)innerView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
