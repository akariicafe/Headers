@protocol PXFastEnumeration;

@interface PXAssetsAction : PXPhotosAction {
    id<PXFastEnumeration> _assets;
}

+ (BOOL)canPerformOnAllAssets:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (id)assets;
- (id)initWithAsset:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0;
- (void)performAssetChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
