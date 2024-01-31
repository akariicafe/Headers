@interface AssistantSiriInCallController : PSListController

+ (id)bundle;
+ (Class)_config;
+ (BOOL)isSettingEnabled;
+ (BOOL)isSettingSupported;
+ (id)localizedSettingName;

- (id)specifiers;
- (id)_localizedFooterText;
- (id)_localizedHangUpTriggerPhrase;
- (id)enabled:(id)a0;
- (void)setEnabled:(id)a0 specifier:(id)a1;

@end
