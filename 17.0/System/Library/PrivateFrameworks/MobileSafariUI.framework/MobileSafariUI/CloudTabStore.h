@class NSMutableArray, NSUUID, NSArray, NSString, NSHashTable, NSObject, WBSEncryptedCloudKeyValueStore;
@protocol OS_dispatch_queue, CloudTabStoreDelegate;

@interface CloudTabStore : WBSCloudTabStore <WBSCloudTabStoreDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSHashTable *_observers;
    WBSEncryptedCloudKeyValueStore *_syncedDevicesStore;
    WBSEncryptedCloudKeyValueStore *_userRequestsStore;
    BOOL _hasInitiatedFetchOfCloudKitDataAtLeastOnce;
    BOOL _hasCompletedFetchOfCloudKitDataAtLeastOnce;
    NSMutableArray *_fetchCloudKitDataCompletionHandlers;
    BOOL _didAttemptToCloseAtLeastOneTab;
}

@property (setter=_setCloudKitDataNeedsFetching:) BOOL _cloudKitDataNeedsFetching;
@property (readonly, nonatomic) NSUUID *currentDeviceUUID;
@property (weak, nonatomic) id<CloudTabStoreDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *allSyncedCloudTabDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCloudTabStore;

- (id)syncedCloudTabDevicesUsingFilter:(BOOL)a0;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)a0 syncCompletionHandler:(id /* block */)a1;
- (id)init;
- (id)_keyValueStoreDictionaryRepresentation:(long long)a0;
- (void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
- (id)syncedCloudTabDevices;
- (BOOL)closeTab:(id)a0 onDevice:(id)a1;
- (void)_removeConflictingDevice;
- (void)_syncedDevicesStoreDidUpdate:(id)a0;
- (BOOL)canSaveCloudTabsForCurrentDevice;
- (void)_cloudTabsEnabledDidChange;
- (id)_currentDeviceUUID;
- (BOOL)closeAllTabsOnDevice:(id)a0;
- (void)_removeObjectFromKeyValueStore:(long long)a0 forKey:(id)a1;
- (void)_saveCurrentDeviceCloudTabs:(id)a0 syncCompletionHandler:(id /* block */)a1;
- (void)_waitForInitialCloudKitFetchToComplete:(id /* block */)a0;
- (void)_clearAllDevices;
- (void)saveCurrentDeviceTabsFromBrowserSavedState:(id)a0;
- (void)_setDictionaryInKeyValueStore:(long long)a0 dictionary:(id)a1 forKey:(id)a2;
- (void).cxx_destruct;
- (void)_notifyCloudTabStoreDidUpdateWithType:(id)a0;
- (void)didUpdateDevicesAndCloseRequestsFromCloudKitForCloudTabStore:(id)a0 error:(id)a1;
- (id)_storeForIdentifier:(long long)a0;
- (id)currentDevice;
- (void)addCloudTabsObserver:(id)a0;
- (void)stopObservingTabStoreStateChanges;
- (void)startObservingTabStoreStateChanges;
- (BOOL)_shouldUseCloudKitForSavingCurrentDevice;
- (void)synchronizeCloudTabDevices;
- (void)_clearTabsForCurrentDeviceWithSyncCompletionHandler:(id /* block */)a0;
- (void)saveCurrentDeviceCloudTabsForEnteringBackground:(id)a0 completion:(id /* block */)a1;
- (BOOL)closeTabs:(id)a0 onDevice:(id)a1;
- (void)_callFetchCloudKitDataCompletionHandlers;
- (void)saveCurrentDeviceCloudTabs:(id)a0;
- (void)didGetCachedDevicesFromCloudKitForCloudTabStore:(id)a0;
- (void)_userRequestsStoreDidUpdate:(id)a0;
- (BOOL)cloudTabsAreEnabled;
- (void)_closeRequestedTabIfPossible:(id)a0;
- (void)_cloudKitDataDidUpdateOnServer:(id)a0;
- (void)clearTabsForCurrentDevice;

@end
