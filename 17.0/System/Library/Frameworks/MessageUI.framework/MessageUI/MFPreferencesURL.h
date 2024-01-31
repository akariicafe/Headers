@interface MFPreferencesURL : NSObject

+ (id)_accountInfoSettingsURLForAccount:(id)a0 preferenceURLType:(long long)a1;
+ (id)_pathComponentsForAccount:(id)a0 preferenceURLType:(long long)a1;
+ (id)_urlForRoot:(id)a0 pathComponents:(id)a1;
+ (id)accountInfoURLForAccount:(id)a0;
+ (id)accountURLForAccount:(id)a0;
+ (id)addAccountURL;
+ (id)advancedAccountInfoURLForAccount:(id)a0;
+ (id)blockedSenderURL;
+ (id)hideMyEmailURL;
+ (id)storageManagementURL;
+ (id)vipSenderListURL;

@end
