@class UNSKeyedObservable, NSObject, UNSKeyedDataStoreRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationTopicRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (id)allBundleIdentifiers;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (void)setTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_queue_topicsForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_setTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (id)topicsForBundleIdentifier:(id)a0;
- (void)notificationSourcesDidUninstall:(id)a0;
- (long long)_maxObjectsPerKey;

@end
