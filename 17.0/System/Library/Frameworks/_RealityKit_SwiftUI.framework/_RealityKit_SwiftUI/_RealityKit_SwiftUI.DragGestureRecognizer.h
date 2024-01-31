@interface _RealityKit_SwiftUI.DragGestureRecognizer : UIPanGestureRecognizer <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ startPoint;
    void /* unknown type, empty encoding */ draggable;
}

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)onPanInternal:(id)a0;

@end
