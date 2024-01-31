@interface SASettingSetGuidedAccess : SASettingSetBool

+ (id)setGuidedAccess;
+ (id)setGuidedAccessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
