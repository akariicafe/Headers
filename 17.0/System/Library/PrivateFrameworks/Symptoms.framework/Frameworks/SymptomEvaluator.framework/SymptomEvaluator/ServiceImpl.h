@class NSObject, NSString, NetworkAnalyticsEngine, NetDomainsHandler, NSMutableDictionary, FlowAnalyticsEngine, NOIAnalyticsEngine;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ServiceImpl : NSObject <NSXPCListenerDelegate, SFExtendedServiceInterface> {
    FlowAnalyticsEngine *f_engine;
    NetworkAnalyticsEngine *n_engine;
    NOIAnalyticsEngine *noi_engine;
    NetDomainsHandler *netDomainsHandler;
    NSObject<OS_dispatch_semaphore> *svc_sema;
    NSObject<OS_dispatch_queue> *queue;
    NSMutableDictionary *lastAllowedRequests;
    id featureReadyObserver;
    BOOL _isHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void)shutdown;
- (void)setUsageOption:(id)a0 reply:(id /* block */)a1;
- (void)performAppTrackingPeriodicTasksWithReply:(id /* block */)a0;
- (void)dealloc;
- (void)getPreferCellOverWiFiWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)trainModelAndScore:(BOOL)a0 lastScoreDate:(id)a1 reply:(id /* block */)a2;
- (BOOL)_checkRateLimitForConnection:(id)a0;
- (void)createSnapshotFor:(id)a0 pred:(id)a1 actions:(id)a2 reply:(id /* block */)a3;
- (BOOL)_serviceReady;
- (void)getNetworkBitmapsWithNames:(id)a0 startTime:(unsigned long long)a1 endTime:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)waitForOSLogErrorSymptomWithReply:(id /* block */)a0;
- (void)setOption:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (void)getOption:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setPreferCellOverWiFiWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)performAppEndpointTrackingPeriodicTasksWithReply:(id /* block */)a0;
- (void)getExpertSystemsStatus:(id /* block */)a0;
- (void)inquireNOIFor:(id)a0 orPredicate:(id)a1 requestedKeys:(id)a2 options:(id)a3 reply:(id /* block */)a4;
- (void)performActionWithOptions:(id)a0 inScopes:(id)a1 reply:(id /* block */)a2;
- (void)abortRNFTestWithReply:(id /* block */)a0;
- (void)resetUsageFor:(id)a0 nameKind:(id)a1 reply:(id /* block */)a2;
- (void)unsubscribeToNOIs:(id)a0;
- (void)_cacheEntitlementValuesForConnection:(id)a0;
- (BOOL)assertEntitlement:(id)a0 entitlement:(unsigned long long)a1 orWaiveOnIntent:(id)a2;
- (void)identifierForUUID:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)startRNFTestWithOptions:(id)a0 scenarioName:(id)a1 reply:(id /* block */)a2;
- (void)subscribeToNOIsFor:(id)a0 orPredicate:(id)a1 options:(id)a2;
- (void)retrieveActivityMetrics:(id)a0 reply:(id /* block */)a1;
- (void)performAppExperiencePeriodicTasksWithReply:(id /* block */)a0;
- (void)resetDataFor:(id)a0 nameKind:(id)a1 inScopes:(id)a2 reply:(id /* block */)a3;
- (void)postCoreAnalyticsEvent:(id)a0 forEventName:(id)a1 reply:(id /* block */)a2;
- (void)performQueryOnEntity:(id)a0 pred:(id)a1 sort:(id)a2 actions:(id)a3 reply:(id /* block */)a4;
- (void)performAppPeriodicTasksWithReply:(id /* block */)a0;
- (void)performPersistentStoreHealthCheckWithReply:(id /* block */)a0;
- (void)clientTransactionsRelease;
- (void)_serviceReadyCheckPointRelease;
- (void)performQueryOnEntity:(id)a0 fetchRequestProperties:(id)a1 pred:(id)a2 sort:(id)a3 actions:(id)a4 reply:(id /* block */)a5;
- (void)donateBiomeEventForEdgeSelectionWithPrefix:(id)a0 interfaceType:(id)a1 radioType:(id)a2 radioBand:(id)a3 reply:(id /* block */)a4;
- (void)assertFactString:(id)a0 module:(id)a1 asSymptom:(BOOL)a2 reply:(id /* block */)a3;
- (void)_serviceReadyCheckPoint;

@end
