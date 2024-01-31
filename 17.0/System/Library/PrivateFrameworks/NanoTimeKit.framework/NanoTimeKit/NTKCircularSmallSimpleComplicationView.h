@class CLKUIColoringLabel, UIView;
@protocol CDComplicationImageView;

@interface NTKCircularSmallSimpleComplicationView : NTKCircularComplicationView

@property (retain, nonatomic) CLKUIColoringLabel *label;
@property (retain, nonatomic) UIView<CDComplicationImageView> *imageView;
@property (nonatomic) double maxDynamicFontSize;

+ (double)_imageScaleForTemplate:(id)a0 forDevice:(id)a1;
+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)_baselineOffsetForDynamicSize:(long long)a0;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateForTemplateChange;
- (void)_updateImageViewWithImageProvider:(id)a0;
- (void)_updateLabelWithTextProvider:(id)a0;
- (void)_updateLabelsForFontChange;
- (void)updateImageViewWithImage:(id)a0;
- (void)updateLabelWithString:(id)a0;

@end
