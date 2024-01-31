@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation

@property (readonly, nonatomic) NSMutableArray *animations;
@property (copy, nonatomic) id /* block */ groupStepHandler;

- (void)pause;
- (void)startWithRunner:(id)a0;
- (BOOL)running;
- (void)stopAnimation:(BOOL)a0;
- (void)onTimerFired:(double)a0;
- (BOOL)timed;
- (BOOL)runsForever;
- (id)initWithAnimations:(id)a0;
- (void)setRunsForever:(BOOL)a0;
- (void)resume;
- (void).cxx_destruct;
- (double)duration;
- (void)setDuration:(double)a0;

@end
