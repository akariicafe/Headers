@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (id)init;
- (void)registerForCloudStorageSettingsNotifications;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void)registerForCloudStorageDeletedByUserNotification;
- (void).cxx_destruct;
- (void)handleDeleteDataRequest;
- (void)handleBackupPreferencesDidChange;

@end
