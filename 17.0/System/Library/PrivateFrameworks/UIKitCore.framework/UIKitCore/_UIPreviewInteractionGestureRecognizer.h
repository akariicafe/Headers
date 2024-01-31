@interface _UIPreviewInteractionGestureRecognizer : UILongPressGestureRecognizer

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)cancel;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setDelegate:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)recognize;

@end
