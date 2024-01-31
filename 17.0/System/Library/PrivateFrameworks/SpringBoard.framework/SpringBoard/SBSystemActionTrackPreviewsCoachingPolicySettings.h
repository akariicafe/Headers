@interface SBSystemActionTrackPreviewsCoachingPolicySettings : PTSettings

@property (nonatomic) unsigned long long presentationThresholdForActionsWithStatefulPreviews;
@property (nonatomic) unsigned long long presentationThresholdForActionsWithStatelessPreviews;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
