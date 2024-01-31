@class UIImageView, UIImage, CAShapeLayer, UITapGestureRecognizer;

@interface MUCircleProgressView : UIView {
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_progressLayer;
    UIImageView *_imageView;
    CAShapeLayer *_indeterminateLayer;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (nonatomic) double progress;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (copy, nonatomic) id /* block */ primaryAction;

- (void)_handleTap:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_startIndeterminateAnimation;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (void)_updateBorderWidthForUpdatedDisplayScale;
- (void)_updateStrokeColorForUpdatedUserInterfaceStyle;

@end
