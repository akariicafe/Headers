@class NSString, NSNumberFormatter, HUITitleDarkStepSliderView;
@protocol HACCContentModuleDelegate;

@interface HACCSlider : UIControl <HACCContentModule>

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) HUITitleDarkStepSliderView *sliderView;
@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic) double value;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (nonatomic) BOOL providesOwnSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)enabled;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (id)_sliderConfig;
- (id)accessibilityValue;
- (void)updateValue;
- (BOOL)_isSubModule;
- (id)contentValue;
- (id)initWithModule:(unsigned long long)a0 andDelegate:(id)a1;
- (void)setValue:(double)a0 andNotify:(BOOL)a1;
- (void)sliderDidChange:(id)a0;
- (void)updateValueString;

@end
