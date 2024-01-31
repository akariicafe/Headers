@class NSError, NSData;

@interface ActivitySharingClient.LocalTransport : NSObject <ActivitySharingClient.TransportInterface> {
    void /* unknown type, empty encoding */ transportDispatchService;
    void /* unknown type, empty encoding */ proxy;
}

- (void)transportMessage:(long long)a0 completionHandler:(void (^)(NSError *))a1;
- (void)transportMessage:(long long)a0 data:(NSData *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)transportRequest:(long long)a0 completionHandler:(void (^)(NSData *, NSError *))a1;
- (void)transportRequest:(long long)a0 data:(NSData *)a1 completionHandler:(void (^)(NSData *, NSError *))a2;
- (id)init;
- (void).cxx_destruct;

@end
