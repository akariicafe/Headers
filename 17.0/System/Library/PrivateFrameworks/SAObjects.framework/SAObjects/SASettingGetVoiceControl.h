@interface SASettingGetVoiceControl : SASettingGetBool

+ (id)getVoiceControl;
+ (id)getVoiceControlWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
