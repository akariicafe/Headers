@class PHPhotoLibrary, NSURL, PFPosterConfiguration;
@protocol PUPosterOverrideConfiguration;

@interface PUWallpaperConfigurationUpdater : NSObject

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PFPosterConfiguration *sourceConfiguration;
@property (readonly, nonatomic) NSURL *targetAssetDirectory;
@property (readonly, nonatomic) id<PUPosterOverrideConfiguration> overrideConfiguration;

- (void).cxx_destruct;
- (void)_handleSegmentationItem:(id)a0 error:(id)a1 completionBlock:(id /* block */)a2;
- (void)attemptUpdateWithCompletionBlock:(id /* block */)a0;
- (id)initWithPhotoLibrary:(id)a0 sourceConfiguration:(id)a1 targetAssetDirectory:(id)a2 overrideConfiguration:(id)a3;

@end
