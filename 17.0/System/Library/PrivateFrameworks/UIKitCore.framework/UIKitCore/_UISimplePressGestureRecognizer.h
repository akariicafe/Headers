@class UIDelayedAction, NSArray, NSValue;

@interface _UISimplePressGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) UIDelayedAction *delayedAction;
@property (retain, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) NSValue *activeTrigger;
@property (copy, nonatomic) NSArray *allowedTouchTypes;
@property (copy, nonatomic) NSArray *allowedPressTypes;

- (void)_begin;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_cancelOrFail;
- (void)_endOrFail;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;

@end
