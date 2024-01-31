@class NSDate, SYUserActivityIdentifierInfo, NSString, SYApplicationStateObserver, SYDefaultsClient, SYBacklinkMonitorClient, NSObject;
@protocol OS_dispatch_queue;

@interface SYActivityObserver : NSObject <NSUserActivityObserver, SYNSUserActivityObserver_Extensions> {
    SYApplicationStateObserver *_appStateObserver;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue;
@property (retain, nonatomic) SYBacklinkMonitorClient *_client;
@property (retain, nonatomic) SYDefaultsClient *_defaultsClient;
@property (retain, nonatomic) NSDate *_lastReportedActivityTime;
@property BOOL _lastReportedActivityWasLinkable;
@property (retain, nonatomic) SYUserActivityIdentifierInfo *_pendingActivityInfo;
@property (copy, nonatomic) id /* block */ _delayedEvaluationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)loadSynapseObserver;

- (id)init;
- (void)userActivityWebpageURLWasChanged:(id)a0 webpageURL:(id)a1 previousValue:(id)a2;
- (void)q_processActiveUserActivity:(id)a0 identifier:(id)a1 linkable:(BOOL)a2 context:(id)a3;
- (void)_reportActiveUserActivityChangeIfNeeded:(id)a0 context:(id)a1;
- (void)_handleAppBecomeActive:(id)a0;
- (void)_handleAppResignActive:(id)a0;
- (void)userActivityCanonicalURLWasChanged:(id)a0;
- (void).cxx_destruct;
- (void)indexedContentItemsDidChange;
- (id)_defaultActivityObserverContext;
- (void)registerForAppStateNotifications;
- (void)userActivityTargetContentIdentifierWasChanged:(id)a0 targetContentIdentifier:(id)a1 previousValue:(id)a2;
- (void)_discoverAndProcessActiveUserActivityWithContext:(id)a0;
- (void)userActivityDidBecomeCurrent:(id)a0 current:(BOOL)a1;
- (void)userActivityPersistentIdentifierWasChanged:(id)a0 persistentIdentifier:(id)a1 previousValue:(id)a2;

@end
