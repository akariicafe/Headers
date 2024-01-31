@interface SASettingOpenMessagesSettings : SASettingOpenAppSettings

+ (id)openMessagesSettings;
+ (id)openMessagesSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
