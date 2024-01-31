@class AVPlayerLooper, AVQueuePlayer, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface SFMediaPlayerView : UIView {
    AVPlayerLooper *_avLooper;
    AVQueuePlayer *_avQueuePlayer;
    NSMutableArray *_mediaItems;
    NSObject<OS_dispatch_source> *_speedUpTimer;
    BOOL _isKVOObserver;
}

@property (nonatomic) BOOL pausesAfterEachItem;

+ (Class)layerClass;

- (void)play;
- (void)pause;
- (void)dealloc;
- (BOOL)isPaused;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_pause;
- (void)advanceToNextItem;
- (void)playerItemDidReachEnd:(id)a0;
- (void)addMovieItem:(id)a0;
- (void)breakFirstEnqueuedLoop;
- (void)dequeueNonPlayingItemsFromMediaItem:(id)a0;
- (void)enqueueItemsFromMediaItem:(id)a0 afterItem:(id)a1;
- (void)handleBoundaryTimeObserverForMediaItem:(id)a0;
- (void)removeAllQueuedItems;
- (void)removeMovieItem:(id)a0;
- (void)setUpTimeRangeNotificationsForItem:(id)a0;
- (void)speedUpRemainderOfCurrentItem;
- (void)startMovieLoopWithPath:(id)a0;
- (void)startMovieLoopWithPath:(id)a0 assetType:(int)a1 adjustmentsURL:(id)a2;
- (void)stopSpeedUpTimer;
- (void)updateViewForAssetType:(int)a0 adjustmentsURL:(id)a1;

@end
