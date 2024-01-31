@class NSTimer, NSString, NSArray, NSURL, NSUserDefaults, NSDictionary, NSNumber, ICCloudThrottlingPolicy;

@interface ICCloudConfiguration : NSObject {
    NSDictionary *_configurationDictionary;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSTimer *_downloadTimer;
    NSUserDefaults *_userDefaults;
}

@property (class, readonly, nonatomic) ICCloudConfiguration *sharedConfiguration;
@property (class, readonly, copy, nonatomic) NSArray *availableConfigurationURLs;
@property (class, copy, nonatomic) NSURL *defaultConfigurationURL;

@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, nonatomic) unsigned long long appStoreRatingCohortPercentage;
@property (readonly, nonatomic) double appStoreRatingIdleTimeInterval;
@property (readonly, nonatomic) unsigned long long appStoreRatingLaunchCount;
@property (readonly, nonatomic) unsigned long long appStoreRatingOldestLaunchDayPeriod;
@property (readonly, nonatomic) unsigned long long appStoreRatingLaunchDayPeriod;
@property (readonly, nonatomic) unsigned long long appStoreRatingNoteCount;
@property (readonly, nonatomic) unsigned long long appStoreRatingRequestDayPeriod;
@property (readonly, nonatomic) ICCloudThrottlingPolicy *throttlingPolicy;
@property (readonly, nonatomic) BOOL shouldSyncWhenEnteringForeground;
@property (readonly, nonatomic) unsigned long long maxInlineAssetSizeBytes;
@property (readonly, nonatomic) unsigned long long maxAttachmentsPerNote;
@property (readonly, nonatomic) unsigned long long maxSubAttachmentsPerAttachment;
@property (readonly, nonatomic) unsigned long long resultsLimitPerSyncOperation;
@property (readonly, copy, nonatomic) NSNumber *maximumAttachmentSizeMB;
@property (readonly, copy, nonatomic) NSString *minimumClientVersion;
@property (readonly, nonatomic) BOOL shouldPerformTopHitSearch;
@property (readonly, nonatomic) unsigned long long mentionNotificationMaxRetries;
@property (readonly, nonatomic) unsigned long long launchTaskMaxRetries;
@property (readonly, nonatomic) unsigned long long serverSideUpdateTaskMaxFailureCount;
@property (readonly, nonatomic) unsigned long long durationForNextPasswordReask;
@property (readonly, nonatomic) unsigned long long unsupportedNoteDeviceCheckIntervalSeconds;
@property (readonly, nonatomic) BOOL requestUserNotificationAuthorizationAtLaunch;
@property (readonly, nonatomic) BOOL fastSyncEnabled;
@property (readonly, nonatomic) unsigned long long fastSyncMaximumMessageSizeBytes;
@property (readonly, nonatomic) BOOL fastSyncPaperKitEnablePCSEncryption;
@property (readonly, nonatomic) BOOL fastSyncPaperKitEnableEphemeralRecords;
@property (readonly, nonatomic) unsigned long long fastSyncMaximumThumbnailMessageSizeBytes;
@property (readonly, nonatomic) double fastSyncPresenceDebounceDuration;
@property (readonly, nonatomic) BOOL usesLocalConfigurationFile;

+ (void)loadSharedConfigurationWithQoSClass:(unsigned int)a0 completionHandler:(id /* block */)a1;
+ (void)loadSharedConfigurationWithCompletionHandler:(id /* block */)a0;
+ (BOOL)isConfigurationValid:(id)a0;
+ (id)overridableValueForKey:(id)a0 inConfigurationDictionary:(id)a1 userDefaults:(id)a2;
+ (id)cachedConfigurationURL;

- (id)initWithUserDefaults:(id)a0;
- (void)downloadConfigurationFromRemoteURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)initWithConfigurationDictionary:(id)a0 userDefaults:(id)a1 usesLocalConfigurationFile:(BOOL)a2;
- (void)loadConfigurationFromURL:(id)a0;
- (id)initWithUserDefaults:(id)a0 usesLocalConfigurationFile:(BOOL)a1;
- (void).cxx_destruct;
- (void)setConfigurationFromDictionary:(id)a0;
- (void)loadConfigurationFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)overridableValueForKey:(id)a0 inConfigurationDictionary:(id)a1;
- (void)downloadRemoteConfiguration:(id)a0;
- (void)loadLocalConfigurationFile;

@end
