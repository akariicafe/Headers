@class NEPolicySession, NEFlowDivertFileHandle, NSPConfiguration;

@interface NSPFlowDivert : NEAppProxyProviderContainer

@property (retain) NEPolicySession *policySession;
@property BOOL started;
@property BOOL shouldResetPolicies;
@property (retain, nonatomic) NSPConfiguration *configuration;
@property (retain, nonatomic) NEFlowDivertFileHandle *flowDivertControlHandle;

- (void)addPolicy:(id)a0;
- (void)destroyPolicySession;
- (id)initWithDelegate:(id)a0 providerClass:(Class)a1 configuration:(id)a2;
- (void)teardown;
- (void)destroyFlowDivertSocketHandles;
- (id)getEffectiveAppRules:(id)a0;
- (void)stop;
- (id)getAgentResultsForSelf;
- (id)createPolicySession;
- (id)getAgentResults:(id)a0;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)createFlowDivertSocketHandle;
- (void)addPoliciesForDivertDNSOnly:(id)a0 domainConditions:(id)a1 divertResult:(id)a2;
- (void).cxx_destruct;
- (id)getExecutableConditions:(id)a0;
- (BOOL)resetPolicies:(BOOL)a0;
- (void)addPoliciesForAgent:(id)a0 conditions:(id)a1;
- (void)didStartWithError:(id)a0;
- (void)didFailWithError:(id)a0;

@end
