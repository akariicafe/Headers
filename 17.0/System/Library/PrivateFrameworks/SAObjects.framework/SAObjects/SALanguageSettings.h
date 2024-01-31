@class NSDictionary;

@interface SALanguageSettings : SABaseClientBoundCommand

@property (copy, nonatomic) NSDictionary *configuredLocales;

+ (id)languageSettings;
+ (id)languageSettingsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
