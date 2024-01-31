@class NSSet, NSArray;

@interface PUICalendarPrivacyController : PSListController

@property (retain, nonatomic) NSSet *calendarFullAccessAllowedAppIDs;
@property (retain, nonatomic) NSSet *calendarWriteOnlyAppIDs;
@property (retain, nonatomic) NSSet *calendarNoAccessAppIDs;
@property (retain, nonatomic) NSSet *calendarSomeAccessAppIDs;
@property (retain, nonatomic) NSSet *calendarAllAppIDs;
@property (retain, nonatomic) NSArray *calendarAppSpecifiers;

+ (BOOL)isServiceRestricted:(id)a0;

- (id)specifiers;
- (void).cxx_destruct;
- (id)calendarStatus:(id)a0;
- (id)appSpecifierWithName:(id)a0 bundleID:(id)a1;
- (void)setTCCForService:(struct __CFString { } *)a0 appIdentifier:(id)a1 value:(int)a2;
- (void)_setCalendarStatus:(id)a0 specifier:(id)a1;
- (void)updateCalendarAuthorizationStates;
- (void)updateSpecifiersForImposedSettings;

@end
