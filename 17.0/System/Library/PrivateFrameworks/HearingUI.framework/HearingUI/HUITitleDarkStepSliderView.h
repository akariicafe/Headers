@class HUIStepSlider, _HUIDarkStepSliderView, HUISliderConfig, HACCCapsuleTitleView, NSLayoutConstraint, UILabel, HACCStackView;

@interface HUITitleDarkStepSliderView : UIView

@property (retain, nonatomic) HUISliderConfig *config;
@property (retain, nonatomic) HACCStackView *stackView;
@property (retain, nonatomic) HACCCapsuleTitleView *titleView;
@property (retain, nonatomic) _HUIDarkStepSliderView *sliderView;
@property (retain, nonatomic) NSLayoutConstraint *titleViewHeightLayout;
@property (retain, nonatomic) HUIStepSlider *slider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;

- (id)initWithConfig:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (void)_setupTitleView;
- (void)setIsLargeText:(BOOL)a0;
- (void)setIsSubmenu:(BOOL)a0;

@end
