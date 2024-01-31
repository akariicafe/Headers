@class NSMutableDictionary, NSMutableSet, NetworkAnalyticsStateRelay, NSObject;
@protocol OS_os_transaction;

@interface NOIAnalyticsEngine : AnalyticsEngineCore {
    NSMutableDictionary *liveClients;
    NSMutableSet *managedNOIs;
    id _cellEpochObserver;
    id _wifiEpochObserver;
    id _wiredEpochObserver;
    id _companionEpochObserver;
    id _modelTurndownObserver;
    id _cellStateChangeObserver;
    id _cellStateCapabilityObserver;
    id _cellFallbackObserver;
    id _considerAlternateUpdateObserver;
    id _primaryObserver;
    int notifyToken;
    BOOL xpcShutdown;
    NSMutableSet *_predictionQueryClients;
    unsigned long long _predictionQueryCount;
    unsigned long long _startConnectionTimestamp;
    unsigned long long _startBackgroundConnectionTimestamp;
    unsigned long long _lastDisconnectTimestamp;
    int _ingressLQM;
    unsigned long long _ingressUlThroughput;
    unsigned long long _ingressDlThroughput;
    unsigned long long _ingressBytesIn;
    unsigned long long _ingressBytesOut;
    unsigned long long _ingressPacketsIn;
    unsigned long long _ingressPacketsOut;
    unsigned long long _lastDisconnectedSecs;
    BOOL _ingressMetricAvailable;
    NetworkAnalyticsStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    NetworkAnalyticsStateRelay *_wiredRelay;
    NetworkAnalyticsStateRelay *_companionLinkRelay;
    NSObject<OS_os_transaction> *_noiLiveClientTransaction;
}

+ (void)getQueryStatistics:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
+ (void)resetQueryStatistics;
+ (id)queue;

- (void)estTransferTime:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)_collectDataUsageFieldsForRRCMetric:(id)a0 layer2EgressMetric:(id)a1 underrun:(BOOL *)a2;
- (void)dealloc;
- (void)_observeStateRelays;
- (void)_updateRrcStateChangeTimestamp:(long long)a0 forRrcState:(int)a1;
- (void)unsubscribeToNOIs:(id)a0 connection:(id)a1;
- (id)initWithWorkspace:(id)a0 params:(id)a1 queue:(id)a2;
- (void)_getQueryStatistics:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)_collectTrafficClassFieldsForRRCMetric:(id)a0 activeApps:(id)a1 trafficClassFlags:(unsigned int)a2 durationUsecs:(unsigned long long)a3;
- (void)auditableLinkQuality:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)_coreNOIMembershipChangeOn:(id)a0 forNOIs:(id)a1 isAddEvent:(BOOL)a2;
- (void)_collectBasicFieldsForRRCMetric:(id)a0 durationUsecs:(unsigned long long)a1;
- (void)clientEvent:(id)a0 isAddEvent:(BOOL)a1;
- (void)l2ThroughputMetrics:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (id)_clientNOIEvent:(id)a0 forNOIs:(id)a1 isAddEvent:(BOOL)a2;
- (void)_bottomUpNOIEvent:(id)a0 withInfo:(id)a1;
- (void)_evalPostingNotificationForNOI:(id)a0 forEvent:(id)a1 withInfo:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_resetQueryStatistics;
- (void).cxx_destruct;
- (void)_resetRRCMetricCounters;
- (void)inquireNOIFor:(id)a0 orPredicate:(id)a1 requestedKeys:(id)a2 options:(id)a3 connection:(id)a4 reply:(id /* block */)a5;
- (BOOL)_initializeAllManagedNOIs;
- (void)canUseOnAlternate:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (id)_validatedNOIs:(id)a0 orPredicate:(id)a1;
- (void)_dumpClientStructure;
- (void)clientTransactionsRelease;
- (void)networkAttachmentInfo:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)subscribeToNOIsFor:(id)a0 orPredicate:(id)a1 options:(id)a2 connection:(id)a3;

@end
