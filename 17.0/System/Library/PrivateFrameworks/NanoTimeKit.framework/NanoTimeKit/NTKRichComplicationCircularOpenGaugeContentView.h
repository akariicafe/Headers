@class CLKUIColoringLabel, CDRichComplicationCurvedProgressView, UIView;

@interface NTKRichComplicationCircularOpenGaugeContentView : NTKRichComplicationCircularBaseView {
    CDRichComplicationCurvedProgressView *_progressView;
    CLKUIColoringLabel *_centerLabel;
    UIView *_bottomView;
}

@property (readonly, nonatomic) CDRichComplicationCurvedProgressView *progressView;
@property (readonly, nonatomic) CLKUIColoringLabel *centerLabel;

+ (long long)progressFillStyle;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bottomView;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (long long)_innerFilterStyle;
- (long long)_outerFilterStyle;
- (void)gaugeProvider:(id *)a0 andCenterTextProvider:(id *)a1 fromTemplate:(id)a2;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
