@interface _TtC19_RealityKit_SwiftUIP33_775A7FE6C6FA1F309878473FBDD2537430DragFromPointGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {
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
