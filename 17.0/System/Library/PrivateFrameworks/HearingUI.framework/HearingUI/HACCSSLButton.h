@class CCUILabeledRoundButtonViewController;

@interface HACCSSLButton : HUICCCapsuleButton

@property (retain, nonatomic) CCUILabeledRoundButtonViewController *buttonVC;

- (unsigned long long)accessibilityTraits;
- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)updateValue;
- (void)_updateButtonView;
- (id)contentValue;

@end
