@interface PodcastsFoundation.FairPlayKeyLoadingMock : _TtCs12_SwiftObject <PFFairPlayKeyLoading> {
    void /* unknown type, empty encoding */ createSessionHandler;
    void /* unknown type, empty encoding */ startKeyRequestHandler;
    void /* unknown type, empty encoding */ renewKeyRequestHandler;
    void /* unknown type, empty encoding */ renewKeyRequestsHandler;
    void /* unknown type, empty encoding */ stopKeyRequestAssetHandler;
    void /* unknown type, empty encoding */ stopKeyRequestSessionHandler;
}

- (void)createSessionWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)renewKeyRequestWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)renewKeyRequestsWithAssets:(id)a0 completion:(id /* block */)a1;
- (void)startKeyRequestWithSession:(id)a0 completion:(id /* block */)a1;
- (void)stopKeyRequestWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)stopKeyRequestWithSession:(id)a0 completion:(id /* block */)a1;

@end
