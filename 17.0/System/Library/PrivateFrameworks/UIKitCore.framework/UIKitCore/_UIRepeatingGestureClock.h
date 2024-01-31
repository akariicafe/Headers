@protocol _UIRepeatingGestureClockDelegate;

@interface _UIRepeatingGestureClock : NSObject {
    unsigned long long _delayIndex;
    BOOL _timerOn;
}

@property (weak, nonatomic) id<_UIRepeatingGestureClockDelegate> delegate;

- (void)_cancelTimer;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_scheduleTimer;
- (void)_createTick:(id)a0;
- (void)_performTick:(id)a0;
- (void)startClock;
- (void)stopClock;

@end
