@interface DMCMultiUserModeUtilities : NSObject

+ (double)userSessionTimeout;
+ (BOOL)inSharediPadUserSession;
+ (BOOL)_updateMultiUserUserConfigurationFileWithKey:(id)a0 value:(id)a1;
+ (BOOL)isSharediPad;
+ (id)_configureResidentUsersNumberForSharedDeviceImmediately:(id)a0;
+ (BOOL)awaitUserConfigurationEnabled;
+ (BOOL)configureMAIDDefaultDomains:(id)a0;
+ (BOOL)configureAwaitUserConfiguration:(id)a0;
+ (unsigned long long)getDiskAvailableSize;
+ (BOOL)configureShouldSkipLanguageAndLocaleSetupForNewUsers:(BOOL)a0;
+ (BOOL)_updateMultiUserDeviceConfigurationFileWithKey:(id)a0 value:(id)a1;
+ (BOOL)markCurrentUserAsConfigured;
+ (BOOL)isPrimaryUserSession;
+ (id)_configureQuotaSizeForSharedDeviceImmediately:(id)a0;
+ (id)configureResidentUsersNumberForSharedDevice:(id)a0 preferenceDomain:(struct __CFString { } *)a1;
+ (id)managedAppleIDDefaultDomains;
+ (BOOL)shouldSkipLanguageAndLocaleSetupForNewUsers;
+ (id)configureQuotaSizeForSharedDevice:(id)a0 preferenceDomain:(struct __CFString { } *)a1;
+ (BOOL)configureOnlineAuthenticationGracePeriod:(id)a0;
+ (BOOL)useDynamicQuotaSize;
+ (id)onlineAuthenticationGracePeriod;
+ (BOOL)temporarySessionOnly;
+ (BOOL)configureTemporarySessionOnly:(BOOL)a0 useDynamicQuotaSize:(BOOL)a1 restoreQuotaSizeWhenDisabled:(BOOL)a2 preferenceDomain:(struct __CFString { } *)a3;
+ (unsigned long long)_previousQuotaSize;
+ (BOOL)_updateMultiUserConfigurationFileAtPath:(id)a0 key:(id)a1 value:(id)a2;
+ (BOOL)isCurrentUserConfigured;
+ (BOOL)configureUserSessionTimeout:(double)a0;
+ (BOOL)isEphemeralMultiUser;
+ (BOOL)isFirstSetupBuddyDone;
+ (BOOL)deviceHasMultipleUsers;
+ (unsigned long long)_getDiskSize;
+ (BOOL)configureTemporarySessionTimeout:(double)a0;
+ (double)temporarySessionTimeout;
+ (id)configureToSharedDeviceWithPreferenceDomain:(struct __CFString { } *)a0;

@end
