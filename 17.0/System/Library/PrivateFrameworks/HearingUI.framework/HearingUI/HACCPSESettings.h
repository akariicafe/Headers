@class NSArray, NSNumberFormatter, NSString, HUITitleDarkStepSliderView, HACCStackView;
@protocol HACCContentModuleDelegate;

@interface HACCPSESettings : UIView <MTVisualStylingRequiring, HACCContentModule> {
    BOOL _didSetVibrancy;
}

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) HACCStackView *stackView;
@property (retain, nonatomic) HUITitleDarkStepSliderView *amplificationSlider;
@property (retain, nonatomic) HUITitleDarkStepSliderView *balanceSlider;
@property (retain, nonatomic) HUITitleDarkStepSliderView *toneSlider;
@property (retain, nonatomic) HUITitleDarkStepSliderView *noiseSupressorSlider;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (nonatomic) BOOL providesOwnSeparator;

- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateValue;
- (void)updateAccessibilityBalanceValue;
- (void)amplificationSliderDidChange:(id)a0;
- (void)balanceSliderDidChange:(id)a0;
- (id)contentValue;
- (void)noiseSliderDidChange:(id)a0;
- (void)toneSliderDidChange:(id)a0;
- (void)updateAccessibilityToneValue;

@end
