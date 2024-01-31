@class NSUUID, FMXPCServiceDescription, NSDate, NSData, FMXPCActivity, NSString, NSDictionary, FMXPCSession, NSObject, SPBLEStateMonitor, SPMonitorsWrapper;
@protocol OS_dispatch_queue, SPLocalBeaconManagerXPCProtocol, OS_dispatch_source;

@interface SPLocalBeaconManager : NSObject <SPMonitorsWrapperDelegate, SPBLEStateMonitorDelegate>

@property (retain, nonatomic) FMXPCServiceDescription *spdServiceDescription;
@property (retain, nonatomic) FMXPCServiceDescription *findMyBeaconingDaemonServiceDescription;
@property (retain, nonatomic) FMXPCSession *spdSession;
@property (retain, nonatomic) FMXPCSession *findMyBeaconDaemonSession;
@property (retain, nonatomic) id<SPLocalBeaconManagerXPCProtocol> searchPartyDaemonProxy;
@property (retain, nonatomic) id<SPLocalBeaconManagerXPCProtocol> findMyBeaconDaemonProxy;
@property (retain, nonatomic) id<SPLocalBeaconManagerXPCProtocol> userAgentProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCActivity *periodicActionXpcActivity;
@property (nonatomic) BOOL schedulePeriodicActionXpcActivity;
@property (nonatomic) double periodicActionXpcActivityInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicActionDispatchTimer;
@property (retain, nonatomic) SPMonitorsWrapper *monitorWrapper;
@property (retain, nonatomic) SPBLEStateMonitor *bleMonitor;
@property (nonatomic) BOOL currentBeaconingState;
@property (nonatomic) BOOL forceBeaconingOff;
@property (nonatomic) unsigned char currentStatus;
@property (nonatomic) long long cachedLocalBeaconManagerState;
@property (nonatomic) BOOL initialStateChangeSent;
@property (nonatomic) BOOL beaconFromNVRAM;
@property (nonatomic) BOOL isOfflineFindingEnabled;
@property (copy, nonatomic) NSUUID *selfBeaconingUUID;
@property (nonatomic) unsigned long long selfBeaconingIndex;
@property (copy, nonatomic) NSDate *selfBeaconingPairDate;
@property (copy, nonatomic) NSData *selfBeaconingDerivedSharedSecretKey;
@property (copy, nonatomic) NSData *selfBeaconingPublicKey;
@property (copy, nonatomic) NSDictionary *selfBeaconingConfigurations;
@property (nonatomic) BOOL alreadyPoisonedLocalBeacon;
@property (copy, nonatomic) id /* block */ stateChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ statusChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ beaconingKeyChangedBlockWithCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scheduleDateInterval:(id)a0;

- (id)init;
- (id)remoteInterface;
- (void)dealloc;
- (void)start;
- (void)_invalidate;
- (void)invalidate;
- (void).cxx_destruct;
- (double)timeIntervalToNextFireDateFromDate:(id)a0;
- (void)timerFired;
- (void)beaconsChanged:(id)a0;
- (void)beaconingStateChanged:(long long)a0;
- (void)beaconingStateChangedNotification:(id)a0;
- (void)bleMonitor:(id)a0 didChangeState:(unsigned long long)a1;
- (unsigned long long)bucketWithBaseTime:(id)a0 date:(id)a1;
- (id)dateIntervalForIndex:(unsigned long long)a0 baseDate:(id)a1;
- (void)generateBeaconingKeysOfType:(long long)a0 now:(id)a1 withCompletion:(id /* block */)a2;
- (id)generateOfflineAdvertisingKeysForReason:(long long)a0 now:(id)a1;
- (void)handlerForActivity:(id)a0 state:(long long)a1;
- (BOOL)isBeaconing;
- (void)localActivationLockInfoChanged;
- (void)notifyBeaconingKeysChangedBlockWithCompletion:(id /* block */)a0;
- (void)notifyNearbyTokensChangedBlockWithCompletion:(id /* block */)a0;
- (void)notifyStateChange:(BOOL)a0;
- (void)notifyStatusChange:(unsigned char)a0;
- (void)periodicActionWithCompletion:(id /* block */)a0;
- (id)rawNVRAMData;
- (void)refreshBeaconingState;
- (id)searchPartyUserAgentProxy;
- (void)setPeriodicActionDispatchTimerWithInterval:(double)a0;
- (void)stateDidChange:(BOOL)a0 powerState:(unsigned long long)a1;
- (void)updateStateFromNVRAM;
- (id)xpcActivityCriteria:(id)a0;

@end
