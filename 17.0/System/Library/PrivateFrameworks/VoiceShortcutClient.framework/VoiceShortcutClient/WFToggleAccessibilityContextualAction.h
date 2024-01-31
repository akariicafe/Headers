@interface WFToggleAccessibilityContextualAction : WFContextualAction

@property (readonly, nonatomic) unsigned long long setting;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSetting:(unsigned long long)a0;
- (id)associatedSettingsPreference;
- (id)settingBiomeStreamIdentifier;

@end
