@interface SASettingOpenSiriSettings : SASettingOpenSettings

+ (id)openSiriSettings;
+ (id)openSiriSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
