@class NSString, NSMutableDictionary, MPStoreDownloadManager, NSObject;
@protocol OS_dispatch_queue, ATAssetLinkDelegate;

@interface ATMPStoreAssetLink : NSObject <MPStoreDownloadManagerObserver, ATAssetLink> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MPStoreDownloadManager *_downloadManager;
    NSMutableDictionary *_assetMap;
    NSMutableDictionary *_downloadsMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;

- (void)close;
- (void)prioritizeAsset:(id)a0;
- (id)init;
- (unsigned long long)maximumBatchSize;
- (void)_finishAsset:(id)a0 error:(id)a1 retryable:(BOOL)a2;
- (BOOL)open;
- (BOOL)linkIsReady;
- (unsigned long long)priority;
- (id)_assetTypeForStoreKind:(id)a0;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1 removeDownloads:(id)a2;
- (void).cxx_destruct;
- (BOOL)canEnqueueAsset:(id)a0;
- (void)cancelAssets:(id)a0;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (id)_dataClassForStoreKind:(id)a0;
- (void)_enqueueAssets:(id)a0;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;
- (void)downloadManager:(id)a0 downloadDidProgress:(id)a1;
- (void)downloadManager:(id)a0 didAddActiveDownloads:(id)a1 removeActiveDownloads:(id)a2;
- (id)_errorForFinishedDownload:(id)a0;

@end
