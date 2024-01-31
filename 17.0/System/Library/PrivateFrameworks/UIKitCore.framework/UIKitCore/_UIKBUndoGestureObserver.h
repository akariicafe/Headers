@interface _UIKBUndoGestureObserver : UIGestureRecognizer

+ (id)undoGestureObserverWithTarget:(id)a0 action:(SEL)a1 delegate:(id)a2;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)_analyticsIsGestureHandled;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_failOrCancelIfNecessary;

@end
