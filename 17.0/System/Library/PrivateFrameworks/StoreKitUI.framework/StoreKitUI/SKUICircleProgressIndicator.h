@class UIColor, UIImageView, UIImage, CADisplayLink;

@interface SKUICircleProgressIndicator : UIView {
    double _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    double _animationStartValue;
    UIImage *_borderImage;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    UIImageView *_indeterminateView;
    BOOL _isAnimating;
    UIColor *_unhighlightedBackgroundColor;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageInsets;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) double progress;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (id)_borderImage;
+ (id)_fillImage;
+ (id)_indeterminateImage;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_animateValueOnDisplayLink:(id)a0;
- (void)_setHidesBorderView:(BOOL)a0;
- (void)_startIndeterminateAnimation;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
