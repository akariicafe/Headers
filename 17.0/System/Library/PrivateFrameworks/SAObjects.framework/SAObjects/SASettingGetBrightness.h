@interface SASettingGetBrightness : SASettingGetFloat

+ (id)getBrightness;
+ (id)getBrightnessWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
