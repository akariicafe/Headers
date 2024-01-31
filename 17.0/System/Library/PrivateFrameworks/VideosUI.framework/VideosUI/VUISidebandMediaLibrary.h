@class NSPersistentContainer, NSManagedObjectContext, NSObject;
@protocol OS_dispatch_queue;

@interface VUISidebandMediaLibrary : VUIDeviceMediaLibrary

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundManagedObjectContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)initialize;
+ (void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(BOOL)a0;

- (void)dealloc;
- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)performFetch:(id)a0;
- (unsigned long long)countOfDownloadingOrDownloadedSubscriptionVideosForNonMainQueue;
- (id)videosWithDownloadStates:(id)a0 entitlementTypes:(id)a1 useMainThreadContext:(BOOL)a2;
- (void)_activeAccountDidChange:(id)a0;
- (void)_deleteOrphanedDownloads;
- (void)_deleteVideoManagedObjects:(id)a0;
- (id)_downloadedVideosForNonSignedInUsers;
- (void)_dumpDatabaseToLogIfEnabled;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoaderIdentifier;
- (BOOL)_invalidateKeysForVideoManagedObject:(id)a0 saveWhenDone:(BOOL)a1 invalidateImmediately:(BOOL)a2;
- (id)_mainContextManagedObjectsForObjects:(id)a0;
- (void)_mainQueueManagedObjectContextDidSave:(id)a0;
- (id)_managedObjectWithEntityName:(id)a0 predicate:(id)a1 createIfNeeded:(BOOL)a2 wasCreated:(BOOL *)a3;
- (void)_migrateVideoExpirationDateAndAllowsManualRenewal;
- (id)_movieForAdamID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (void)_pruneVideosAtAppLaunchWithCompletion:(id /* block */)a0;
- (BOOL)_removeDownloadedMediaForVideoManagedObject:(id)a0 markAsDeleted:(BOOL)a1 saveWhenDone:(BOOL)a2 invalidateImmediately:(BOOL)a3;
- (void)_removeDownloadsForNonSignedInUsers;
- (id)_tvEpisodeForAdamID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)_tvSeasonForAdamID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)_tvSeasonForCanonicalID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)_tvSeriesForAdamID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)_tvSeriesForCanonicalID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)_videosMarkedAsDeleted;
- (id)allFpsKeyDeletionInfos;
- (void)deleteFPSKeyDeletionInfo:(id)a0;
- (void)deleteFPSKeyDeletionInfos:(id)a0;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)existingFpsKeyInfoForKeyURI:(id)a0;
- (id)fpsKeyInfoForVideo:(id)a0 keyURI:(id)a1 createIfNeeded:(BOOL)a2 wasCreated:(BOOL *)a3;
- (id)imageInfoForSeries:(id)a0 imageType:(unsigned long long)a1 createIfNeeded:(BOOL)a2 wasCreated:(BOOL *)a3;
- (id)imageInfoForVideo:(id)a0 imageType:(unsigned long long)a1 createIfNeeded:(BOOL)a2 wasCreated:(BOOL *)a3;
- (void)invalidateKeysForVideoManagedObject:(id)a0;
- (void)invalidateKeysForVideoManagedObjects:(id)a0;
- (id)mainContextVideoForVideo:(id)a0;
- (void)removeDownloadedMediaForVideoManagedObject:(id)a0 markAsDeleted:(BOOL)a1 invalidateImmediately:(BOOL)a2;
- (void)removeDownloadedMediaForVideoManagedObjects:(id)a0 markAsDeleted:(BOOL)a1 invalidateImmediately:(BOOL)a2;
- (void)saveChangesToManagedObjects;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;
- (id)seriesForCanonicalIDOrAdamID:(id)a0;
- (id)videoForAdamID:(id)a0 useMainThreadContext:(BOOL)a1;
- (id)videoForMPMediaItem:(id)a0;
- (id)videoForPlayable:(id)a0;
- (id)videosForAdamIDs:(id)a0 useMainThreadContext:(BOOL)a1;
- (id)videosWithDownloadState:(long long)a0 entitlementTypes:(id)a1 useMainThreadContext:(BOOL)a2;
- (id)videosWithExpiredDownloadsUsingMainThreadContext:(BOOL)a0;

@end
