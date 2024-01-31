@class NSArray, BSUIMappedImageCache;
@protocol HFProcessedWallpaperSource;

@interface HFWallpaperImageCache : NSObject

@property (retain, nonatomic) BSUIMappedImageCache *imageCache;
@property (retain) id<HFProcessedWallpaperSource> processedWallpaperSource;
@property (readonly, nonatomic) NSArray *supportedProcessedVariants;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)_imageForVariant:(long long)a0 wallpaper:(id)a1 imageKey:(id)a2 withOriginalImageGenerator:(id /* block */)a3;
- (id)_cacheKeyForCustomBlurWallpaper:(id)a0 withVariant:(long long)a1;
- (id)_cacheKeyForDefaultBlurWallpaper:(id)a0 withVariant:(long long)a1 forUserInterfaceStyle:(long long)a2;
- (id)_cacheKeyForWallpaper:(id)a0 withVariant:(long long)a1;
- (void)_saveVariants:(long long)a0 forWallpaper:(id)a1 originalImage:(id)a2 withImageKey:(id)a3;
- (id)imageForVariant:(long long)a0 wallpaper:(id)a1 withOriginalImageGenerator:(id /* block */)a2;
- (void)pruneUnusedWallpaperVariants:(id)a0;
- (void)saveVariantsForWallpaper:(id)a0 originalImage:(id)a1;

@end
