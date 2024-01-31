@class _UIRepeatingGestureClock, NSString, NSMutableOrderedSet;

@interface _UIFocusMovementPressGestureRecognizer : UIGestureRecognizer <_UIRepeatingGestureClockDelegate>

@property (retain, nonatomic) _UIRepeatingGestureClock *repeatingClock;
@property (readonly, nonatomic, getter=_isRecognizing) BOOL isRecognizing;
@property (nonatomic) unsigned long long focusHeading;
@property (retain, nonatomic, getter=_trackedPresses, setter=_setTrackedPresses:) NSMutableOrderedSet *trackedPresses;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) long long repeatCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAllowedTouchTypes:(id)a0;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_startTrackingPresses:(id)a0;
- (void)_stopTrackingPresses:(id)a0;
- (void)_updateForPresses:(id)a0 action:(unsigned long long)a1;
- (void)_verifyTrackingPresses:(id)a0;
- (void)configureDefaults;
- (unsigned long long)focusHeadingForPresses:(id)a0;
- (void)repeatingGestureClockDidTick:(id)a0;
- (void)setFocusHeading:(unsigned long long)a0 omitStateUpdate:(BOOL)a1;

@end
