@class AVPlayer;

@interface VideoKVOHelper : NSObject

@property (retain, nonatomic) AVPlayer *player;
@property (copy, nonatomic) id /* block */ playerItemBlock;
@property (copy, nonatomic) id /* block */ playerBlock;
@property (retain, nonatomic) id timeObserver;

- (void)dealloc;
- (id)initWithPlayer:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)addAVPlayerItemObserverWithBlock:(id /* block */)a0;
- (void)addAVPlayerRateObserverWithBlock:(id /* block */)a0;

@end
