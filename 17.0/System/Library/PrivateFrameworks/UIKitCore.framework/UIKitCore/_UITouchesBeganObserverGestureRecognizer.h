@interface _UITouchesBeganObserverGestureRecognizer : UIGestureRecognizer

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)_affectedByGesture:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (BOOL)shouldReceiveEvent:(id)a0;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;

@end
