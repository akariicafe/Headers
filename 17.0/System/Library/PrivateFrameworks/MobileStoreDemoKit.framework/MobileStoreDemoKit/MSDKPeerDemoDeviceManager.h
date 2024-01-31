@class NSArray, NSMutableDictionary, NSXPCConnection, NSString;
@protocol MSDKPeerEventsObserverProtocol;

@interface MSDKPeerDemoDeviceManager : NSObject <MSDDemoPeerServiceConsumerProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSMutableDictionary *peers;
@property (weak, nonatomic) id<MSDKPeerEventsObserverProtocol> observer;
@property (readonly, copy, nonatomic) NSArray *discoveredPeers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_cleanUpUponXPCDisconnection;
- (BOOL)_setUpXPCConnectionIfNeeded;
- (void)adjustVolumeOnPeer:(id)a0 toValue:(float)a1 forCategory:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)attemptPairingWithPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)enumerateTestScriptsOnPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)fetchDeviceInfoFromPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)initiateAirPlayAssistedFromPeer:(id)a0 usingParameters:(id)a1 discoveryMode:(unsigned long long)a2 withCompletion:(id /* block */)a3;
- (void)invokeInputRecoveryOnPeer:(id)a0 forType:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)launchAppOnPeer:(id)a0 appIdentifier:(id)a1 withCompletion:(id /* block */)a2;
- (void)launchTestScriptOnPeer:(id)a0 ofIdentifier:(id)a1 asRoot:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)launchTestScriptOnPeer:(id)a0 ofIdentifier:(id)a1 withCompletion:(id /* block */)a2;
- (void)listAppsOnPeer:(id)a0 appKind:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)listAvailableEnvironmentsOnPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)loadLSMeasurementsOnPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)obtainGKMetricsFromPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)obtainGKResultsFromPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)providerDidDiscoverNewPeer:(id)a0;
- (void)providerDidLoseExistingPeerOfID:(id)a0;
- (void)providerDidUpdateDeviceInfoOnPeerOfID:(id)a0 withNewProperties:(id)a1;
- (BOOL)registerPeerEventsObserver:(id)a0;
- (void)resetToPassThroughOnPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)retrieveHSCoachingSuggestionFromPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)setActiveEnvironmentOnPeer:(id)a0 environmentID:(id)a1 withCompletion:(id /* block */)a2;
- (void)startPeerDiscoveryWithCompletion:(id /* block */)a0;
- (void)subscribeDeviceInfoFromPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)terminateAppOnPeer:(id)a0 appIdentifier:(id)a1 withCompletion:(id /* block */)a2;
- (void)triggerSnapshotRevertOnPeer:(id)a0 withCompletion:(id /* block */)a1;
- (void)unregisterPeerEventsObserver;

@end
