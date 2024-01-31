@interface TextToSpeechVoiceBankingSupport.TTSVBDataStore : NSObject {
    void /* unknown type, empty encoding */ eventSubject;
    void /* unknown type, empty encoding */ configureation;
    void /* unknown type, empty encoding */ voiceBankingRootURL;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ calloutQueue;
    void /* unknown type, empty encoding */ cloudStoreName;
    void /* unknown type, empty encoding */ localStoreName;
    void /* unknown type, empty encoding */ managedObjectModelName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cloudDatastoreURL;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localDatastoreURL;
    void /* unknown type, empty encoding */ $__lazy_storage_$_managedObjectModelURL;
    void /* unknown type, empty encoding */ $__lazy_storage_$_container;
    void /* unknown type, empty encoding */ queue_shouldAttemptLoad;
    void /* unknown type, empty encoding */ queue_loadError;
    void /* unknown type, empty encoding */ persistentHistoryProcessingDatesPreferenceKey;
}

- (id)init;
- (void).cxx_destruct;
- (void)handleDidResetCloudSync:(id)a0;
- (void)handleManagedObjectContextDidChange:(id)a0;
- (void)handleManagedObjectContextDidMergeChangesObjectIDs:(id)a0;
- (void)handleManagedObjectContextDidSave:(id)a0;
- (void)handleManagedObjectContextDidSaveObjectIDs:(id)a0;
- (void)handlePersistentCloudKitContainerEventChanged:(id)a0;
- (void)handlePersistentStoreRemoteChange:(id)a0;
- (void)handleStoresWillChange:(id)a0;
- (void)handleWillResetCloudSync:(id)a0;

@end
