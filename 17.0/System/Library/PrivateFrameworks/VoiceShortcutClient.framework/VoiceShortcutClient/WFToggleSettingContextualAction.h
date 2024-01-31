@interface WFToggleSettingContextualAction : WFContextualAction

@property (readonly, nonatomic) unsigned long long setting;
@property (readonly, nonatomic) unsigned long long operation;

+ (id)spotlightDomainIdentifier;
+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)associatedSettingsPreference;
- (id)initWithSetting:(unsigned long long)a0 operation:(unsigned long long)a1;
- (id)initWithSetting:(unsigned long long)a0 operation:(unsigned long long)a1 unconfigured:(BOOL)a2;
- (BOOL)isReversible;
- (id)settingBiomeStreamIdentifier;

@end
