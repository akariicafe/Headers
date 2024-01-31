@class NSMutableArray, NSMapTable, WKWallpaperBundleDownloadManager;

@interface WKWallpaperRepresentingCollectionsManager : NSObject

@property (class, readonly, nonatomic) WKWallpaperRepresentingCollectionsManager *defaultManager;

@property (retain, nonatomic) WKWallpaperBundleDownloadManager *_downloadManager;
@property (retain, nonatomic) NSMutableArray *_wallpaperCollections;
@property (retain, nonatomic) NSMapTable *_wallpaperCollectionLookupTable;
@property (readonly, nonatomic) long long numberOfWallpaperCollections;

- (id)wallpaperCollectionAtIndex:(long long)a0;
- (void)_loadCollections;
- (id)wallpaperCollectionWithIdentifier:(id)a0;
- (void)_loadSystemWallpaperCollections;
- (void).cxx_destruct;
- (id)initWithDownloadManager:(id)a0;

@end
