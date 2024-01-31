@interface DocumentManagerExecutables.DOCButtonGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ numberOfTouchesRequired;
    void /* unknown type, empty encoding */ activeTouches;
    void /* unknown type, empty encoding */ startLocationInWindow;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
