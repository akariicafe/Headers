@class NSXPCConnection, NSString, NSArray, NSHashTable, MPStoreDownloadManager, NSMutableDictionary, NSObject, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface MPMediaDownloadManager : NSObject <NSXPCListenerDelegate, MPStoreDownloadManagerObserver, ATDownloadProgressObserver> {
    NSMutableOrderedSet *_cachedATDownloads;
    NSMutableDictionary *_cachedProgressMap;
    NSMutableOrderedSet *_cachedATUnEnqueuedDownloads;
    NSMutableDictionary *_cachedATPausedDownloads;
    NSXPCConnection *__downloadProgressConnection;
    NSXPCConnection *__keepLocalTaskConnection;
    MPStoreDownloadManager *_storeDownloadManager;
    NSHashTable *_downloadObservers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    BOOL _hasRequiredAirTrafficEntitlement;
}

@property (class, readonly, nonatomic) MPMediaDownloadManager *sharedManager;

@property (readonly, nonatomic) NSArray *allMediaDownloadLibraryIdentifiers;
@property (readonly, nonatomic) long long activeDownloadsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_keepLocalTaskConnection;
- (BOOL)hasActiveDownloads;
- (void)removeObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (id)_init;
- (void)cancelDownloads:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)prioritizeDownload:(long long)a0;
- (BOOL)_hasRequiredAirTrafficEntitlement;
- (id)_updateCacheAndGetItemToReportForATAssetDownloadPauseReasonChange:(id)a0;
- (void)atcDidUpdateAsset:(id)a0 withProgress:(float)a1;
- (void)downloadManager:(id)a0 downloadsDidProgress:(id)a1;
- (id)_updateCacheAndGetMediaDownloadToReportForStoreDownloadProgress:(id)a0;
- (void)atcDidEnqueueAsset:(id)a0;
- (void)_prefectchAllATDownloads;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1 removeDownloads:(id)a2;
- (void)atcDidDownloadAsset:(id)a0 withError:(id)a1;
- (id)_downloadProgressConnection;
- (void).cxx_destruct;
- (void)enqueueAssetForDownload:(long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)_notifyObserversOfAssetDownloadProgress:(id)a0;
- (void)downloadLibraryWithCompletionHandler:(id /* block */)a0;
- (void)atcWillEnqueueDownloads:(id)a0 cancelDownloads:(id)a1;
- (BOOL)_isValidMediaAsset:(id)a0;
- (id)activeDownloadForStoreID:(long long)a0;
- (id)_statusChangeObservers;
- (void)_notifyObserversOfDownloadPauseReasonChangedForAssets:(id)a0;
- (void)_notifyObserversOfDownloadCompleteForAssets:(id)a0 withError:(id)a1;
- (id)_updateCacheAndItemToReportForATAssetDownloadProgressChange:(id)a0;
- (id)activeDownloadForMediaItemPersistentID:(long long)a0;
- (void)atcDidUpdateDownloadStateForAssets:(id)a0;
- (void)sendKeepLocalStatusChanged:(long long)a0 forLibraryIdentifier:(long long)a1 entityType:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)addObserver:(id)a0;
- (id)downloadForIdentifierSet:(id)a0 downloadState:(long long *)a1;
- (void)downloadManager:(id)a0 downloadDidProgress:(id)a1;

@end
