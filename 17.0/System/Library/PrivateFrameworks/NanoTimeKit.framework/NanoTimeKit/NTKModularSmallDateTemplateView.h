@class CLKUIColoringLabel;

@interface NTKModularSmallDateTemplateView : NTKModularTemplateView {
    CLKUIColoringLabel *_weekdayLabel;
    CLKUIColoringLabel *_dayLabel;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)_update;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (id)_newLabelSubviewWithFont:(id)a0;
- (void)setIsXL:(BOOL)a0;

@end
