@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;
@property (retain, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (readonly, nonatomic) BOOL debugLogsEnabled;

+ (id)sharedTreatmentsConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedMetricsConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedBagConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedActionConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedWebUIConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAttestationConfig;
+ (id)sharedBiometricsConfig;
+ (id)sharedConfigOversize;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedMediaConfig;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
