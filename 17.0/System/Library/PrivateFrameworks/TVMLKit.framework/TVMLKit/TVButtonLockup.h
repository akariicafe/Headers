@class UIView, IKViewElement, UILabel, _UIFloatingContentView, _TVVisualEffectView, CALayer, _TVImageView, UIColor;

@interface TVButtonLockup : UIView {
    _UIFloatingContentView *_floatingView;
    _TVVisualEffectView *_backdropView;
    UIView *_overlayView;
    UILabel *_textView;
    UILabel *_textMask;
    CALayer *_imageMask;
    UIColor *__backgroundColor;
}

@property (readonly, nonatomic) long long backdropStyle;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) long long vibrantLabelThemeOverride;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UILabel *titleView;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) IKViewElement *viewElement;

- (void)setBackgroundColor:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFocused;
- (id)backgroundColor;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (long long)_focusedSound;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_selectButtonAction:(id)a0;
- (void)_playButtonAction:(id)a0;
- (void)_updateForAccessibilityChange;
- (void)_updateForFocusStateChange;
- (void)_updateImageMask;
- (void)_updateShadowForLabel:(id)a0 inFocus:(BOOL)a1;
- (void)_updateTextForAccessibilityAndFocus;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurEffectStyle:(long long)a1 groupName:(id)a2;
- (void)setText:(id)a0 minimumScale:(double)a1 maxNumberOfLines:(unsigned long long)a2;

@end
