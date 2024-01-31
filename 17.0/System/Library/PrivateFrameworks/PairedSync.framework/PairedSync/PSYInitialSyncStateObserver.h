@class NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol PSYInitialSyncStateObserverDelegate, OS_dispatch_queue;

@interface PSYInitialSyncStateObserver : NSObject <PSYSyncStateObserverInterface> {
    NSMutableDictionary *_syncStateCache;
    NSMutableDictionary *_initialSyncStateCache;
    NSMutableDictionary *_syncStateEntryCache;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    BOOL _init;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _daemonStartedNotifyToken;
    int _syncSwitchNotifyToken;
    NSMutableDictionary *_nrDevices;
}

@property (weak) id<PSYInitialSyncStateObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)requestSyncStateForPairingIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)_handleConnectionInvalidated;
- (void)_queue_querySyncState;
- (void)_registerMonitorNRDevice:(id)a0 forMigrationChanges:(id /* block */)a1;
- (void)_registerMonitorAllNRDevicesForMigrationChanges:(id /* block */)a0;
- (void)_queue_notifyCanRetryFailedRequests;
- (void).cxx_destruct;
- (oneway void)didUpdateSyncForPairingID:(id)a0;
- (void)_queue_updateSyncStates:(id)a0 notifyDelegateOfChanges:(BOOL)a1;
- (void)_queue_initializeIfNotInitialized;
- (id)initWithDelegate:(id)a0;
- (void)requestInitialSyncStateForPairingIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_unregisterNRDeviceMonitors;
- (void)requestInitialNonMigrationSyncStateForPairingIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)syncProviderWithErrorHandler:(id /* block */)a0;

@end
