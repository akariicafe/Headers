@interface PSCalendarPolicyController : NSObject

+ (unsigned long long)authorizationRightforAccessLevel:(int)a0;
+ (id)loadPrivacySettingsBundle;
+ (void)setCalendarAccessForApp:(id)a0 toValue:(int)a1 shouldPrompt:(BOOL)a2;

- (id)calendarStatus:(id)a0;
- (id)appSpecifierWithName:(id)a0 bundleID:(id)a1;
- (void)setCalendarStatus:(id)a0 specifier:(id)a1;

@end
