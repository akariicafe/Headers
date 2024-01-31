@interface AAPreferences : NSObject

+ (BOOL)isRunningInStoreDemoMode;
+ (void)setCustodianPreflightDisabled:(BOOL)a0;
+ (BOOL)isCustodianPreflightTTREnabled;
+ (BOOL)isIdentityPresentationEnabled;
+ (void)setCustodianPreflightTTREnabled:(BOOL)a0;
+ (long long)customIdentityTaskIntervalMinutes;
+ (BOOL)isSpyglass2023Enabled;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (void)setHealthCheckTTREnabled:(BOOL)a0;
+ (void)setShouldShowAccountContacts:(BOOL)a0;
+ (long long)customHealthCheckVersion;
+ (BOOL)isCustodianPreflightDisabled;
+ (void)setSimulateUnhealthyCustodianEnabled:(BOOL)a0;
+ (void)setMultipleFullAccountsEnabled:(BOOL)a0;
+ (void)setCustomHealthCheckIntervalMinutes:(long long)a0;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (void)setExperimentalModeEnabled:(BOOL)a0;
+ (BOOL)isYorktownEnabled;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (BOOL)shouldSkipIdMSKeyUpdate;
+ (void)setCustomIdentityTaskIntervalMinutes:(long long)a0;
+ (BOOL)shouldSkipIdMSFinalizeCustodian;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (void)setShouldUseUnifiedLoginEndpoint:(BOOL)a0;
+ (BOOL)isExperimentalModeEnabled;
+ (void)setCustomIdentityTaskIntervalEnabled:(BOOL)a0;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (void)setNeverSkipCustodianCheckEnabled:(BOOL)a0;
+ (BOOL)isMomentsDataclassEnabled;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:(long long)a0;
+ (void)setCustomHealthCheckVersion:(long long)a0;
+ (long long)customHealthCheckIntervalMinutes;
+ (BOOL)shouldEnableFastSignIn;
+ (BOOL)isHealthCheckTTREnabled;
+ (void)setCustomHealthCheckIntervalEnabled:(BOOL)a0;
+ (BOOL)isCustomIdentityTaskIntervalEnabled;
+ (BOOL)shouldShowAccountContacts;

@end
