@class GEOXPCActivity, NSString, GEOTileDB, NSObject;
@protocol OS_dispatch_queue;

@interface GEOMapDataSubscriptionExpirationHelper : NSObject <GEOOfflineDataConfigurationObserver, GEOTileDBObserver, GEOConfigChangeListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    GEOTileDB *_db;
    int _fullyDownloadedSubscriptionsChangedToken;
    GEOXPCActivity *_expirationActivity;
    GEOXPCActivity *_upcomingExpirationActivity;
}

@property (class, readonly, nonatomic) GEOMapDataSubscriptionExpirationHelper *sharedHelper;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (id)init;
- (void)dealloc;
- (void)offlineDataConfiguration:(id)a0 didChangeActiveVersions:(id)a1;
- (void)runXPCActivity:(id)a0;
- (void).cxx_destruct;
- (void)_subscriptionsDidChange:(id)a0;
- (void)configureWithDB:(id)a0;
- (void)tileDB:(id)a0 didExpireSubscriptions:(id)a1 forReason:(long long)a2;

@end
