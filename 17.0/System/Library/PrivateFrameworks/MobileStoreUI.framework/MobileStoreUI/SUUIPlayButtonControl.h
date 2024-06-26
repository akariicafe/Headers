@class UIView, NSString, UIImage, NSArray, SUUIButtonViewElement, UIImageView, _UIBackdropView, SUUIPlayButtonShapeView, SUUIPlayButtonGradientView, UIColor;

@interface SUUIPlayButtonControl : UIControl {
    _UIBackdropView *_backdropView;
    UIColor *_backgroundColor;
    SUUIPlayButtonShapeView *_borderLayer;
    UIView *_backgroundView;
    UIColor *_bufferProgressIndicatorColor;
    id _bufferProgressIndicatorCompositingFilter;
    BOOL _didInitialHighlightForTouch;
    SUUIPlayButtonGradientView *_gradientBackgroundView;
    NSArray *_gradientColors;
    long long _gradientType;
    SUUIPlayButtonShapeView *_innerProgressLayer;
    SUUIPlayButtonShapeView *_outerProgressLayer;
    SUUIPlayButtonShapeView *_selectedLayer;
    id _progressIndicatorCompositingFilter;
    UIColor *_selectionColor;
    id _selectionCompositingFilter;
    BOOL _usesBlurredBackground;
    BOOL _showBorder;
}

@property (weak, nonatomic) UIImage *backgroundImageForBlurring;
@property (nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable;
@property (retain, nonatomic) SUUIButtonViewElement *element;
@property (readonly, nonatomic) long long backgroundType;
@property (readonly, nonatomic) UIColor *controlForeGroundColor;
@property (retain, nonatomic) UIImage *customPlayImage;
@property (retain, nonatomic) UIImage *customToggleImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bigHitInsets;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) float progress;
@property (copy, nonatomic) UIColor *progressIndicatorColor;
@property (readonly, nonatomic) BOOL showingPlayIndicator;
@property (readonly, nonatomic) BOOL showingProgress;
@property (nonatomic) BOOL showOuterBorder;

+ (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })_calculateStatistics:(struct CGImage { } *)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (id)blurColorForColor:(id)a0;
+ (id)blurColorForImage:(id)a0 forButtonSize:(struct CGSize { double x0; double x1; })a1 withOffsetRight:(float)a2 withOffsetBottom:(float)a3;

- (struct CGSize { double x0; double x1; })buttonSize;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (id)_imageView;
- (void)tintColorDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitRect;
- (id)_backgroundView;
- (void)_prepareForReuse;
- (void)refresh;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setBackgroundType:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)defaultBackgroundColor;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_defaultBackgroundView;
- (float)buttonCornerRadius;
- (void)setProgress:(float)a0 animated:(BOOL)a1;
- (id)_borderLayer;
- (void)setControlColor:(id)a0;
- (void)_updateInnerProgressLayerStroke;
- (id)_innerProgressLayer;
- (id)_outerProgressLayer;
- (void)_showPlayIndicator:(BOOL)a0;
- (void)_toggleToPlayState;
- (void)_updateEnabledState;
- (void)beginIndeterminateAnimation;
- (void)endIndeterminateAnimation;
- (void)hideProgressAnimated:(BOOL)a0;
- (id)outerBorderColor;
- (id)playImage;
- (void)setShowBorder:(BOOL)a0;
- (void)showPlayIndicator:(BOOL)a0;
- (id)_gradientBackgroundView;
- (void)_beginIndeterminateAnimation;
- (id)_newShapeViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 lineWidth:(double)a1;
- (void)updateOuterProgressLayerStroke;
- (id)_playImage;
- (id)_simpleBackdrop;
- (void)setBackgroundImageForBlurring:(id)a0 withOffsetRight:(float)a1 withOffsetBottom:(float)a2;
- (id)_cancelImage;
- (id)_classicBackdropView;
- (void)_createGradient:(id)a0 withGradientType:(long long)a1;
- (BOOL)_renderAsEnabled;
- (id)_selectedLayer;
- (void)_updateBackdropView;
- (void)_updateBackgroundBlur:(id)a0 withOffsetRight:(float)a1 withOffsetBottom:(float)a2;
- (void)_useBlurredBackground:(BOOL)a0;
- (id)cancelImage;
- (float)playButtonDefaultAlpha;
- (void)playIndicatorDidChange:(BOOL)a0;
- (void)setBackgroundGradientColors:(id)a0 withGradientType:(long long)a1;
- (void)setBufferProgressIndicatorColor:(id)a0 withCompositingFilter:(id)a1;
- (void)setControlForegroundColor:(id)a0;
- (void)setProgressIndicatorColor:(id)a0 withCompositingFilter:(id)a1;
- (void)setSelectionColor:(id)a0 withCompositingFilter:(id)a1;
- (void)showPlayIndicator:(BOOL)a0 force:(BOOL)a1;

@end
