@class NSString;

@interface GEOMapDataSubscriptionRemotePersistence : NSObject <GEOMapDataSubscriptionPersistence>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addSubscriptionWithIdentifier:(id)a0 auditToken:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 region:(id)a4 displayName:(id)a5 expirationDate:(id)a6 callbackQueue:(id)a7 completionHandler:(id /* block */)a8;
- (void)calculateTotalSizeOfOfflineSubscriptionsWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchExpiredSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSubscriptionsForSyncToWatchWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;

@end
