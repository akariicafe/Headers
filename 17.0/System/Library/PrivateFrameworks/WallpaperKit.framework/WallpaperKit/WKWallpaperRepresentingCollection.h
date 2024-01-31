@class NSString, NSMapTable, NSUUID, NSMutableArray, WKWallpaperBundleDownloadManager;
@protocol WKWallpaperRepresenting;

@interface WKWallpaperRepresentingCollection : NSObject

@property (retain, nonatomic) NSString *wallpaperCollectionIdentifier;
@property (retain, nonatomic) WKWallpaperBundleDownloadManager *downloadManager;
@property (retain, nonatomic) NSMutableArray *_wallpaperBundles;
@property (retain, nonatomic) NSMapTable *_wallpaperLookupTable;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL supportsDownloading;
@property (readonly, nonatomic) long long numberOfWallpapers;
@property (readonly, nonatomic) BOOL wallpapersShareBaseAppearance;
@property (readonly, nonatomic) BOOL hiddenFromPicker;
@property (readonly, nonatomic) id<WKWallpaperRepresenting> previewWallpaperRepresenting;

+ (id)_loadWallpaperRepresentingContentFromURL:(id)a0 collectionMetadata:(id)a1;
+ (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)a0 collectionURL:(id)a1;
+ (id)_loadCollectionMetadataWithURL:(id)a0;
+ (BOOL)shouldLoadWallpaperCollectionAtURL:(id)a0;

- (id)deviceEnclosureColor;
- (id)wallpaperRepresentingWithIdentifier:(id)a0;
- (void)downloadWallpaperRepresentingWithIdentifier:(id)a0 progress:(id)a1 completion:(id /* block */)a2;
- (id)initWithWallpaperCollectionIdentifier:(id)a0 displayName:(id)a1 previewWallpaperRepresenting:(id)a2 wallpapersShareBaseAppearance:(BOOL)a3 hiddenFromPicker:(BOOL)a4 wallpaperRepresentingCollection:(id)a5 downloadManager:(id)a6;
- (id)initWithURL:(id)a0 downloadManager:(id)a1;
- (id)wallpaperBundleAtIndex:(long long)a0;
- (BOOL)containsWallpaperRepresentingWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)cancelDownloadForWallpaperRepresentingWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)deviceColor;

@end
