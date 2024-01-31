@class HUDynamicFormattingLabel, HUIconView, NSString, UIView, UIImpactFeedbackGenerator, HUQuickControlSwitchViewProfile;

@interface HUQuickControlSwitchView : UIView <HUQuickControlControllableView>

@property (retain, nonatomic) UIView *wellView;
@property (retain, nonatomic) UIView *knobView;
@property (retain, nonatomic) HUDynamicFormattingLabel *supplementaryValueLabel;
@property (retain, nonatomic) HUIconView *decorationIconView;
@property (nonatomic) double clippedValue;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) double switchValue;
@property (copy, nonatomic) HUQuickControlSwitchViewProfile *profile;
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
- (void)_actuateTapticFeedback;
- (BOOL)_createDecorationIconViewIfNecessary;
- (void)_createSupplementaryValueLabelIfNecessary;
- (struct CGPoint { double x0; double x1; })_knobCenterForMetrics:(struct { double x0; })a0 switchValue:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_knobFrameForMetrics:(struct { double x0; })a0 switchValue:(double)a1;
- (struct CGSize { double x0; double x1; })_knobSizeForMetrics:(struct { double x0; })a0;
- (void)_prepareForTapticFeedback;
- (void)_updateDecorationIconDescriptorAnimated:(BOOL)a0;
- (void)_updateKnobViewTintColorAnimated:(BOOL)a0;
- (void)_updateSupplementaryValueLabelAnimated:(BOOL)a0;
- (void)_updateUIForReachabilityState:(unsigned long long)a0;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)a0;

@end
