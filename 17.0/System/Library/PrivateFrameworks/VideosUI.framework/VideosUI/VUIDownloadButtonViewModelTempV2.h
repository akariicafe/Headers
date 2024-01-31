@interface VUIDownloadButtonViewModelTempV2 : VUIDownloadButtonViewModel

- (void)resumeDownload;
- (void)pauseDownload;
- (void)deleteDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithMPMediaItem:(id)a0;
- (id)initWithMPMediaItemCollection:(id)a0;
- (id)initWithVideoManagedObject:(id)a0;
- (id)initWithVideosPlayable:(id)a0;
- (void)preflightPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadAllowingCellular:(BOOL)a0 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a1 quality:(long long)a2 preferEnhancedDownload:(BOOL)a3;
- (void)stopDownload;

@end
