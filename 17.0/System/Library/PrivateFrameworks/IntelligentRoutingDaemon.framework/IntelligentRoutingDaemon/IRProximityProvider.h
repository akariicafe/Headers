@class NSString, NSMutableDictionary, IRCMPDRFenceBridge, NSMutableSet, NSHashTable, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface IRProximityProvider : NSObject <IRProximityBridgeDelegateProtocol>

@property (retain, nonatomic) NSMutableSet *cachedNearbyDevices;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *retryCountPerProximityType;
@property (nonatomic) BOOL isUwbFenceSessionStarted;
@property (retain, nonatomic) NSDate *freezeDateNIHomeDevice;
@property (retain, nonatomic) NSMutableDictionary *proximityBridges;
@property (retain, nonatomic) IRCMPDRFenceBridge *uwbFenceBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)didContainer:(id)a0 changeWithUpdatetContainer:(id)a1 andRangeThreshold:(double)a2;
+ (BOOL)isBLEProximityType:(id)a0;
+ (BOOL)isUWBProximityType:(id)a0;

- (id)init;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_filterDevicesWithNearbyDevice:(id)a0;
- (void)_invalidateAndNullifyAllBridges;
- (void)didUpdateNearbyDevice:(id)a0 withName:(id)a1;
- (void)_incrementRetryCount:(id)a0;
- (void)_inspectNearbyDevicesAndSetPedestrianFenceSessionState:(id)a0;
- (void)_invalidateBridge:(id)a0;
- (BOOL)_isPdedestrianFenceAvailable;
- (void)_removeAllDevicesForProximityType:(id)a0;
- (void)_removeAllUwbDevicesAndClearFence;
- (void)_resetRetryCount:(id)a0;
- (void)_setupAndRunAllBridges;
- (void)_setupAndRunBridge:(id)a0;
- (void)_setupNIDevicePresenceBridgeIfNeeded;
- (void)_setupNIHomeDeviceObserverBridgeIfNeeded;
- (void)_setupProxControlSessionIfNeeded;
- (void)_updateObservers:(id)a0 withDevices:(id)a1 andProvider:(id)a2;
- (void)didBridgeFail:(id)a0;
- (void)didBridgeRunSuccesfully:(id)a0;
- (void)didBridgeSuspendEndedWithName:(id)a0;
- (void)didBridgeSuspendStartedWithName:(id)a0;
- (void)didInvalidateAllDevices:(id)a0;
- (void)didRemoveDevice:(id)a0 withName:(id)a1;

@end
