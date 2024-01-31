@interface _UIFocusDeferralSettings : PTSettings

@property (nonatomic) double userEngagementTimeoutInSeconds;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
