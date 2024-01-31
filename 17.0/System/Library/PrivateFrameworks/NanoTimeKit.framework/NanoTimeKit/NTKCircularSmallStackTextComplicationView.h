@class CLKUIColoringLabel;

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView {
    CLKUIColoringLabel *_firstLineLabel;
    CLKUIColoringLabel *_secondLineLabel;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setForegroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateLabelColors;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateForTemplateChange;
- (void)_updateLabelsForFontChange;
- (void)setUsesMultiColor:(BOOL)a0;

@end
