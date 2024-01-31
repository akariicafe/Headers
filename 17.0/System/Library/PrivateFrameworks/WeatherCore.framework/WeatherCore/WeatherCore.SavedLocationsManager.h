@interface WeatherCore.SavedLocationsManager : NSObject <WCWeatherSharedPreferencesChangeObserver> {
    void /* unknown type, empty encoding */ savedLocations;
    void /* unknown type, empty encoding */ locationDataModels;
    void /* unknown type, empty encoding */ syncedDataManager;
    void /* unknown type, empty encoding */ localKeyValueStore;
    void /* unknown type, empty encoding */ keyValueStoreProvider;
    void /* unknown type, empty encoding */ locationsReconciler;
    void /* unknown type, empty encoding */ savedLocationsReader;
    void /* unknown type, empty encoding */ coherenceMigrator;
    void /* unknown type, empty encoding */ nanoSyncManager;
    void /* unknown type, empty encoding */ locationMetadataManager;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ notifyQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_useCoherence;
    void /* unknown type, empty encoding */ $__lazy_storage_$_forceRemoveLocalCoherenceContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_forceMigrateToCoherence;
    void /* unknown type, empty encoding */ testConfigurable;
    void /* unknown type, empty encoding */ nanoSyncTask;
}

- (void)sharedPreferencesChangedExternally;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
