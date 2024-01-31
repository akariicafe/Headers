@class CLKUIColoringLabel;

@interface NTKUtilitySmallRingTextComplicationView : NTKUtilitySmallRingComplicationView

@property (readonly, nonatomic) CLKUIColoringLabel *label;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (void)_setLabelText:(id)a0;
- (void)_updateForTemplateChange;

@end
