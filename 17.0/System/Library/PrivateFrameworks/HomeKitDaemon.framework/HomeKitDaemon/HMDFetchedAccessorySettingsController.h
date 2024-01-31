@class NSString, NSMutableDictionary, NSMutableSet, HMDFetchedAccessorySettingsControllerMutableKeyPathMap, NSObject, NSNotificationCenter;
@protocol OS_dispatch_queue, HMDFetchedAccessorySettingsControllerDataSource, OS_os_log;

@interface HMDFetchedAccessorySettingsController : NSObject <HMDFetchedSettingsDriverDelegate, HMFLogging, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_keyPathToSettingCache;
    NSObject<OS_os_log> *_logger;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDFetchedAccessorySettingsControllerDataSource> dataSource;
@property (readonly) HMDFetchedAccessorySettingsControllerMutableKeyPathMap *driverMap;
@property (retain) NSMutableSet *pendingFetchKeyPaths;
@property (readonly, weak) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)start;
- (void).cxx_destruct;
- (id)cachedSettingForKeyPath:(id)a0;
- (void)driver:(id)a0 didUpdatePrimaryUserInfo:(id)a1;
- (void)driver:(id)a0 didUpdateSettings:(id)a1;
- (void)driverDidReload:(id)a0;
- (void)fetchSettingsForKeyPaths:(id)a0 completion:(id /* block */)a1;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 drivers:(id)a2;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 drivers:(id)a2 notificationCenter:(id)a3;
- (void)languageValueListWithCompletion:(id /* block */)a0;
- (void)updateSettingWithKeyPath:(id)a0 settingValue:(id)a1 completion:(id /* block */)a2;

@end
