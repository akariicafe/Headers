@class MPAVItem;

@interface MPAVController : NSObject

@property (retain, nonatomic) MPAVItem *currentItem;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (nonatomic) long long state;
@property (nonatomic) BOOL shouldDisplayAsPlaying;
@property (nonatomic) float rate;
@property (nonatomic) double currentTime;

- (void)play;
- (void)pause;
- (void).cxx_destruct;
- (void)removeTimeObserver:(id)a0;
- (id)addPeriodicTimeObserverForInterval:(double)a0 usingBlock:(id /* block */)a1;

@end
