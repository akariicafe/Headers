@class CLKUIColoringLabel, UIView;
@protocol CDComplicationImageView;

@interface NTKCircularSmallStackImageComplicationView : NTKCircularComplicationView {
    CLKUIColoringLabel *_label;
    UIView<CDComplicationImageView> *_imageView;
}

+ (double)_imageScaleForTemplate:(id)a0;
+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateForTemplateChange;
- (void)_updateLabelsForFontChange;

@end
