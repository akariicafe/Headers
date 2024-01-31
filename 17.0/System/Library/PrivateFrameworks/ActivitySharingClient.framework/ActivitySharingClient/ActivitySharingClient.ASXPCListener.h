@class NSError, NSData;

@interface ActivitySharingClient.ASXPCListener : NSObject <NSXPCListenerDelegate, ActivitySharingClient.TransportInterface> {
    void /* unknown type, empty encoding */ transportDispatchService;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requiredEntitlements;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)transportMessage:(long long)a0 completionHandler:(void (^)(NSError *))a1;
- (void)transportMessage:(long long)a0 data:(NSData *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)transportRequest:(long long)a0 completionHandler:(void (^)(NSData *, NSError *))a1;
- (void)transportRequest:(long long)a0 data:(NSData *)a1 completionHandler:(void (^)(NSData *, NSError *))a2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
