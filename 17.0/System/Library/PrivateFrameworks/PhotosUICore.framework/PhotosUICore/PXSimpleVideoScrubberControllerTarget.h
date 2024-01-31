@class NSString, AVPlayer;

@interface PXSimpleVideoScrubberControllerTarget : NSObject <PXVideoScrubberControllerTarget> {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentItemDuration;
}

@property (readonly, nonatomic) AVPlayer *videoPlayer;
@property (copy, nonatomic) id /* block */ durationChangeHandler;
@property (copy, nonatomic) id /* block */ statusChangeHandler;
@property (copy, nonatomic) id /* block */ playerItemChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)playerItem;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)cancelPendingSeeks;
- (void)removeTimeObserver:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentItemDuration;
- (id)initWithVideoPlayer:(id)a0;
- (float)playRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })playerCurrentTime;
- (long long)playerStatus;
- (void)videoScrubberController:(id)a0 seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 completionHandler:(id /* block */)a4;

@end
