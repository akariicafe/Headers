@class BLServiceProxy, NSMutableDictionary, NSHashTable, BLDownloadQueueNonUI, NSArray, NSString;

@interface BLDownloadQueueServerProgressObserver : NSObject <BLProgressReceiving, BLServiceProxyConnectionMonitoring> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeDownloadsLock;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) BLServiceProxy *serviceProxy;
@property (retain, nonatomic) NSMutableDictionary *activeDownloads;
@property (weak, nonatomic) BLDownloadQueueNonUI *downloadQueue;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)a0;
- (id)initWithDownloadQueue:(id)a0;
- (void)sendCancelCompletionNotificationForDownloadWithDownloadID:(id)a0;
- (void)_postDownloadCompleteNotificationWithDictionary:(id)a0 failed:(BOOL)a1;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)purchaseDidFailedWithResponse:(id)a0;
- (void)downloadCompleteWithUserInfo:(id)a0;
- (id)_stringFromObject:(id)a0;
- (void)notifyPurchaseAttemptForRequest:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)purchaseDidCompleteWithResponse:(id)a0;
- (id)_numberFromObject:(id)a0;
- (void)reconnectingToServiceForProxy:(id)a0;
- (void)_postDownloadProgressNotificationWithDictionary:(id)a0;
- (id)_downloadStatusFromDictionary:(id)a0 outParamNewlyTrackedDownload:(BOOL *)a1;
- (void)didFailWithUserInfo:(id)a0;
- (void)purchaseFailedWithUserInfo:(id)a0;
- (void)sendInitialProgressNotificationForDownloadWithStoreID:(id)a0 storePlaylistID:(id)a1 orPermlink:(id)a2 downloadID:(id)a3 title:(id)a4 collectionTitle:(id)a5 assetKind:(id)a6 isPaused:(BOOL)a7 targetObserver:(id)a8;
- (void).cxx_destruct;
- (void)purchaseSucceededWithUserInfo:(id)a0;
- (id)_dateFromObject:(id)a0;
- (id)_downloadStatusStoreID:(id)a0 storePlaylistID:(id)a1 orPermLink:(id)a2 downloadID:(id)a3 title:(id)a4 collectionTitle:(id)a5 assetKind:(id)a6 isPaused:(BOOL)a7;
- (void)cancelAllPausedDownloads;
- (void)notifyDidCompleteForDownloadID:(id)a0;
- (void)progressWithUserInfo:(id)a0;

@end
