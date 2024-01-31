@class NSError, AVWeakReference;

@interface AVPlayerConnection : NSObject {
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    long long _status;
    NSError *_error;
}

@property (readonly, nonatomic) long long status;

- (id)player;
- (void)dealloc;
- (void)removeItemFromPlayQueue;
- (id)description;
- (id)playerItem;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)a0;
- (id)error;
- (id)initWithWeakReferenceToPlayer:(id)a0 weakReferenceToPlayerItem:(id)a1;

@end
