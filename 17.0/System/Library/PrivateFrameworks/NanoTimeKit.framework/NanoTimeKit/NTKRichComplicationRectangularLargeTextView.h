@class CLKUIColoringLabel;

@interface NTKRichComplicationRectangularLargeTextView : NTKRichComplicationRectangularLargeHeadlineBaseView {
    CLKUIColoringLabel *_line1Label;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
