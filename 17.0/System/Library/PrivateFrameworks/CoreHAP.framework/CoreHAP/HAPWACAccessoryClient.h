@class NSDate, NSString, HAPEasyConfigDevice, NSDictionary, HAPWACAccessoryBrowser, HAPAccessoryServer, NSMutableSet, NSObject, HAPWACAccessory;
@protocol OS_dispatch_queue, HAPWACAccessoryClientDelegate;

@interface HAPWACAccessoryClient : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HAPWACAccessory *hapWACAccessory;
@property (readonly, nonatomic) NSMutableSet *compatible2Pt4Networks;
@property (retain, nonatomic) NSDictionary *currentNetworkInfo;
@property (retain, nonatomic) NSDictionary *compatiblePrefixedNetwork;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) HAPEasyConfigDevice *ezConfigDevice;
@property (readonly, weak, nonatomic) HAPAccessoryServer *server;
@property (readonly, weak, nonatomic) HAPWACAccessoryBrowser *browser;
@property (nonatomic) unsigned long long restartPairingCount;
@property (copy, nonatomic) id /* block */ restartEasyConfigBlock;
@property (readonly, weak, nonatomic) id<HAPWACAccessoryClientDelegate> clientDelegate;
@property (nonatomic) BOOL metricSubmitted;
@property (nonatomic) double joinLatency;
@property (nonatomic) double restoreLatency;
@property (nonatomic) double configurationLatency;
@property (nonatomic) double preConfigDiscoveryTime;
@property (nonatomic) double postConfigDiscoveryTime;
@property (nonatomic) double setupCodeDelay;
@property (retain, nonatomic) NSDate *setupCodeRequestTime;
@property (nonatomic) unsigned long long retryCount;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (id)logIdentifier;
- (void)setState:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)restart;
- (void)_reportProgress:(unsigned long long)a0;
- (id)_setupEasyConfigWithDeviceInfo:(id)a0;
- (id)_findCompatiblePrefixedNetworks;
- (void)_callJoinCompletion:(id /* block */)a0 withError:(id)a1;
- (void)_callRestoreCompletion:(id /* block */)a0 withError:(id)a1;
- (void)_continuePairingWithSetupCode:(id)a0;
- (void)_joinAccessory:(id)a0 completion:(id /* block */)a1;
- (void)_joinAccessoryNetworkWithCompletion:(id /* block */)a0;
- (void)_joinCompleteWithStatus:(int)a0;
- (void)_performEasyConfigWithPairingPrompt:(void /* function */ *)a0 performPairSetup:(BOOL)a1 isSplit:(BOOL)a2 pairingRequest:(id)a3 completion:(id /* block */)a4;
- (void)_performPostConfig;
- (void)_restoreNetworkAndReportError:(id)a0 withCompletion:(id /* block */)a1;
- (void)_restoreNetworkWithCompletion:(id /* block */)a0;
- (id)continuePairingWithSetupCode:(id)a0;
- (void)dumpStatsWithError:(id)a0;
- (id)initWithWACAccessory:(id)a0 server:(id)a1 browser:(id)a2 compatible2Pt4Networks:(id)a3;
- (id)joinAccessoryNetworkWithCompletion:(id /* block */)a0;
- (id)performEasyConfigWithParingPrompt:(void /* function */ *)a0 performPairSetup:(BOOL)a1 isSplit:(BOOL)a2 pairingRequest:(id)a3 completion:(id /* block */)a4;
- (void)registerClientDelegate:(id)a0;
- (id)restoreNetworkWithCompletion:(id /* block */)a0;
- (void)stopEasyConfig;

@end
