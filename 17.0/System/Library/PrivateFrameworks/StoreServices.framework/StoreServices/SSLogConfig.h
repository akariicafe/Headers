@class SSLogFileOptions, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) SSLogFileOptions *backingLogFileOptions;
@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *outputDirectory;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *subsystem;
@property (nonatomic) BOOL writeToDisk;
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (readonly, nonatomic) SSLogFileOptions *logFileOptions;
@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (readonly, nonatomic) BOOL shouldLog;
@property (readonly, nonatomic) BOOL shouldLogToDisk;

+ (id)sharedAccountsConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedFollowUpConfig;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (id)sharedWriteToDiskConfig;
+ (id)sharediTunesStoreConfig;
+ (id)sharedBagConfig;
+ (id)_logFilenameForSubsystem:(id)a0 category:(id)a1;
+ (id)sharedStoreServicesConfig;
+ (id)sharedAskPermissionExtensionConfig;
+ (id)sharedStoreServicesConfigOversize;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (id)sharedPushNotificationConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedFairPlayAnisetteConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedDaemonConfigOversize;
+ (BOOL)_deviceIsRunningSeedBuild;
+ (id)sharedConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedFeatureEnablerMigrationConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (id)sharediTunesStoreConfigOversize;
+ (id)sharedAccountsAuthenticationConfig;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedAccountsCookiesConfig;
+ (id)_logFileDirectoryPathForSubsystem:(id)a0 category:(id)a1;
+ (id)sharedAccountsLogoutConfig;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
