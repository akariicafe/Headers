@class CLKUIColoringLabel;

@interface NTKCircularSmallRingTextComplicationView : NTKCircularSmallRingComplicationView {
    CLKUIColoringLabel *_label;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateForTemplateChange;
- (void)_updateLabelWithTextProvider:(id)a0;
- (void)_updateLabelsForFontChange;
- (void)updateLabelWithString:(id)a0;

@end
