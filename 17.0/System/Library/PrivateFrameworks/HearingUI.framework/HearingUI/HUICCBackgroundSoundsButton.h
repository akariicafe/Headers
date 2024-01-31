@class NSString, CCUILabeledRoundButtonViewController;

@interface HUICCBackgroundSoundsButton : HUICCCapsuleButton

@property (retain, nonatomic) CCUILabeledRoundButtonViewController *buttonVC;
@property (retain, nonatomic) NSString *axHintStr;

- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityCustomActions;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)updateValue;
- (void)_updateButtonView;
- (id)contentValue;
- (BOOL)shouldIncludeIconViewInFooterViews;

@end
