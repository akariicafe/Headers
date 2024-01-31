@class UITouch;

@interface MKTiltGestureRecognizer : UIPanGestureRecognizer {
    UITouch *_touch1;
    UITouch *_touch2;
    struct CGPoint { double x; double y; } _initialTouch1Point;
    struct CGPoint { double x; double y; } _initialTouch2Point;
    double _initialDistance;
}

- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (double)_distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)_activeTouchesForEvent:(id)a0;

@end
