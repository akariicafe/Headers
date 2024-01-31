@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SSXPCServer : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_entitlementName;
    NSObject<OS_xpc_object> *_listener;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_observers;
    NSString *_serviceName;
    NSMutableSet *_xpcRequestsCache;
}

+ (id)mainServer;

- (id)init;
- (void)dealloc;
- (void)start;
- (id)initWithServiceName:(id)a0 entitlement:(id)a1 queue:(id)a2;
- (void)removeObserver:(id)a0 selector:(SEL)a1 forMessage:(long long)a2;
- (id)initWithServiceName:(id)a0;
- (void)_dispatchMessage:(id)a0 connection:(id)a1;
- (void)_recordCoreAnalyticsEventForClient:(id)a0 andSelector:(id)a1;
- (void)addObserver:(id)a0 selector:(SEL)a1 forMessage:(long long)a2;

@end
