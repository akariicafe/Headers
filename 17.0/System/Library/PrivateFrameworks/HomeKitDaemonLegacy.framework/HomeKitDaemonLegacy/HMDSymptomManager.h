@class NSMapTable, NSString, HMFWiFiManager, NSObject, NSNotificationCenter;
@protocol OS_dispatch_queue, HMDCompanionLinkClient, HMDSharingDeviceDiscovery;

@interface HMDSymptomManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDSymptomManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) id<HMDSharingDeviceDiscovery> deviceDiscovery;
@property (readonly, nonatomic) id<HMDCompanionLinkClient> companionLinkClient;
@property (readonly, nonatomic) HMFWiFiManager *wifiManager;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSMapTable *symptomContainerByRegisteredAccessory;
@property (readonly, nonatomic) NSMapTable *nearbySFDevices;
@property (readonly, nonatomic) NSMapTable *networkReachableRPCompanionLinkDevices;
@property (nonatomic) unsigned long long deviceDiscoveryFlags;
@property (nonatomic) BOOL supportsRegisteringAccessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_symptomsForProblemFlags:(unsigned long long)a0;

- (void)_start;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_stop;
- (void)_initiateFixForAccessory:(id)a0 completion:(id /* block */)a1;
- (id)_registeredAccessoryWithIDSIdentifier:(id)a0;
- (void)_rpDeviceChangedHandler:(id)a0;
- (void)_rpDeviceFoundHandler:(id)a0;
- (void)_rpDeviceLostHandler:(id)a0;
- (void)_sfDeviceChangedHandler:(id)a0;
- (void)_sfDeviceFoundHandler:(id)a0;
- (void)_sfDeviceLostHandler:(id)a0;
- (void)_startCompanionLinkClient;
- (void)_startDeviceDiscovery;
- (void)_stopCompanionLinkClient;
- (void)_stopDeviceDiscovery;
- (id)_symptomsForRegisteredAccessory:(id)a0;
- (void)_updateSymptomsForAllRegisteredAccessories;
- (void)_updateSymptomsForRegisteredAccessory:(id)a0;
- (void)_updateSymptomsForRegisteredAccessoryWithIDSIdentifier:(id)a0;
- (void)deregisterAccessory:(id)a0;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (void)handleAccessoryWiFiNetworkInfoUpdatedNotification:(id)a0;
- (void)handleCurrentNetworkDidChangeNotification:(id)a0;
- (id)initWithQueue:(id)a0 deviceDiscovery:(id)a1 companionLinkClient:(id)a2 wifiManager:(id)a3 notificationCenter:(id)a4;
- (void)initiateFixForAccessory:(id)a0 completion:(id /* block */)a1;
- (void)registerAccessory:(id)a0 delegate:(id)a1;
- (void)startDiscoveringSymptomsRequiringNearbyInfo;
- (void)stopDiscoveringSymptomsRequiringNearbyInfo;

@end
