@class BSContinuousMachTimer;

@interface SBAlwaysOnCoverGestureRecognizer : NSObject {
    id _target;
    SEL _action;
    long long _state;
    BSContinuousMachTimer *_timer;
}

@property (nonatomic) double maximumCoverDuration;
@property (nonatomic) float minimumScreenCoverage;

- (void)_setState:(long long)a0;
- (void)dealloc;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)processHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_gestureBeganWithEvent:(struct __IOHIDEvent { } *)a0;
- (void)_gestureCanceledWithEvent:(struct __IOHIDEvent { } *)a0;
- (void)_gestureEndedWithEvent:(struct __IOHIDEvent { } *)a0;

@end
