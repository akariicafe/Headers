@class CLKUIColoringLabel, UIView;

@interface NTKRichComplicationCircularStackContentTextView : NTKRichComplicationCircularBaseView {
    UIView *_line1View;
    CLKUIColoringLabel *_line2Label;
}

@property (readonly, nonatomic) CLKUIColoringLabel *line2Label;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (long long)_line2FilterStyle;
- (id)line1View;
- (id)line2TextProviderFromTemplate:(id)a0;
- (BOOL)templateWantsPlatter;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
