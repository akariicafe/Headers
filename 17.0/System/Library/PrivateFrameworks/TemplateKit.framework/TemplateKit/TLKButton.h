@class TLKImageView, CAShapeLayer, UIImage, TLKTapContainerButton, UIView;

@interface TLKButton : UIView

@property (retain, nonatomic) TLKTapContainerButton *button;
@property (retain, nonatomic) CAShapeLayer *outerProgressLayer;
@property (retain, nonatomic) CAShapeLayer *innerProgressLayer;
@property (nonatomic) double progress;
@property (retain, nonatomic) TLKImageView *imageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic, getter=isToggled) BOOL toggled;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImage *untoggledImage;
@property (retain, nonatomic) UIImage *toggledImage;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) struct CGSize { double width; double height; } fixedSize;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (readonly) UIImage *imageOnImageView;
@property (readonly) UIView *hitView;

+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })_calculateStatistics:(struct CGImage { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (id)blurColorForColor:(id)a0;
+ (id)blurColorForImage:(id)a0 forButtonSize:(struct CGSize { double x0; double x1; })a1 withOffsetRight:(float)a2 withOffsetBottom:(float)a3;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)iconColor;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (void)_updateInnerProgressLayerStroke;
- (id)_innerProgressLayer;
- (id)_outerProgressLayer;
- (void)beginIndeterminateAnimation;
- (void)endIndeterminateAnimation;
- (void)hideProgressAnimated:(BOOL)a0;
- (void)showPlayIndicator:(BOOL)a0;
- (void)_beginIndeterminateAnimation;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)addTarget:(id)a0 forAction:(SEL)a1;
- (void)setButtonSelectionState:(BOOL)a0;
- (void)updateOuterProgressLayerStroke;

@end
