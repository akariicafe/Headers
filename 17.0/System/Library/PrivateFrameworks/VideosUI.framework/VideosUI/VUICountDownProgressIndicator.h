@class UIColor, CADisplayLink, UIVisualEffectView, CAShapeLayer, UIImageView, UIImage;

@interface VUICountDownProgressIndicator : UIView

@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) CAShapeLayer *centerLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (retain, nonatomic) CAShapeLayer *progressMaskLayer;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) double progress;
@property (nonatomic) double autoFillDelta;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIImageView *centerImageView;
@property (nonatomic) double autoFillStartTimeStamp;
@property (readonly, nonatomic) double duration;
@property (nonatomic) unsigned long long countDownProgressDirection;
@property (nonatomic) double progressWidth;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } progressInset;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundImageInset;
@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (retain, nonatomic) UIImage *centerImage;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } centerImageInset;
@property (retain, nonatomic) UIColor *centerTintColor;
@property (copy, nonatomic) id /* block */ completion;

- (void)dealloc;
- (void)setTintColor:(id)a0;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)_configureBackground;
- (void)layoutSubviews;
- (void)_animateValueOnDisplayLink:(id)a0;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (void)_configureProgressLayer;
- (void)_setProgress:(double)a0 animated:(BOOL)a1;
- (void)_stopAutoAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 duration:(double)a1;
- (void)restartWithAnimation:(BOOL)a0;

@end
