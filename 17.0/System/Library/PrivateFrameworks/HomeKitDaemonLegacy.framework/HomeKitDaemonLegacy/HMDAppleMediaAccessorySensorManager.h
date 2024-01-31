@class HMSetupAccessoryDescription, NSUUID, NSString, HMFPairingIdentity, NSDate, NSObject, NSMutableArray;
@protocol HMDAppleMediaAccessorySensorManagerDataSource, HMDAppleMediaAccessorySensorManagerDataStore, HMDHPSManager, OS_dispatch_queue;

@interface HMDAppleMediaAccessorySensorManager : NSObject <HMFMessageReceiver, HMFLogging, HMDLocalAddAccessoryProgressDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isCurrentlyPairing;
    BOOL _hasAttemptedRecovery;
    BOOL _shouldUseDerivedSensorUUID;
    BOOL _hasPendingRetry;
    BOOL _shouldAttemptToSetServiceNames;
    NSUUID *_sensorAccessoryUUID;
    NSDate *_pairingStartTime;
    id<HMDHPSManager> _sensorClient;
    id<HMDAppleMediaAccessorySensorManagerDataSource> _dataSource;
    HMSetupAccessoryDescription *_setupDescription;
    id<HMDAppleMediaAccessorySensorManagerDataStore> _dataStore;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _pairingRetryCount;
    NSMutableArray *_renamedServiceIDs;
    HMFPairingIdentity *_pairingIdentity;
}

@property (readonly, copy) NSUUID *sensorAccessoryUUID;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0;
- (void)fetchADKSensorStatusCompletion:(id /* block */)a0;
- (void)_migrateToDataStoreIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)configureWithDataSource:(id)a0 hpsXPCClient:(id)a1 dataStore:(id)a2;
- (void)handleAccessoryAdded:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)handleErrorCaseTestMessage:(id)a0;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)localAccessoryAddRequiresConsent:(id)a0;
- (void)managerIsReadyToBePaired;

@end
