@interface SBFMouseButtonDownGestureRecognizer : UIGestureRecognizer

- (BOOL)_isMouseButtonClickEvent:(struct __IOHIDEvent { } *)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_succesfullyRecognizeFromEvent:(struct __IOHIDEvent { } *)a0;

@end
