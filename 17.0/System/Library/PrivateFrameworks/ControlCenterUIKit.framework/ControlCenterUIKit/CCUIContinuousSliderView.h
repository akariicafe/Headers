@class MTMaterialView, UIView;

@interface CCUIContinuousSliderView : CCUIBaseSliderView {
    MTMaterialView *_backgroundFillView;
}

@property (nonatomic) unsigned long long axis;
@property (readonly, nonatomic) UIView *valueIndicatorClippingView;

- (void)setValueVisible:(BOOL)a0;
- (void)layoutElasticContentViews;
- (void)setContinuousSliderCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_length;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })glyphCenter;

@end
