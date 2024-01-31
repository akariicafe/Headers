@class CLSilo;
@protocol CLTimerScheduler;

@interface CLTimer : NSObject {
    double _delaySetAtTime;
    CLSilo *_silo;
    id<CLTimerScheduler> _scheduler;
}

@property (nonatomic) double nextFireTime;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) double nextFireDelay;
@property (nonatomic) double fireInterval;

- (void)setNextFireDelay:(double)a0 interval:(double)a1;
- (double)nextFireDelayRaw;
- (void)setNextFireTime:(double)a0 interval:(double)a1;
- (void)shouldFire;
- (void)invalidate;
- (void)dbgAssertInside;
- (double)nextFireTime;
- (void).cxx_destruct;
- (void)updateScheduler;
- (id)initInSilo:(id)a0 withScheduler:(id)a1;
- (void)setNextFireTime:(double)a0;

@end
