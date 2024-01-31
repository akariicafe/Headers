@class CLKUIColoringLabel, CLKComplicationTemplateModularSmallColumnsText;

@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView {
    CLKUIColoringLabel *_row1Column1Label;
    CLKUIColoringLabel *_row1Column2Label;
    CLKUIColoringLabel *_row2Column1Label;
    CLKUIColoringLabel *_row2Column2Label;
    BOOL _calculatedFontSize;
}

@property (readonly, nonatomic) CLKComplicationTemplateModularSmallColumnsText *complicationTemplate;

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)_update;
- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_bodyFontOfSize:(double)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)a0;
- (id)_headerFontOfSize:(double)a0;
- (id)_newLabelSubview;

@end
