@class HUIconView, UIImpactFeedbackGenerator, HUQuickControlSliderViewProfile, NSString, NSLayoutConstraint, HUQuickControlSliderValueOverlayView, UIView;

@interface HUQuickControlSliderView : UIView <HUQuickControlControllableView>

@property (nonatomic) BOOL showOffState;
@property (nonatomic) double rawSliderValue;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) HUQuickControlSliderValueOverlayView *valueOverlayView;
@property (retain, nonatomic) NSLayoutConstraint *overlayTopConstraint;
@property (retain, nonatomic) HUIconView *decorationIconView;
@property (nonatomic) double primaryNormalizedValue;
@property (nonatomic) double secondaryNormalizedValue;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) double sliderValue;
@property (nonatomic) double secondarySliderValue;
@property (copy, nonatomic) HUQuickControlSliderViewProfile *profile;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithProfile:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateOffState;
- (void)_actuateTapticFeedback;
- (BOOL)_createDecorationIconViewIfNecessary;
- (struct { double x0; double x1; })_permittedValueRange;
- (void)_prepareForTapticFeedback;
- (void)_updateDecorationIconDescriptorAnimated:(BOOL)a0;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
