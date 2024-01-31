@class NSObject;
@protocol OS_dispatch_source;

@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer {
    unsigned char _systemGestureGateType;
    unsigned char _systemGesturesRecognitionPossible : 1;
    unsigned char _waitingForSystemGestureStateNotification : 1;
    double _lastTouchTime;
    NSObject<OS_dispatch_source> *_delayTimeoutTimer;
}

+ (BOOL)_shouldDefaultToTouches;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)_gateGestureTypeString;
- (void)setDelaysTouchesBegan:(BOOL)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)dealloc;
- (void)_resetGestureRecognizer;
- (void)_timeOut;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setEnabled:(BOOL)a0;
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)a0;
- (void)_cancelTimeoutTimerIfNeeded;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithWindow:(id)a0 type:(unsigned char)a1;
- (void).cxx_destruct;
- (void)setDelaysTouchesEnded:(BOOL)a0;
- (void)_systemGestureStateChanged:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;

@end
