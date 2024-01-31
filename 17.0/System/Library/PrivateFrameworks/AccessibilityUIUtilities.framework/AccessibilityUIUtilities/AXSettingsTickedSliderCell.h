@class NSString, AccessibilityAirPodSettingsController, AXDispatchTimer;

@interface AXSettingsTickedSliderCell : AXUISettingsLabeledSliderCell

@property (readonly, nonatomic) NSString *btAddress;
@property (weak, nonatomic) AccessibilityAirPodSettingsController *controller;
@property (retain, nonatomic) AXDispatchTimer *valueTimer;

- (id)accessibilityLabel;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (double)minimumValue;
- (void).cxx_destruct;
- (double)maximumValue;
- (void)layoutSubviews;
- (double)initialValue;
- (Class)sliderCellClass;
- (double)_defaultSliderValue;
- (double)_determineDisplayValue:(double)a0;
- (void)_updateRightLabelWithValue:(double)a0;
- (void)handleSliderBeingDragged:(id)a0;
- (void)handleSliderDidFinishDrag:(id)a0;
- (id)maximumTextSizeString;
- (double)rightViewPadding;

@end
