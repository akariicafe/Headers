@class NSArray, HUISliderConfig, HACCCapsuleDarkBackground, UIView, HUIStepSlider;

@interface _HUIDarkStepSliderView : UIView

@property (retain, nonatomic) HUISliderConfig *config;
@property (retain, nonatomic) UIView *leadingView;
@property (retain, nonatomic) HUIStepSlider *slider;
@property (retain, nonatomic) UIView *trailingView;
@property (retain, nonatomic) HACCCapsuleDarkBackground *darkBackgroundView;
@property (retain, nonatomic) NSArray *defaultLayouts;
@property (retain, nonatomic) NSArray *largeTextLayouts;

- (id)initWithConfig:(id)a0;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)_setContraintsFromConfig:(id)a0;
- (void)updateConstraintsWithConfig:(id)a0;

@end
