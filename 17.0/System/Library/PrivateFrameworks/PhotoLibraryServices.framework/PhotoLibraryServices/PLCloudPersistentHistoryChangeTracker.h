@class NSString, NSPersistentStoreCoordinator, NSPersistentHistoryToken, PLChangeHandlingNotificationObserver;
@protocol PLCloudPersistentHistoryChangeTrackerDelegate;

@interface PLCloudPersistentHistoryChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSPersistentStoreCoordinator *_coordinator;
    PLChangeHandlingNotificationObserver *_notificationObserver;
}

@property (readonly, copy) NSString *name;
@property (weak, nonatomic) id<PLCloudPersistentHistoryChangeTrackerDelegate> delegate;
@property (readonly, copy) NSString *lastKnownTokenDescription;
@property (readonly) BOOL hasChangeTrackerToken;

- (void)disconnect;
- (id)initWithPersistentStoreCoordinator:(id)a0 libraryBundle:(id)a1;
- (BOOL)isConnected;
- (void)forceTokenToCurrent;
- (id)lastKnownTokenFromDisk;
- (void)clearToken;
- (BOOL)connect;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (void)updateLastKnownTokenToResult:(id)a0;
- (void)_unregisterForChangeHandlingNotifications;
- (id)fetchAllEventsInContext:(id)a0;
- (void).cxx_destruct;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (id)currentToken;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)_registerForChangeHandlingNotifications;
- (void)_updateLastKnownTokensToToken:(id)a0;

@end
