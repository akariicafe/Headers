@interface SASettingGetPrivacyLocationService : SASettingGetBool

+ (id)getPrivacyLocationService;
+ (id)getPrivacyLocationServiceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
