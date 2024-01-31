@class SBFFluidBehaviorSettings, NSString, SBSystemActionTrackPreviewsCoachingPolicySettings, SBSystemActionPressWithinTimeIntervalCoachingPolicySettings;

@interface SBSystemActionCoachingSettings : PTSettings

@property (retain, nonatomic) NSString *policyClassName;
@property (retain, nonatomic) SBSystemActionTrackPreviewsCoachingPolicySettings *trackPreviewsPolicySettings;
@property (retain, nonatomic) SBSystemActionPressWithinTimeIntervalCoachingPolicySettings *pressWithinTimeIntervalPolicySettings;
@property (nonatomic) double dimmingAlpha;
@property (nonatomic) double coachingButtonShadowOpacity;
@property (nonatomic) double coachingButtonShadowRadius;
@property (nonatomic) double coachingLabelShadowOpacity;
@property (nonatomic) double coachingLabelShadowRadius;
@property (retain, nonatomic) SBFFluidBehaviorSettings *presentationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *expansionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *contractionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *dismissalSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
