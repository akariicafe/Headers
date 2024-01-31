@interface SASettingGetNoiseManagement : SASettingGetValue

+ (id)getNoiseManagement;
+ (id)getNoiseManagementWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
