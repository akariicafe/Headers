@class NSString, NSMutableSet, DNDSModernAssertionSyncMetadataStore, DNDSClientDetailsProvider, NSObject;
@protocol DNDSAssertionSyncManagerDataSource, DNDSSyncService, DNDSBackingStore, OS_os_transaction, DNDSAssertionSyncManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DNDSModernAssertionSyncManager : NSObject <DNDSSyncServiceDelegate, DNDSSysdiagnoseDataProvider, DNDSAssertionSyncManager> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fuzzTimer;
    id<DNDSSyncService> _localSyncService;
    id<DNDSSyncService> _cloudSyncService;
    DNDSClientDetailsProvider *_clientDetailsProvider;
    DNDSModernAssertionSyncMetadataStore *_metadata;
    NSObject<DNDSBackingStore> *_metadataBackingStore;
    NSMutableSet *_timerQueuedDevices;
    BOOL _timerQueuedForceUpdate;
    unsigned long long _timerCurrentDelay;
    NSObject<OS_os_transaction> *_timerQueuedTransaction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDataSource> dataSource;
@property (weak, nonatomic) id<DNDSAssertionSyncManagerDelegate> delegate;

- (BOOL)_saveMetadataToBackingStore;
- (void)_queue_handleDidSendRequestIdentifier:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)dealloc;
- (void)syncService:(id)a0 didSendWithRequestIdentifier:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (void)_queue_sendStateSnapshotToPairedDevices:(id)a0 force:(BOOL)a1;
- (void)updateForStateUpdate:(id)a0;
- (BOOL)_maintainMetadataBackingStore;
- (id)initWithClientDetailsProvider:(id)a0 localSyncService:(id)a1 cloudSyncService:(id)a2;
- (void)_queue_handleMessage:(id)a0 withVersionNumber:(unsigned long long)a1 fromDeviceIdentifier:(id)a2;
- (void)resume;
- (void)syncService:(id)a0 didReceiveMessage:(id)a1 withVersionNumber:(unsigned long long)a2 messageType:(id)a3 fromDeviceIdentifier:(id)a4;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (void).cxx_destruct;
- (void)_queue_updateDevices;
- (void)updateDevices:(id)a0 force:(BOOL)a1 shouldFuzz:(BOOL)a2;
- (void)forceUpdateAllDevices;
- (BOOL)syncService:(id)a0 shouldAcceptIncomingMessage:(id)a1 withVersionNumber:(unsigned long long)a2 messageType:(id)a3 fromDeviceIdentifier:(id)a4;
- (void)updateDevices:(id)a0;
- (id)sysdiagnoseDataIdentifier;
- (void)_loadMetadataFromBackingStore;
- (void)updateForModeAssertionUpdateResult:(id)a0;

@end
