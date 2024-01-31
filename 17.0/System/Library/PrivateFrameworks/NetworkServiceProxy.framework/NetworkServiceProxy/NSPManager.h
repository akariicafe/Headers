@class NWPathEvaluator, NSArray, NSPFlowDivert, NSString, NSMutableDictionary, NSDictionary, NSMutableArray, NSPAppRule, NPKeyBag, NSPConfiguration, NSObject;
@protocol NSPManagerDelegate, OS_nw_endpoint;

@interface NSPManager : NSObject <NPTunnelDelegate, NEAppProxyProviderContainerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
}

@property (readonly, nonatomic) NWPathEvaluator *policyEvaluator;
@property (retain) NSDictionary *appRules;
@property (retain) NPKeyBag *keybag;
@property (retain) NPKeyBag *inUseKeybag;
@property (retain) NSPConfiguration *configuration;
@property (retain) NSPFlowDivert *flowDivert;
@property (retain, nonatomic) NSMutableDictionary *flowInfoMap;
@property (nonatomic) BOOL isObserving;
@property (retain, nonatomic) NSArray *currentAgents;
@property (readonly, nonatomic) NSMutableDictionary *fallbackCounts;
@property (weak, nonatomic) id<NSPManagerDelegate> delegate;
@property (readonly, nonatomic) NSString *signingIdentifier;
@property (retain) NSPAppRule *matchingAppRule;
@property (readonly, nonatomic) NSMutableArray *knownFlows;
@property (copy, nonatomic) id /* block */ pendingCancellationHandler;
@property (retain) NSArray *testLatencyMap;
@property BOOL testFetchDaypass;
@property unsigned long long testLatencyMapIndex;
@property (nonatomic) unsigned int nextFlowID;
@property (nonatomic) unsigned int tunnelCount;
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *currentTunnelEndpoint;
@property (readonly, nonatomic) NWPathEvaluator *pathEvaluator;
@property (readonly, nonatomic) BOOL currentNetworkHasProxies;
@property (readonly, nonatomic) BOOL isEnabled;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (copy, nonatomic) id /* block */ connectionInfoSetHandler;
@property (copy, nonatomic) id /* block */ tunnelConnectedHandler;
@property (readonly) double timeIntervalSinceLastUsage;
@property BOOL disableIdleTimeout;
@property (readonly) BOOL isFirstTunnel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void)start;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (void)fetchStateForClient:(id)a0 withPeerEndpoint:(id)a1 completionHandler:(id /* block */)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)container:(id)a0 didRequestFlowDivertControlSocketWithCompletionHandler:(id /* block */)a1;
- (void)container:(id)a0 didStartWithError:(id)a1;
- (id)getConnectionInfoForIdentifier:(id)a0;
- (id)buildTestLatencyMap:(id)a0;
- (void)container:(id)a0 didFailWithError:(id)a1;
- (void)container:(id)a0 didSetTunnelConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (id)createAppRuleMapWithRules:(id)a0;
- (id)createReplacementEndpointForEndpoint:(id)a0 properties:(id)a1;
- (id)createTransformsForEndpoint:(id)a0 parameters:(id)a1;
- (id)getAppRuleMatchingParameters:(id)a0 flowProperties:(id)a1;
- (unsigned long long)getTestLatencyRTT:(id)a0 parameters:(struct networkParameters { BOOL x0; BOOL x1; } *)a1;
- (void)handlePolicyUpdate;
- (void)ingestTestLatencyMap:(id)a0 local:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)instantiateFlowWithTunnel:(id)a0 inputProtocol:(struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *)a1;
- (id)instantiateTunnelWithEndpoint:(id)a0 parameters:(id)a1;
- (void)resetTestLatencyMapIndex:(unsigned long long)a0;
- (void)sendUsageReport:(id)a0;
- (void)setConnectionInfo:(id)a0 forIdentifier:(id)a1;
- (BOOL)shouldSetConfigurationToAppRule:(id)a0 edgeSet:(id)a1;
- (void)startWithConfiguration:(id)a0 appRules:(id)a1 delegate:(id)a2;
- (void)tunnel:(id)a0 flowDidFallbackWithReason:(long long)a1;
- (void)tunnelDidCancel:(id)a0;
- (void)tunnelDidConnect:(id)a0;
- (void)tunnelIsReady:(id)a0;
- (BOOL)useTestDaypass;
- (BOOL)useTestLatencyMap;
- (void)waitForTunnelsToCancelWithCompletionHandler:(id /* block */)a0;

@end
