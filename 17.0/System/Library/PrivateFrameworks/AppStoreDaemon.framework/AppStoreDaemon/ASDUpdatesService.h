@class NSString, ASDServiceBroker, NSObject;
@protocol OS_dispatch_queue;

@interface ASDUpdatesService : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

@property (class, readonly) BOOL isAutomaticUpdateAuthorizationEnabled;
@property (class, readonly) BOOL areAllAppsAuthorizedForAutomaticUpdates;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (BOOL)isAutomaticUpdateAuthorizationRequiredWhenEnabledForAppWithRecord:(id)a0;
+ (id)registerBadgeCountNotificationBlock:(id /* block */)a0;
+ (id)defaultService;

- (id)reloadFromServer;
- (id)init;
- (void)dealloc;
- (void)reloadFromServerWithCompletionBlock:(id /* block */)a0;
- (void)setAutoUpdateEnabled:(BOOL)a0;
- (BOOL)autoUpdateEnabled;
- (BOOL)hasEntitlement;
- (void).cxx_destruct;
- (BOOL)confirmAgentRequestedUpdateAll;
- (void)getManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)getMetricsWithCompletionBlock:(id /* block */)a0;
- (void)getUpdateMetricsEventsWithCompletionBlock:(id /* block */)a0;
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(id /* block */)a0;
- (void)getUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)refreshUpdateCountWithCompletionBlock:(id /* block */)a0;
- (void)refreshUpdatesWithCompletionBlock:(id)a0 completionBlock:(id /* block */)a1;
- (void)reloadForSettingsFromServerWithCompletionBlock:(id /* block */)a0;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(id /* block */)a0;
- (void)reloadManagedUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)requestAutomaticUpdateAuthorizationIfNecessaryForProcessHandle:(id)a0 completion:(id /* block */)a1;
- (void)shouldUseModernUpdatesWithCompletionBlock:(id /* block */)a0;
- (void)showApplicationBadgeForPendingUpdates;
- (void)updateAllWithCompletionBlock:(id /* block */)a0;
- (void)updateAllWithJobResultsCompletionBlock:(id /* block */)a0;
- (void)updateAllWithOrder:(id)a0 completionBlock:(id /* block */)a1;

@end
