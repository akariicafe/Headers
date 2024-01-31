@interface SASettingGetAssistiveTouch : SASettingGetBool

+ (id)getAssistiveTouch;
+ (id)getAssistiveTouchWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
