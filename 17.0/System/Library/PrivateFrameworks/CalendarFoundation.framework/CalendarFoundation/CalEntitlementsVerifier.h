@interface CalEntitlementsVerifier : NSObject

+ (BOOL)currentProcessHasAdoptedModernRequestAccessMethods;
+ (BOOL)currentProcessIsCalendarDaemon;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (BOOL)currentProcessIsFirstPartyApp;
+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (id)currentProcessGetStringEntitlement:(id)a0;
+ (id)currentProcessGetArrayOfStringsEntitlement:(id)a0;
+ (BOOL)currentProcessHasCalendarToolEntitlement;
+ (id)_currentProcessValueForEntitlement:(id)a0 loadBlock:(id /* block */)a1;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessIsAutomator;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;

@end
