@class NSObject, NSMutableDictionary, MTImageStore;
@protocol OS_dispatch_queue;

@interface MTImageDownloader : MTURLSessionManager <MTFeedIngesterImageDownloaderProtocol>

@property (retain, nonatomic) NSMutableDictionary *clientRequestsByUrl;
@property (retain, nonatomic) MTImageStore *imageStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imageWorkQueue;
@property (nonatomic) BOOL hasPurgedTemporaryResourcesDirectory;

- (id)init;
- (void).cxx_destruct;
- (id)_clientRequestsForUrl:(id)a0;
- (BOOL)_completeUsingExistingDownloadedImageForUuid:(id)a0 imageUrl:(id)a1;
- (void)_dequeueClientRequests:(id)a0;
- (void)_downloadImageUrl:(id)a0 cacheKey:(id)a1 podcastUuid:(id)a2 userInitiated:(BOOL)a3 backgroundFetch:(BOOL)a4 callback:(id /* block */)a5;
- (long long)_enqueueClientInfoWithUrl:(id)a0 key:(id)a1 podcastUuid:(id)a2 completion:(id /* block */)a3;
- (void)_finishProcessingClientRequests:(id)a0 originalUrl:(id)a1 success:(BOOL)a2 error:(id)a3;
- (id)_keyForImageDownloaderTempFilename:(id)a0;
- (void)_onImageWorkQueuePurgeUnneededItemsInTemporaryResourcesDirectoryIfNecessary;
- (void)_processFinishedDownloadWithContentURL:(id)a0 originalUrl:(id)a1 actualRequestUrl:(id)a2 finishedWithContentHandler:(id /* block */)a3 processedKeys:(id)a4;
- (void)_saveArtworkImageUrl:(id)a0 forPodcastUuids:(id)a1 logHeader:(id)a2;
- (BOOL)_shouldDiscardTransparency;
- (id)_temporaryImagePathByCopyingDownloadedContent:(id)a0 uuid:(id)a1 error:(id *)a2;
- (id)_temporaryImagePathForDownloadedImageWithUuid:(id)a0;
- (id)_temporaryResourcesDirectory;
- (double)_urlSessionResourceTimeout;
- (void)cleanupTemporaryResourcesDirectoryIfNecessary;
- (void)configureSession:(id)a0;
- (void)downloadImageForPodcastUuid:(id)a0 urlOptions:(id)a1 userInitiated:(BOOL)a2 useBackgroundFetch:(BOOL)a3;
- (void)downloadImageForPodcastUuid:(id)a0 urlOptions:(id)a1 userInitiated:(BOOL)a2 useBackgroundFetch:(BOOL)a3 callback:(id /* block */)a4;
- (void)downloadImageForPodcastUuid:(id)a0 userInitiated:(BOOL)a1 backgroundFetch:(BOOL)a2 callback:(id /* block */)a3;
- (void)downloadImageUrl:(id)a0 cacheKey:(id)a1 userInitiated:(BOOL)a2 backgroundFetch:(BOOL)a3;
- (void)downloadImageUrl:(id)a0 cacheKey:(id)a1 userInitiated:(BOOL)a2 backgroundFetch:(BOOL)a3 callback:(id /* block */)a4;
- (void)downloadImageUrl:(id)a0 cacheKey:(id)a1 userInitiated:(BOOL)a2 callback:(id /* block */)a3;
- (void)task:(id)a0 didCompleteWithDownloadedContentUrl:(id)a1;
- (void)task:(id)a0 didFailWithError:(id)a1 orStatusCode:(long long)a2;

@end
