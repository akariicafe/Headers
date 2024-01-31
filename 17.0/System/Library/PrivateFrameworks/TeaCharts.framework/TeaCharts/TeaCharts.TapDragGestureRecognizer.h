@interface TeaCharts.TapDragGestureRecognizer : UIGestureRecognizer {
    void /* unknown type, empty encoding */ locations;
    void /* unknown type, empty encoding */ minimumPressDuration;
    void /* unknown type, empty encoding */ orientation;
    void /* unknown type, empty encoding */ touches;
    void /* unknown type, empty encoding */ timer;
}

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end
