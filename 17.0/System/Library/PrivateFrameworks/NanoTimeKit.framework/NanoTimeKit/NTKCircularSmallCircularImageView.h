@class UIView;
@protocol CDComplicationImageView;

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView

@property (retain, nonatomic) UIView<CDComplicationImageView> *imageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)a0;
- (void)_updateForTemplateChange;
- (void)setUsesMediumLayout:(BOOL)a0;

@end
