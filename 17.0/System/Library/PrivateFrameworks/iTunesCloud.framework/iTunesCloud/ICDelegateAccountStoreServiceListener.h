@class NSXPCListenerEndpoint, NSString, NSXPCListener, ICUserIdentityStore, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICDelegateAccountStoreServiceListener : NSObject <NSXPCListenerDelegate, ICDelegateAccountStoreService> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _ignoresEntitlements;
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    ICUserIdentityStore *_testingIdentityStore;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *XPCEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)machServiceListener;
+ (id)testingListenerWithIdentityStore:(id)a0;

- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)setIdentityProperties:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)suspend;
- (void)removeTokenForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)setToken:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)addDelegationUUIDs:(id)a0 forUserIdentity:(id)a1 completionHandler:(id /* block */)a2;
- (void)resume;
- (void).cxx_destruct;
- (void)removeAllTokensWithCompletionHandler:(id /* block */)a0;
- (void)removeIdentityPropertiesForUserIdentity:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeTokensExpiringBeforeDate:(id)a0 completionHandler:(id /* block */)a1;
- (id)_identityStore;
- (id)_initWithXPCListener:(id)a0 testingIdentityStore:(id)a1;
- (void)_userIdentityStoreDelegateAccountStoreDidChangeNotification:(id)a0;
- (void)recreateWithCompletionHandler:(id /* block */)a0;

@end
