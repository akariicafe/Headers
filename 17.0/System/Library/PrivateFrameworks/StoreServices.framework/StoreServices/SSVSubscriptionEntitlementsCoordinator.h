@class SSXPCConnection, SSVSubscriptionEntitlements, NSObject;
@protocol OS_dispatch_queue;

@interface SSVSubscriptionEntitlementsCoordinator : NSObject {
    SSVSubscriptionEntitlements *_cachedEntitlements;
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedCoordinator;

- (id)_connection;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_cachedSubscriptionEntitlements;
- (id)_loadSubscriptionEntitlementsIgnoreCaches:(BOOL)a0 error:(id *)a1;
- (void)_setCachedSubscriptionEntitlements:(id)a0;
- (void)getSubscriptionEntitlements:(id /* block */)a0;
- (void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)a0 entitlementsBlock:(id /* block */)a1;

@end
