@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, NSString, PLCoreDataChangeMerger, NSObject, PLChangeHandlingNotificationObserver;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerCountLock;
    unsigned long long _observerCount;
    NSString *_observerCountLastTokenDescription;
}

- (void)stopObservingRemoteNotifications;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)a0 bundle:(id)a1 changeMerger:(id)a2;
- (void)_inq_setLastToken:(id)a0;
- (void)invalidate;
- (void)_advanceTokenToCurrent;
- (id)fetchTransactionsSinceLastToken;
- (id)localEventFromTransactions:(id)a0;
- (void)_inq_startObservingRemoteNotifications;
- (void)handleRemoteNotificationOfType:(long long)a0 withTransaction:(id)a1;
- (void)startObservingRemoteNotifications;
- (void).cxx_destruct;
- (void)distributeTransactions:(id)a0 withXPCTransaction:(id)a1;
- (void)beginObservingChanges;
- (void)forceUserInterfaceReload;
- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)a0 xpcTransaction:(id)a1;
- (void)distributeNewTransactionsSinceLastToken;
- (void)endObservingChanges;
- (id)makeManagedObjectContext;

@end
