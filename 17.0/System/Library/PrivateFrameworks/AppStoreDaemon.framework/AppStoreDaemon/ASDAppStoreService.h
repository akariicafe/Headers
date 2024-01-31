@class NSString, NSDictionary, ASDServiceBroker, NSObject;
@protocol OS_dispatch_queue, ASDAppStoreChangedObserver;

@interface ASDAppStoreService : NSObject <ASDServiceProvider> {
    int _badgesChangedNotificationToken;
    int _badgesChangedForAppStoreNotificationToken;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSDictionary *_badges;
    id<ASDAppStoreChangedObserver> _observer;
    ASDServiceBroker *_serviceBroker;
}

@property (weak) id<ASDAppStoreChangedObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (id)defaultService;

- (id)init;
- (void)dealloc;
- (void)removeAllBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void)removeBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allBadgeIDsWithReplyHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)removeMetricsForBadgeIDs:(id)a0 replyHandler:(id /* block */)a1;
- (void)allBadgeMetricsWithReplyHandler:(id /* block */)a0;
- (void)badgeCountWithReplyHandler:(id /* block */)a0;
- (void)launchAppStoreWithURL:(id)a0 withReplyHandler:(id /* block */)a1;
- (void)reloadWidgetOnConnectivityToEndpoint:(id)a0 parameters:(id)a1 replyHandler:(id /* block */)a2;

@end
