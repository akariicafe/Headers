@interface SASettingGetGuidedAccess : SASettingGetBool

+ (id)getGuidedAccess;
+ (id)getGuidedAccessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
