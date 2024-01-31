@interface UIScrollAnimation : UIAnimation {
    struct CGPoint { double x; double y; } _startPoint;
    struct CGPoint { double x; double y; } _endPoint;
}

- (void)setEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setProgress:(float)a0;

@end
