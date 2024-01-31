@class HKObserverSet, NSString, HDMCAccountDevicesInfo, HDDeviceKeyValueStoreManager, HKMCSettingsManager;

@interface HDMCDeviceScopedStorageManager : NSObject <HKMCSettingsManagerObserver> {
    HDDeviceKeyValueStoreManager *_keyValueStore;
    HKMCSettingsManager *_settingsManager;
    HKObserverSet *_observers;
}

@property (copy, nonatomic) HDMCAccountDevicesInfo *unitTest_accountDevicesInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 settingsManager:(id)a1;
- (id)_updateLocalDeviceValuesNowWithError:(id *)a0;
- (id)accountDevicesInfoWithError:(id *)a0;
- (BOOL)updateLocalDeviceValuesNowWithError:(id *)a0;

@end
