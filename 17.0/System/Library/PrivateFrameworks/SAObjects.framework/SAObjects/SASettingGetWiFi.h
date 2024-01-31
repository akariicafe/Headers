@interface SASettingGetWiFi : SASettingGetBool

+ (id)getWiFi;
+ (id)getWiFiWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
