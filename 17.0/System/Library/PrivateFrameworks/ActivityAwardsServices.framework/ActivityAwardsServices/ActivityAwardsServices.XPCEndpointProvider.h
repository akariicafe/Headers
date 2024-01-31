@class NSString, NSError, NSXPCListenerEndpoint;

@interface ActivityAwardsServices.XPCEndpointProvider : NSObject <NSXPCListenerDelegate, AACXPCListenerEndpointInterface> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requiredEntitlements;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ endpointsByEndpointName;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)createEndpointNamed:(NSString *)a0 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))a1;
- (id)init;
- (void).cxx_destruct;

@end
