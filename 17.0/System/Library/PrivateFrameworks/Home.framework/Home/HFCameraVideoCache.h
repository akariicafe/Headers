@class NSString, HFDiskCache, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, HFCameraVideoCacheDelegate, HFCameraVideoDownloader;

@interface HFCameraVideoCache : NSObject <HFNetworkMonitorObserver, HFDiskCacheDelegate, HFCameraVideoDownloaderDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) HFDiskCache *diskCache;
@property (readonly, nonatomic) id<HFCameraVideoDownloader> videoDownloader;
@property (retain, nonatomic) id<HFCameraVideoCacheDelegate> delegate;
@property (nonatomic) unsigned long long diskCacheLimit;
@property (nonatomic) double cacheDurationLimit;
@property (readonly, nonatomic) double expensiveNetworkCacheDurationLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setDelegate:(id)a0;
- (id)_delegate;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didDownloadVideoFileForClip:(id)a0 toURL:(id)a1;
- (void)foundVideoFileForClip:(id)a0 atURL:(id)a1;
- (void)networkDidBecomeExpensive:(id)a0;
- (void)_cacheClip:(id)a0;
- (void)_cacheClip:(id)a0 inClips:(id)a1;
- (double)_cacheDurationLimit;
- (id)_existingDownloadOperationForClip:(id)a0;
- (double)_expensiveNetworkCacheDurationLimit;
- (void)_gloablNotifyDidAddVideoForClip:(id)a0;
- (void)_limitDiskCacheToPercentageofAvailableDiskSpace:(unsigned long long)a0;
- (void)_notifyVideoExistsForClip:(id)a0 atURL:(id)a1;
- (BOOL)_queueVideoDownloadForClip:(id)a0 priority:(long long)a1;
- (void)_setCacheDurationLimit:(double)a0;
- (void)cacheClip:(id)a0;
- (void)cacheClip:(id)a0 inClips:(id)a1;
- (void)diskCache:(id)a0 didEvictFileFromDisk:(id)a1 forUniqueIdentifier:(id)a2;
- (BOOL)diskCache:(id)a0 shouldAddExistingFileToCache:(id)a1;
- (id)initWithVideoDownloader:(id)a0;
- (void)limitDiskCacheToPercentageofAvailableDiskSpace:(unsigned long long)a0;

@end
