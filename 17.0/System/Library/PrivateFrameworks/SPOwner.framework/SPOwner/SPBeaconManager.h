@class SPBeaconManagerSimpleBeaconUpdateInterface, SPLocalBeaconManager, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPBeaconManagerXPCProtocol;

@interface SPBeaconManager : NSObject

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> proxy;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> userAgentProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) SPBeaconManagerSimpleBeaconUpdateInterface *simpleBeaconUpdateInterface;
@property (retain, nonatomic) SPLocalBeaconManager *localBeaconingManager;
@property (copy, nonatomic) id /* block */ stateChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ statusChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ beaconingKeyChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ nearbyTokensChangedBlockWithCompletion;

- (id)init;
- (id)remoteInterface;
- (void)dealloc;
- (void)allBeaconsWithCompletion:(id /* block */)a0;
- (void)createDuplicateBeaconsForBeacon:(id)a0 skipGroupIdentifier:(BOOL)a1 count:(long long)a2 completion:(id /* block */)a3;
- (void)roleCategoriesWithCompletion:(id /* block */)a0;
- (void)start;
- (void)setCurrentWildKeyIndex:(long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void)setRole:(long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void)fetchKeyMapFileDescriptorForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)createKeyReconcilerWithCompletion:(id /* block */)a0;
- (void)purgeOwnedDeviceKeyRecordsForUUID:(id)a0 completion:(id /* block */)a1;
- (void)connectionTokensForBeaconUUID:(id)a0 criteria:(id)a1 completion:(id /* block */)a2;
- (void)allDuriansWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)connectionTokensForBeaconUUID:(id)a0 completion:(id /* block */)a1;
- (void)beaconForUUID:(id)a0 completion:(id /* block */)a1;
- (void)startUpdatingSimpleBeaconsWithContext:(id)a0 collectionDifference:(id /* block */)a1 completion:(id /* block */)a2;
- (void)createOwnedDeviceKeyRecordForUUID:(id)a0 completion:(id /* block */)a1;
- (void)ownedDeviceKeyRecordsForUUID:(id)a0 completion:(id /* block */)a1;
- (void)repairDataStore:(id /* block */)a0;
- (void)setAlignmentUncertainty:(double)a0 atIndex:(unsigned long long)a1 date:(id)a2 forBeacon:(id)a3 completion:(id /* block */)a4;
- (void)allBeaconsOfType:(id)a0 completion:(id /* block */)a1;
- (void)allBeaconingKeysForUUID:(id)a0 dateInterval:(id)a1 forceGenerate:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateBeacon:(id)a0 updates:(id)a1 completion:(id /* block */)a2;
- (void)connectedToBeacon:(id)a0 withIndex:(unsigned long long)a1;
- (void)setSuppressLPEMBeaconing:(BOOL)a0 completion:(id /* block */)a1;
- (void)removeDuplicateBeaconsWithCompletion:(id /* block */)a0;
- (void)allBeaconsOfTypes:(id)a0 includeDupes:(BOOL)a1 includeHidden:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchUserStatsForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)beaconingKeysForUUID:(id)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (void)setKeyRollInterval:(unsigned long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)stopUpdatingSimpleBeaconsWithCompletion:(id /* block */)a0;
- (void)setUserHasAcknowledgedFindMy:(BOOL)a0 completion:(id /* block */)a1;
- (void)notificationBeaconForSubscriptionId:(id)a0 completion:(id /* block */)a1;
- (void)setWildKeyBase:(unsigned long long)a0 interval:(unsigned long long)a1 fallback:(unsigned long long)a2 forBeacon:(id)a3 completion:(id /* block */)a4;
- (void)unacceptedBeaconsWithCompletion:(id /* block */)a0;
- (void)isLPEMModeSupported:(id /* block */)a0;
- (void)connectionTokensForBeaconUUID:(id)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (void)postedLocalNotifyWhenFoundNotificationForUUID:(id)a0 completion:(id /* block */)a1;
- (void)updateObfuscatedIdentifierWithCompletion:(id /* block */)a0;
- (void)userHasAcknowledgeFindMyWithCompletion:(id /* block */)a0;
- (void)allBeaconsOfTypes:(id)a0 completion:(id /* block */)a1;
- (void)connectedToBeacon:(id)a0 withIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchFirmwareVersionForBeacon:(id)a0 completion:(id /* block */)a1;

@end
