@class NSTimer;

@interface PSGWallClockMinuteTimer : NSObject {
    id _target;
    SEL _action;
    NSTimer *_timer;
}

- (void)_fireAction;
- (void)startTimer;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
