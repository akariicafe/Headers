@class UISlider, UILabel, UIView;
@protocol UITraitChangeRegistration;

@interface AXUISettingsLabeledSliderCell : PSTableCell

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UISlider *sliderView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) BOOL segmented;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitRegistration;

- (id)accessibilityLabel;
- (id)slider;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (double)minimumValue;
- (void)didMoveToSuperview;
- (void)accessibilityIncrement;
- (void)setLabelText:(id)a0;
- (void).cxx_destruct;
- (double)maximumValue;
- (void)accessibilityDecrement;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (double)initialValue;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (id)labelTextColor;
- (Class)sliderCellClass;
- (void)_updateLabelFont:(id)a0;
- (void)didChangeTraitPreferredContentSizeCategory;
- (void)handleSliderBeingDragged:(id)a0;
- (void)handleSliderDidFinishDrag:(id)a0;
- (id)maximumTextSizeString;
- (double)rightViewPadding;

@end
