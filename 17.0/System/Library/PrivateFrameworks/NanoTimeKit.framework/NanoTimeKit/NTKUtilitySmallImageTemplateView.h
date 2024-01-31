@class UIView;
@protocol CDComplicationImageView;

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView {
    BOOL _needsLayoutContent;
}

@property (retain, nonatomic) UIView<CDComplicationImageView> *imageView;

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)_layoutContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)a0;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)a0;
- (void)_setNeedsLayoutContent;
- (void)_updateForTemplateChange;

@end
