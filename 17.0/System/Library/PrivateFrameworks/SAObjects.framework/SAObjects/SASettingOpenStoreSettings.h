@interface SASettingOpenStoreSettings : SASettingOpenAppSettings

+ (id)openStoreSettings;
+ (id)openStoreSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
