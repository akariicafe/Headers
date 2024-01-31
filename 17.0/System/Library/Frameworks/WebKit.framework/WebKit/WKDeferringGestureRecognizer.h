@interface WKDeferringGestureRecognizer : UIGestureRecognizer {
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> { id m_weakReference; } _deferringGestureDelegate;
}

@property (nonatomic) BOOL immediatelyFailsAfterTouchEnd;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithDeferringGestureDelegate:(id)a0;
- (id).cxx_construct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)endDeferral:(BOOL)a0;
- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)shouldDeferGestureRecognizer:(id)a0;

@end
