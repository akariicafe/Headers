@class _TVStackBackdropView, CAGradientLayer;

@interface _TVStackBackdropMaskingView : UIView {
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) _TVStackBackdropView *backdropView;
@property (nonatomic) double gradientScale;
@property (nonatomic) double gradientStop;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
