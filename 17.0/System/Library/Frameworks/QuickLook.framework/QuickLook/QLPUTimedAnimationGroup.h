@interface QLPUTimedAnimationGroup : QLPUAnimationGroup {
    BOOL _areAnimationsPaused;
    double _pausedElapsedTime;
}

@property (nonatomic) double beginTime;
@property (readonly, nonatomic) double currentTime;

- (void)_update;
- (id)init;
- (double)elapsedTime;
- (void)setElapsedTime:(double)a0;
- (void)updateAnimations;
- (void)pauseAnimations;
- (void)resumeAnimations;

@end
