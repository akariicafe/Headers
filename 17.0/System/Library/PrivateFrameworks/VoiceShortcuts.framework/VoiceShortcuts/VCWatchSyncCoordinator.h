@class SwiftVCDaemonXPCEventHandler, NSString, NSMutableSet, VCCompanionSyncService, PSYSyncCoordinator, NSObject;
@protocol VCSyncDataEndpoint, OS_dispatch_queue;

@interface VCWatchSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate>

@property (readonly, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator;
@property (readonly, nonatomic) NSMutableSet *startedSessions;
@property (readonly, nonatomic) id<VCSyncDataEndpoint> syncDataEndpoint;
@property (readonly, nonatomic) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) VCCompanionSyncService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)syncCoordinator:(id)a0 didInvalidateSyncSession:(id)a1;
- (void)dealloc;
- (void)syncCoordinator:(id)a0 beginSyncSession:(id)a1;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)a0;
- (void).cxx_destruct;
- (void)companionSyncService:(id)a0 didFinishSyncSession:(id)a1 withError:(id)a2;
- (void)companionSyncService:(id)a0 didRejectSessionWithError:(id)a1;
- (void)companionSyncService:(id)a0 outgoingSyncSession:(id)a1 didUpdateProgress:(double)a2;
- (void)companionSyncService:(id)a0 outgoingSyncSessionDidFinishSendingChanges:(id)a1;
- (long long)companionSyncService:(id)a0 typeForSession:(id)a1;
- (BOOL)companionSyncServiceShouldStartSession:(id)a0;
- (void)handleDeviceDidChangeVersionNotification;
- (void)handleDidUnpairNotification:(id)a0;
- (id)initWithSyncDataEndpoint:(id)a0 eventHandler:(id)a1;
- (void)requestSyncIfUnrestricted;
- (void)startObservingWatchChangeNotifications;
- (void)stopObservingWatchChangeNotifications;

@end
