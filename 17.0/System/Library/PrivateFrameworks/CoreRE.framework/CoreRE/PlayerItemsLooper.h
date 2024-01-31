@class NSArray, AVQueuePlayer;

@interface PlayerItemsLooper : NSObject

@property (retain, nonatomic) AVQueuePlayer *player;
@property (copy, nonatomic) NSArray *loopedAssets;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeLastAndEnqueueAssetItems;
- (void)enqueueAssetItems;
- (id)initWithPlayer:(id)a0 assets:(id)a1;
- (void)playerItemAtEnd:(id)a0;

@end
