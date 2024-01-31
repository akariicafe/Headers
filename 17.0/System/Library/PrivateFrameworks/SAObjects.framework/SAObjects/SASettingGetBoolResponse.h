@interface SASettingGetBoolResponse : SASettingGetValueResponse

+ (id)getBoolResponse;
+ (id)getBoolResponseWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
