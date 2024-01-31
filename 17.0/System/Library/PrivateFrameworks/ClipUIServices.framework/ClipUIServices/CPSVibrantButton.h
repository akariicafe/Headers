@class UIButton, UIVisualEffectView;

@interface CPSVibrantButton : UIView {
    UIVisualEffectView *_effectView;
    UIButton *_button;
}

@property (readonly, nonatomic) UIButton *uiButton;

- (void).cxx_destruct;
- (void)updateCornerRadius;
- (id)initWithButtonType:(long long)a0;
- (void)setAdjustFontSizeToFitWidth:(BOOL)a0;

@end
