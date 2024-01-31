@class _UIRepeatingGestureClock, NSString;

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer <_UIRepeatingGestureClockDelegate>

@property (retain, nonatomic) _UIRepeatingGestureClock *clock;
@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic, setter=_setButtonType:) long long _buttonType;
@property (readonly, nonatomic) double _force;
@property (nonatomic) unsigned long long changeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_resetGestureRecognizer;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_isGestureType:(long long)a0;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceivePress:(id)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setView:(id)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)repeatingGestureClockDidTick:(id)a0;

@end
