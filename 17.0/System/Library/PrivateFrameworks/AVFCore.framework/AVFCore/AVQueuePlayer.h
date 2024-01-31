@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
    AVQueuePlayerInternal *_queuePlayer;
}

@property (nonatomic, getter=supportsAdvanceTimeForOverlappedPlayback, setter=setSupportsAdvanceTimeForOverlappedPlayback:) BOOL supportsAdvanceTimeForOverlappedPlayback;

+ (void)initialize;
+ (id)queuePlayerWithItems:(id)a0;

- (id)init;
- (id)initWithItems:(id)a0;
- (void)dealloc;
- (void)removeItem:(id)a0;
- (void)removeAllItems;
- (id)items;
- (void)advanceToNextItem;
- (void)setActionAtItemEnd:(long long)a0;
- (long long)_defaultActionAtItemEnd;
- (BOOL)canInsertItem:(id)a0 afterItem:(id)a1;
- (BOOL)canOverlapPlaybackFromPlayerItem:(id)a0 toPlayerItem:(id)a1;
- (void)insertItem:(id)a0 afterItem:(id)a1;

@end
