@interface SASettingOpenWiFi : SASettingOpenSettings

+ (id)openWiFiWithDictionary:(id)a0 context:(id)a1;
+ (id)openWiFi;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
