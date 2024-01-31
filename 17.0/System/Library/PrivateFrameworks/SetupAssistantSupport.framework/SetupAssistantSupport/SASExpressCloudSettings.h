@class SASCloudKitClient, NSObject;
@protocol OS_dispatch_queue;

@interface SASExpressCloudSettings : NSObject

@property (retain, nonatomic) SASCloudKitClient *cloudKitClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)fetchSettingsWithCompletion:(id /* block */)a0;
+ (id)createExpressSettingsWithQueue:(id)a0;
+ (int)_appearanceValue;
+ (id)_displayZoomOption;
+ (id)_isFindMyEnabled;
+ (id)_isScreenTimeEnabled;
+ (id)privacyBundleForIdentifier:(id)a0;
+ (void)updateSettings:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)_isCloudKitError:(id)a0;
+ (id)_predicateForRecordsModifiedInPastMonth;
+ (id)_queryForSettingsForDeviceID:(id)a0;
+ (id)_queryForSettingsFromPastMonth;
+ (id)_queryForSettingsFromPastMonthForDeviceClass:(id)a0;
+ (id)_queryForSettingsFromPastMonthForPlatform:(unsigned long long)a0;
+ (id)_zoneForSettings;

- (id)init;
- (id)initWithContainerIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setXpcActivity:(id)a0;
- (void)fetchSettingsWithCompletion:(id /* block */)a0;
- (void)updateSettings:(id)a0 withCompletion:(id /* block */)a1;
- (id)_createSettingsRecordInZoneID:(id)a0 forDeviceID:(id)a1;
- (void)_fetchAppropriateSettingsWithCompletion:(id /* block */)a0;
- (void)_setupRecordZoneWithName:(id)a0 completion:(id /* block */)a1;

@end
