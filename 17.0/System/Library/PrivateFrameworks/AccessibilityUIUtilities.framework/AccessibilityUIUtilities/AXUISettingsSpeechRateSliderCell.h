@class NSNumber, NSArray, UIImpactFeedbackGenerator, UISlider, UILabel, UIButton;

@interface AXUISettingsSpeechRateSliderCell : PSTableCell {
    UIImpactFeedbackGenerator *_hapticGenerator;
    BOOL _hapticPlayedValue;
    BOOL _playedSlowBounce;
    BOOL _playedFastBounce;
}

@property (retain, nonatomic) UISlider *sliderView;
@property (retain, nonatomic) UIButton *fastButton;
@property (retain, nonatomic) UIButton *slowButton;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSArray *buttonConstraints;
@property (retain, nonatomic) NSArray *largeTextButtonConstraints;
@property (retain, nonatomic) NSArray *extraLargeTextButtonConstraints;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (double)displayValue;
- (id)labelColor;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)newControl;
- (void)updateValue;
- (Class)sliderCellClass;
- (BOOL)_accessibilityIgnoreInternalLabels;
- (void)_changeSpeechRateFromButton:(BOOL)a0;
- (void)_changeValueBySpeechRateIncrementWithSnapToDefault:(double)a0 snapThreshold:(double)a1;
- (void)_updateAccessibilityValueBlock;
- (void)_updateButtonShapes;
- (void)_updateTextSizeLayout;
- (void)applyHapticIfNecessary:(id)a0;
- (void)handleSliderBeingDragged:(id)a0;
- (void)handleSliderDidFinishDrag:(id)a0;
- (void)userSelectedValue;

@end
