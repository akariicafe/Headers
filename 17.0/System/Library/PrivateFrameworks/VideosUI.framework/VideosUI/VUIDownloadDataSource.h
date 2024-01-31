@class NSArray, VUIMediaLibrary, NSMutableDictionary, SSDownloadManager, NSTimer, NSString;
@protocol VUIDownloadDataSourceDelegate;

@interface VUIDownloadDataSource : VUIMediaEntitiesDataSource <VUIDownloadManagerDelegate, SSDownloadManagerObserver>

@property (readonly, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (retain, nonatomic) SSDownloadManager *sDownloadManager;
@property (nonatomic) BOOL hasFetchedAllDownloadEntities;
@property (nonatomic) BOOL hasFetchedAllDownloadedEntities;
@property (nonatomic) BOOL performingRentalExpirationFetch;
@property (retain, nonatomic) NSArray *localMediaItems;
@property (retain, nonatomic) NSArray *activelyDownloadingAdamIds;
@property (retain, nonatomic) NSArray *activelyDownloadingMediaItems;
@property (retain, nonatomic) NSMutableDictionary *episodesDownloadingForShow;
@property (retain, nonatomic) NSMutableDictionary *groupingByShowIdentifier;
@property (retain, nonatomic) NSTimer *libraryContentsChangeDebounceTimer;
@property (weak, nonatomic) id<VUIDownloadDataSourceDelegate> downloadDelegate;
@property (retain, nonatomic) NSArray *downloadEntities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (BOOL)_downloadsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (id)_coalesceActiveDownloadEntitiesAndDownloadedEntities;
- (id)_createDownloadEntitiesFromLatestDownloads:(id)a0;
- (id)_createGroupingByShowIdentifierWithLatestMediaEntityGroups:(id)a0;
- (id)_deDupedMediaEntities:(id)a0;
- (BOOL)_doesEpisodeSet:(id)a0 containMediaEntity:(id)a1;
- (void)_downloadedMediaEntitiesDidUpdate:(id)a0 grouping:(id)a1;
- (void)_downloadingMediaEntitiesDidUpdate:(id)a0;
- (void)_getActivelyDownloadingAdamIDsWithCompletion:(id /* block */)a0;
- (id)_getDownloadEntityInDownloadEntities:(id)a0 containingMediaEntity:(id)a1;
- (void)_handleDownloadingStateDidChange;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)a0;
- (void)_loadActiveDownloads;
- (void)_loadDownloadedEntities;
- (id)_mediaEntitiesForAdamIDs:(id)a0;
- (void)_notifyDelegatesDownloadsFetchCompletedWithChanges:(BOOL)a0;
- (void)_rentalsDidExpire:(id)a0;
- (id)_upsertDownloadEntities:(id)a0 withEpisodesDownloadingForShow:(id)a1;
- (void)_upsertEpisodesDownloadingForShowWithMediaEntity:(id)a0;
- (id)initWithMediaLibrary:(id)a0 fetchRequest:(id)a1;
- (void)loadDownloadData;
- (void)startFetch;

@end
