@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {
    struct { unsigned char haveCGCacheImages : 1; unsigned char imagesHaveBeenLoaded : 1; } _plaFlags;
}

@property (readonly, copy, nonatomic) NSArray *imagePaths;
@property (readonly, nonatomic) BOOL haveCGCacheImages;

- (BOOL)_containsImagesInPath:(id)a0;
- (id)imageWithConfiguration:(id)a0;
- (id)_initWithAssetName:(id)a0 forManager:(id)a1;
- (id)init;
- (id)_initWithAssetName:(id)a0 forFilesInBundle:(id)a1;
- (void).cxx_destruct;
- (id)_initWithAssetName:(id)a0 forFilesInBundle:(id)a1 imagePaths:(id)a2 haveCGCacheImages:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (void)_clearResolvedImageResources;

@end
