@interface NCSecondaryClickGestureRecognizer : UIGestureRecognizer

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)isSecondaryClickEvent:(id)a0;

@end
