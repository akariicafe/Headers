@interface WKInspectorNodeSearchGestureRecognizer : UIGestureRecognizer {
    struct RetainPtr<UITouch> { void *m_ptr; } _touch;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id).cxx_construct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)_processTouches:(id)a0 state:(long long)a1;

@end
