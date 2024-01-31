@class NSString, MPStoreDownload;

@interface VUIMPMediaItemCloudDownloadController : VUIMPMediaItemDownloadController <MPStoreDownloadManagerObserver>

@property (retain, nonatomic) MPStoreDownload *storeDownload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_stateFromStoreDownload:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)downloadManager:(id)a0 downloadDidProgress:(id)a1;
- (BOOL)supportsPausing;
- (void)_addStoreObserver;
- (void)_onProcessingQueue_cancelDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_removeStoreObserver;
- (id)initWithMediaItem:(id)a0 serialProcessingDispatchQueue:(id)a1;
- (id)initWithMediaItem:(id)a0 state:(id)a1 serialProcessingDispatchQueue:(id)a2;
- (BOOL)isRestoreDownload;

@end
