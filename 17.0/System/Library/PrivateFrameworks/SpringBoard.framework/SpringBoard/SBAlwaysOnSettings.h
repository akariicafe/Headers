@class SBAlwaysOnPolicySettings, SBAlwaysOnAPLSettings;

@interface SBAlwaysOnSettings : PTSettings

@property (nonatomic) long long sideButtonBehavior;
@property (retain, nonatomic) SBAlwaysOnPolicySettings *policySettings;
@property (retain, nonatomic) SBAlwaysOnAPLSettings *aplSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
