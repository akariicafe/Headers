@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, PXAudioAssetMediaProvider;

@interface PXFlexMusicMediaProvider : NSObject <PXAudioAssetMediaProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_requestByID;
    NSMutableDictionary *_queue_requestIDsByAsset;
    NSMutableDictionary *_queue_downloaderByAsset;
    _Atomic int _requestIDCounter;
}

@property (class, readonly, nonatomic) id<PXAudioAssetMediaProvider> sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)cancelRequest:(long long)a0;
- (void).cxx_destruct;
- (long long)_nextRequestID;
- (void)_deliverResultForAsset:(id)a0 preferredDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 error:(id)a2 toHandler:(id /* block */)a3;
- (void)_handleDownloaderFinishedForAsset:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_queue_cancelRequest:(long long)a0;
- (void)_queue_handleDownloaderFinishedForAsset:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)_queue_startDownloadIfNeededForRequest:(id)a0;
- (id)initWithQOSClass:(unsigned int)a0;
- (long long)requestMediaForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;

@end
