@class NSData, NSError;

@interface ActivityAwardsCore.BaseQuery : NSObject <AACTransportInterface> {
    void /* unknown type, empty encoding */ transportDispatchService;
}

- (void)transportRequest:(unsigned long long)a0 data:(NSData *)a1 completion:(void (^)(NSData *, NSError *))a2;
- (void)transportEvent:(unsigned long long)a0 data:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
