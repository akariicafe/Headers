@class NSString, MTSyncChangeQueue, MTMetrics;
@protocol MTSyncDataModel, MTSyncService, NAScheduler, MTSyncStatusProvider;

@interface MTSyncServiceManager : NSObject <MTSyncStatusProviderDelegate, MTSyncServiceDelegate, MTSyncManager, MTAgentDiagnosticDelegate>

@property (retain, nonatomic) id<MTSyncService> syncService;
@property (retain, nonatomic) id<MTSyncStatusProvider> syncStatusProvider;
@property (weak, nonatomic) id<MTSyncDataModel> syncDataModel;
@property (retain, nonatomic) MTSyncChangeQueue *syncChangeQueue;
@property (retain, nonatomic) MTMetrics *syncMetrics;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (nonatomic) BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (id)initWithSyncService:(id)a0 syncStatusProvider:(id)a1 syncDataModel:(id)a2 syncMetrics:(id)a3;
- (id)pendingChanges;
- (void)applyChange:(id)a0;
- (void)syncStatusProvider:(id)a0 didChangeSyncStatus:(unsigned long long)a1;
- (void)startSyncService;
- (void).cxx_destruct;
- (id)requestSync:(unsigned long long)a0;
- (void)checkForPendingChanges;
- (void)pendingChangesSent:(id)a0;
- (void)stopSyncService;
- (id)initWithSyncService:(id)a0 syncStatusProvider:(id)a1 syncDataModel:(id)a2 syncMetrics:(id)a3 syncChangeStore:(id)a4;
- (void)resetDataStore;
- (void)syncChange:(id)a0;

@end
