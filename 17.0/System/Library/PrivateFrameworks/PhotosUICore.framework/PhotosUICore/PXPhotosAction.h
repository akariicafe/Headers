@class PHPhotoLibrary, PHFetchOptions;
@protocol PXFastEnumeration;

@interface PXPhotosAction : PXAction

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHFetchOptions *standardFetchOptions;
@property (readonly, nonatomic) long long assetCount;
@property (readonly, nonatomic) id<PXFastEnumeration> assets;
@property (readonly, nonatomic) id<PXFastEnumeration> collections;

- (id)init;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
