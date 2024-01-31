@class NSString, ASDServiceBroker, NSPredicate, NSMutableDictionary, ASDAppQueryExecutor, NSObject, ASDNotificationCenter, NRDevice;
@protocol OS_dispatch_queue, ASDAppQueryResultsObserver;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _hasRunOnce;
    BOOL _isForUpdates;
    ASDNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<ASDAppQueryResultsObserver> _observer;
    ASDAppQueryExecutor *_queryExecutor;
    NSMutableDictionary *_resultCache;
    ASDServiceBroker *_serviceBroker;
    NRDevice *_device;
}

@property (readonly) NSPredicate *predicate;
@property (weak) id<ASDAppQueryResultsObserver> observer;
@property (nonatomic) long long queryOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryWithPredicate:(id)a0;
+ (id)queryForBundleIDs:(id)a0;
+ (id)queryForAppClipWithStoreItemID:(long long)a0;
+ (id)queryForStoreItemIDs:(id)a0;
+ (id)queryForStoreApps;
+ (id)queryForBetaAppsOnPairedDevice:(id)a0;
+ (void)anyWithPredicate:(id)a0 withResultHandler:(id /* block */)a1;
+ (id)queryForBetaAppsWithStoreItemIDs:(id)a0;
+ (id)queryForUpdates;
+ (id)queryForSystemAppsOnPairedDevice:(id)a0;
+ (id)queryForBetaApps;
+ (id)queryForBundleAtPath:(id)a0;
+ (id)queryForAlmondApps;
+ (id)queryWithPredicate:(id)a0 onPairedDevice:(id)a1;
+ (id)queryForBeagleApps;
+ (id)queryDefaultPairedWatchForBetaApps;

- (id)initWithPredicate:(id)a0;
- (id)init;
- (void)notificationCenter:(id)a0 receivedNotifications:(id)a1;
- (void)dealloc;
- (void)notificationCenter:(id)a0 receivedProgress:(id)a1;
- (void)_unitTest_setHasRunOnce:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 onPairedDevice:(id)a1;
- (void)_handleBrokerConnectionNotification:(id)a0;
- (void)executeQueryWithResultHandler:(id /* block */)a0;
- (id)initWithPredicate:(id)a0 queryExecutor:(id)a1 serviceBroker:(id)a2 notificationCenter:(id)a3;

@end
