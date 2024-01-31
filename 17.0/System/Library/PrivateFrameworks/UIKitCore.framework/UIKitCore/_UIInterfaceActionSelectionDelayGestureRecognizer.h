@class UIDelayedAction;

@interface _UIInterfaceActionSelectionDelayGestureRecognizer : UIGestureRecognizer

@property (readonly, nonatomic) UIDelayedAction *delayedAction;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_timerSatisfied;

@end
