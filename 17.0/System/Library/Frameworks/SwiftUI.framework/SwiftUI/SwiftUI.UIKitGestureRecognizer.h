@interface SwiftUI.UIKitGestureRecognizer : UIGestureRecognizer <_UITransformEventRespondable, _UIScrollEventRespondable> {
    void /* unknown type, empty encoding */ eventBridge;
    void /* unknown type, empty encoding */ initialScale;
    void /* unknown type, empty encoding */ initialAngle;
    void /* unknown type, empty encoding */ scrollConverter;
}

- (void)_scrollingChangedWithEvent:(id)a0;
- (void)_transformChangedWithEvent:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end
