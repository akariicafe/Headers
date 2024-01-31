@interface SASettingOpenNotificationSettings : SASettingOpenSettings

+ (id)openNotificationSettings;
+ (id)openNotificationSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
