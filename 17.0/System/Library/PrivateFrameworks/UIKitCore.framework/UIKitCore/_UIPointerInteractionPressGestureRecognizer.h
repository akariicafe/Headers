@interface _UIPointerInteractionPressGestureRecognizer : UILongPressGestureRecognizer

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;

@end
