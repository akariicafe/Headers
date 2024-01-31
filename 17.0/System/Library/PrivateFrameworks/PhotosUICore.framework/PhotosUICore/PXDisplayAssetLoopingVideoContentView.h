@class AVPlayerItem, ISWrappedAVPlayer, ISWrappedAVAudioSession, NSString, NSNumber, PXVideoPlayerView;

@interface PXDisplayAssetLoopingVideoContentView : PXDisplayAssetContentView <PXActivityCoordinatorItem> {
    PXVideoPlayerView *_videoView;
    unsigned long long _loadingIntervalID;
    unsigned long long _playbackIntervalID;
    id _timeObserver;
}

@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (retain, nonatomic) AVPlayerItem *videoPlayerItem;
@property (nonatomic) BOOL canLoadVideo;
@property (retain, nonatomic) NSNumber *queuePosition;
@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession;
@property (nonatomic) double videoLoadingProgress;
@property (nonatomic) unsigned long long activityCoordinatorQueuePosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)updateContent;
- (id)currentImage;
- (id)contentView;
- (double)loadingProgress;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (long long)playbackStyle;
- (void)animatedContentEnabledDidChange;
- (void)_endLoadingInterval:(BOOL)a0;
- (void)_endPlaybackInterval;
- (void)_handleDidShowPlaceholderForUnloadingPlayerItem:(id)a0;
- (void)_handlePlayerItemResult:(id)a0 info:(id)a1 requestID:(long long)a2;
- (void)_handleVideoPlayerTimeObserverWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_loadVideo;
- (void)_unloadVideo;
- (void)_updateVideoPlayerPlayerItem;
- (void)_updateVideoViewContentMode;
- (void)_updateVideoViewPlaceholderFilters;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentsRect;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (void)isDisplayingFullQualityContentDidChange;
- (void)placeholderImageFiltersDidChange;

@end
