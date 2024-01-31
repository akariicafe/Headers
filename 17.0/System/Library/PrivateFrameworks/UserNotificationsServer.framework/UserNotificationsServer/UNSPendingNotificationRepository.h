@class UNSKeyedDataStoreRepository, UNCBundleLibrarian, NSObject, UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSPendingNotificationRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
    UNCBundleLibrarian *_librarian;
}

- (void)setPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (void)applicationStateDidRestore;
- (void)_queue_setPendingNotificationDictionaries:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (id)allBundleIdentifiers;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (id)_queue_pendingNotificationDictionariesForBundleIdentifier:(id)a0;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)a0;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)performMigration;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_performMigration;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1 librarian:(id)a2;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (void)_queue_setPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (void)notificationSourcesDidUninstall:(id)a0;
- (long long)_maxObjectsPerKey;
- (void)_queue_notifyObserversOfChangesFrom:(id)a0 to:(id)a1 forBundleIdentifier:(id)a2;

@end
