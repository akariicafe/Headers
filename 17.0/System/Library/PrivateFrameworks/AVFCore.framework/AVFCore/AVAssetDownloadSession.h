@class NSArray, AVAssetDownloadSessionInternal, NSURL, NSError, AVMediaSelection;

@interface AVAssetDownloadSession : NSObject {
    AVAssetDownloadSessionInternal *_internal;
}

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) unsigned long long availableFileSize;
@property (readonly, nonatomic) unsigned long long countOfBytesReceived;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) AVMediaSelection *resolvedMediaSelection;

+ (id)assetDownloadSessionWithAsset:(id)a0 mediaSelections:(id)a1 destinationURL:(id)a2 options:(id)a3;
+ (void)registerDownloadLocation:(id)a0 forURLAsset:(id)a1;
+ (id)assetDownloadSessionWithAsset:(id)a0 destinationURL:(id)a1 options:(id)a2;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)a0;
+ (id)assetDownloadSessionWithURL:(id)a0 destinationURL:(id)a1 options:(id)a2;

- (struct OpaqueFigAsset { } *)_figAsset;
- (void)pause;
- (id)init;
- (void)dealloc;
- (void)start;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (void)stop;
- (BOOL)isDefunct;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)_startOnQueue;
- (id)_weakReference;
- (void)_removeFigPlaybackItemListeners;
- (void)_addFigAssetListeners;
- (void)_addFigPlaybackItemListeners;
- (id)_common_init;
- (struct OpaqueFigAsset { } *)_createDuplicateFigAssetFromAVAsset:(id)a0;
- (void)_downloadFailureCallbackWithError:(id)a0;
- (void)_downloadSuccessCallback;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { } *)a0 key:(struct __CFString { } *)a1;
- (id)_errorFromAssetNotificationPayload:(id)a0;
- (id)_figAssetNotificationNames;
- (id)_figPlaybackItemNotificationNames;
- (int)_primeCache;
- (void)_primeCacheOnDispatchQueue;
- (int)_readyForInspection;
- (void)_removeFigAssetListeners;
- (void)_sendDidFinishDownloadForMediaSelectionWithMediaSelection:(id)a0;
- (void)_sendDidResolveMediaSelectionWithMediaSelection:(id)a0;
- (void)_sendDownloadFailureToDelegateWithError:(id)a0;
- (void)_sendDownloadSuccessToDelegate;
- (void)_sendLoadedTimeRangesChangedToDelegateWithNewlyLoadedTimeRange:(id)a0 currentLoadedTimeRanges:(id)a1 timeRangeExpectedToLoad:(id)a2 selectedMediaArray:(id)a3;
- (void)_sendProgessUpdateWithExpectedBytesToDownload:(unsigned long long)a0 bytesDownloaded:(unsigned long long)a1;
- (void)_sendWillDownloadVariants:(id)a0;
- (int)_setFileFigAsset:(struct OpaqueFigAsset { } *)a0;
- (void)_setupFigClientObjectAsync:(id)a0;
- (id)_setupFigClientObjectForFileDownload:(id)a0;
- (id)_setupFigClientObjectForStreaming:(id)a0;
- (void)_startLoadingMetadataOnQueue;
- (id)_startOnQueueFirstTime;
- (void)_transitionToTerminalStatus:(long long)a0 error:(id)a1;
- (id)_verifyDownloadConfigurationForAssetType;
- (void)cancelAndReleaseProgressTimerOnQueue;
- (BOOL)ensureProgressTimerIsRunningOnQueueWithError:(id *)a0;
- (id)initWithAsset:(id)a0 mediaSelections:(id)a1 destinationURL:(id)a2 options:(id)a3;
- (id)initWithDownloadToken:(unsigned long long)a0;
- (id)initWithURL:(id)a0 destinationURL:(id)a1 options:(id)a2;
- (void)startLoadingMetadata;

@end
