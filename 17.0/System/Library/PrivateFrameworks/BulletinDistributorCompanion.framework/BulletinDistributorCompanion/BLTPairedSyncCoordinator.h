@class PSYInitialSyncStateObserver, NSString, PSYSyncSessionObserver, PSYSyncCoordinator;

@interface BLTPairedSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, PSYSyncSessionObserverDelegate>

@property (retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator;
@property (retain, nonatomic) PSYInitialSyncStateObserver *pairedInitialSyncObserver;
@property (retain, nonatomic) PSYSyncSessionObserver *pairedSyncObserver;
@property (nonatomic) BOOL clientSyncComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncState;
+ (void)syncDidComplete;
+ (void)reportProgress:(double)a0;

- (void)initialSyncStateObserver:(id)a0 initialSyncDidCompleteForPairingIdentifier:(id)a1;
- (id)init;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;
- (void).cxx_destruct;
- (void)_reportProgress:(double)a0;
- (void)initialSyncStateObserver:(id)a0 syncDidCompleteForPairingIdentifier:(id)a1;
- (void)initialSyncStateObserver:(id)a0 syncDidResetForPairingIdentifier:(id)a1;
- (void)_syncDidComplete;
- (void)syncSessionObserver:(id)a0 didInvalidateSyncSession:(id)a1;
- (void)syncSessionObserver:(id)a0 didReceiveUpdate:(id)a1;
- (void)syncSessionObserver:(id)a0 receivedSyncSession:(id)a1;
- (void)_initInitialSyncStateComplete;

@end
