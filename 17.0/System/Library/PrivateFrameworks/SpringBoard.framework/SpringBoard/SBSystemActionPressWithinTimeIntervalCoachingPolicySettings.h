@interface SBSystemActionPressWithinTimeIntervalCoachingPolicySettings : PTSettings

@property (nonatomic) unsigned long long presentationThresholdForActionsWithStatefulPreviews;
@property (nonatomic) unsigned long long presentationThresholdForActionsWithStatelessPreviews;
@property (nonatomic) double timeInterval;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
