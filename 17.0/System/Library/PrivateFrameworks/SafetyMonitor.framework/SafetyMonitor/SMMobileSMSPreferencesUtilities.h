@interface SMMobileSMSPreferencesUtilities : NSObject

@property (class, nonatomic) BOOL hasUserCompletedOnboarding;
@property (class, nonatomic) BOOL shareAllLocations;
@property (class, readonly, nonatomic) BOOL isUserOnBoardedForCriticalAlert;
@property (class, nonatomic) long long criticalAlertPreference;

+ (void)_setHasUserCompletedOnboarding:(id)a0;
+ (void)clearHasUserCompletedOnboarding;
+ (id)_copyMobileSMSPreferencesValueForKey:(id)a0;
+ (id)_criticalAlertPreference;
+ (void)_setCriticalAlertPreference:(id)a0;
+ (void)_setMobileSMSPreferencesValue:(id)a0 forKey:(id)a1;
+ (void)_setShareAllLocations:(id)a0;
+ (void)clearCriticalAlertUserPreference;
+ (void)clearShareAllLocations;

@end
