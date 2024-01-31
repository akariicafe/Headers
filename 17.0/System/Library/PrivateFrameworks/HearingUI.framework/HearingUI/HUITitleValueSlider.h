@class UILabel, UIVisualEffectView, HUIStepSlider;

@interface HUITitleValueSlider : UIView

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) HUIStepSlider *slider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;

- (unsigned long long)accessibilityTraits;
- (id)initWithEffect:(id)a0;
- (void)accessibilityIncrement;
- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;

@end
