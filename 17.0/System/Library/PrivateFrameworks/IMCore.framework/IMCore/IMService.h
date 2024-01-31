@interface IMService : NSObject

+ (id)serviceWithName:(id)a0;
+ (id)allServices;
+ (id)notificationCenter;
+ (id)smsService;
+ (BOOL)isEmailAddress:(id)a0 inDomains:(id)a1;
+ (id)subnetService;
+ (id)myIdleTime;
+ (void)forgetStatusImageAppearance;
+ (unsigned long long)myStatus;
+ (id)iMessageService;
+ (id)facetimeService;
+ (id)imageNameForStatus:(unsigned long long)a0;
+ (id)aimService;
+ (id)callService;
+ (id)imageURLForStatus:(unsigned long long)a0;
+ (id)canonicalFormOfID:(id)a0 withIDSensitivity:(int)a1 forHandleType:(unsigned long long)a2;
+ (id)jabberService;
+ (id)allServicesNonBlocking;

- (id)localizedShortName;
- (id)canonicalFormOfID:(id)a0;
- (id)myScreenNames;
- (BOOL)initialSyncPerformed;
- (unsigned long long)status;
- (BOOL)isEnabled;
- (id)infoForAllScreenNames;
- (id)localizedName;
- (id)infoForPreferredScreenNames;
- (id)name;
- (id)infoForScreenName:(id)a0;
- (void)logout;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)infoForAllPeople;
- (id)infoForDisplayedPeople;
- (id)infoForPerson:(id)a0;
- (void)login;
- (id)peopleWithScreenName:(id)a0;
- (id)screenNamesForPerson:(id)a0;

@end
