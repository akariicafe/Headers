@class UIColor, UIVisualEffect, UIVisualEffectView, UIView;

@interface _TVAppNavigationControllerStatusBlur : UIView {
    UIVisualEffectView *_visualEffectView;
    UIView *_dimmingView;
}

@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (retain, nonatomic) UIVisualEffect *visualEffect;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;

@end
