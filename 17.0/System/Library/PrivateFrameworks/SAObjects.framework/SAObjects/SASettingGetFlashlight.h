@interface SASettingGetFlashlight : SASettingGetBool

+ (id)getFlashlight;
+ (id)getFlashlightWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
