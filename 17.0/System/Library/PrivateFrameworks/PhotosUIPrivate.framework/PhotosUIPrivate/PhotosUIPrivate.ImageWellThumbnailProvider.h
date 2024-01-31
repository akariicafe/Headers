@interface PhotosUIPrivate.ImageWellThumbnailProvider : NSObject <PUBrowsingSessionImageWellThumbnailProvider, PXAssetsDataSourceManagerObserver> {
    void /* unknown type, empty encoding */ dataSourceManager;
    void /* unknown type, empty encoding */ mediaProvider;
    void /* unknown type, empty encoding */ startingAsset;
    void /* unknown type, empty encoding */ nextAvailableRequestID;
    void /* unknown type, empty encoding */ thumbnailRequests;
    void /* unknown type, empty encoding */ mediaProviderRequestIDsByRequestID;
}

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)cancelThumbnailRequest:(long long)a0;
- (long long)requestImageAndUUIDForStartingAssetFillingTargetSize:(struct CGSize { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (long long)requestImageForStartingAssetFillingTargetSize:(struct CGSize { double x0; double x1; })a0 resultHandler:(id /* block */)a1;

@end
