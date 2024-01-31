@interface _TtC19_RealityKit_SwiftUIP33_4ABB148B5599ED86F84C6943D86F570D30DragFromPointGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ manipulator;
    void /* unknown type, empty encoding */ onPan;
    void /* unknown type, empty encoding */ startPoint;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)onPanInternal:(id)a0;

@end
