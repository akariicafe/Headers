@class NSString, NSMapTable, NSURL, NSMutableSet, FlexLocalDBController;

@interface FlexCloudKitManager : FlexCloudManager

@property (retain, nonatomic) NSString *containerName;
@property (retain, nonatomic) NSURL *downloadURL;
@property (retain, nonatomic) FlexLocalDBController *localDatabaseController;
@property (retain, nonatomic) NSMapTable *artDownloadOperations;
@property (retain, nonatomic) NSMapTable *songDownloadOperations;
@property (retain, nonatomic) NSMutableSet *assetsBeingPurged;

- (unsigned long long)assetStatus:(id)a0;
- (void).cxx_destruct;
- (id)loadCachedSongs;
- (void)_populateDBDictionary:(id)a0 withMetadata:(id)a1;
- (BOOL)_unarchiveSongBundleAtPath:(id)a0 toURL:(id)a1;
- (void)cancelDownloadOfAllAssets;
- (void)cancelDownloadOfAsset:(id)a0;
- (void)fetchAllSongsWithCompletion:(id /* block */)a0;
- (id)initWithLibrary:(id)a0 options:(id)a1;
- (void)loadAssetWithID:(id)a0 forSongID:(id)a1;
- (void)requestDownloadOfAsset:(id)a0 withOptions:(id)a1;
- (void)requestPurgeOfAsset:(id)a0;

@end
