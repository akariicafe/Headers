@interface PFDispatchingFairPlayKeyLoader : NSObject <PFFairPlayKeyLoading> {
    void /* unknown type, empty encoding */ wrappedInstance;
    void /* unknown type, empty encoding */ responseQueue;
}

+ (id)receiveOn:(id)a0 loader:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)createSessionWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)renewKeyRequestWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)renewKeyRequestsWithAssets:(id)a0 completion:(id /* block */)a1;
- (void)startKeyRequestWithSession:(id)a0 completion:(id /* block */)a1;
- (void)stopKeyRequestWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)stopKeyRequestWithSession:(id)a0 completion:(id /* block */)a1;

@end
