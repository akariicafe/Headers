@class UIDelayedAction, NSMutableSet, NSSet;

@interface UIHBDownGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_delayedAction;
    NSMutableSet *_currentlyPressedTypes;
    NSSet *_requiredPressTypes;
}

@property (nonatomic) double maximumIntervalBetweenPresses;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)_resetGestureRecognizer;
- (void)_fail;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)_succeed;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)setAllowedPressTypes:(id)a0;
- (BOOL)_allRequiredButtonsDown;
- (void)_processPresses:(id)a0;

@end
