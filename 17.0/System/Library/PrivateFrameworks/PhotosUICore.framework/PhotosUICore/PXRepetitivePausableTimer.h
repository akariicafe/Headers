@class NSTimer;

@interface PXRepetitivePausableTimer : NSObject {
    double _repetitiveInterval;
    id /* block */ _callBlock;
    int _reasonsToPause;
    NSTimer *_timer;
}

- (void)pause;
- (void)reset;
- (void).cxx_destruct;
- (void)_stopTimer;
- (void)_startTimer;
- (void)unpause;
- (void)_handleTimer:(id)a0;
- (void)_pauseWithReasons:(int)a0;
- (void)_unpauseWithReasons:(int)a0;
- (id)initWithRepeatedInterval:(double)a0 initialTrigger:(BOOL)a1 target:(id /* block */)a2;

@end
