@class NSString, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, BLSBacklightProxy;

@interface BLSHXPCBacklightProxyHostServer : NSObject <BSServiceConnectionListenerDelegate> {
    id<BLSBacklightProxy> _localBacklightProxy;
    BSServiceConnectionListener *_serviceListener;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainSpecification;
+ (id)serverWithLocalBacklightProxy:(id)a0;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (id)initWithLocalBacklightProxy:(id)a0;

@end
