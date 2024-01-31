@class HFReaderWriterCache, HFWallpaperFileManager, HFWallpaperImageCache, NSString, HFWallpaperLegacyFileManager, NSUserDefaults;
@protocol HFNamedWallpaperSource;

@interface HFWallpaperManager : NSObject <CLLocationManagerDelegate, HFHomeManagerObserver, HFHomeObserver>

@property (retain, nonatomic) HFReaderWriterCache *wallpapersCache;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) id<HFNamedWallpaperSource> namedWallpaperSource;
@property (retain, nonatomic) HFWallpaperImageCache *imageCache;
@property (retain, nonatomic) HFWallpaperLegacyFileManager *legacyFileManager;
@property (retain, nonatomic) HFWallpaperFileManager *fileManager;
@property (readonly, nonatomic) BOOL wallpaperSourceRegistered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)_migrateIfNeeded;
- (void).cxx_destruct;
- (void)home:(id)a0 didRemoveRoom:(id)a1;
- (id)allNamedWallpaperThumbnailsForWallpaperCollectionType:(long long)a0;
- (id)allNamedWallpapersForWallpaperCollectionType:(long long)a0;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)a0;
- (id)processOriginalImageFromWallpaper:(id)a0 originalImage:(id)a1;
- (id)wallpaperForHomeKitObject:(id)a0;
- (id)wallpaperImageForWallpaper:(id)a0 variant:(long long)a1;
- (id)wallpaperObjectForWallpaper:(id)a0 currentUserInterfaceStyle:(long long)a1;
- (id)_cachedWallpaperForKey:(id)a0;
- (void)_dispatchWallpaperChangedforHomeKitObject:(id)a0;
- (void)_logUserMetricsAfterSettingWallpaper;
- (void)_migrateToSunriseWallpaperIfNeeded;
- (void)_migrateWallpaperDict:(id)a0 forHomeKitIdentifier:(id)a1;
- (id)_originalImageForWallpaper:(id)a0 forProcessingGenerator:(BOOL)a1;
- (void)_preloadWallpaperForHomeKitObject:(id)a0;
- (void)_pruneUnusedWallpapers;
- (void)_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)a0;
- (void)_setImageCacheForWallpaper:(id)a0 image:(id)a1 forHomeKitIdentifier:(id)a2;
- (void)_setWallpaper:(id)a0 forHomeKitIdentifier:(id)a1;
- (void)_setWallpaper:(id)a0 image:(id)a1 forHomeKitIdentifier:(id)a2;
- (void)_setWallpaper:(id)a0 image:(id)a1 forHomeKitObject:(id)a2;
- (id)_wallpaperForHomeKitObject:(id)a0 createIfNeeded:(BOOL)a1;
- (id)defaultUserSelectableWallpaperForHomeKitObject:(id)a0;
- (id)defaultUserSelectableWallpaperForWallpaperCollectionType:(long long)a0;
- (id)defaultWallpaperForCollectionType:(long long)a0;
- (id)generateProcessedImageFromWallpaper:(id)a0 originalImage:(id)a1;
- (void)preheatCache;
- (id)processOriginalBlurredImageFromWallpaper:(id)a0 originalImage:(id)a1;
- (void)registerWallpaperSource:(id)a0 processedSource:(id)a1;
- (void)setWallpaper:(id)a0 image:(id)a1 forHomeKitObject:(id)a2;

@end
