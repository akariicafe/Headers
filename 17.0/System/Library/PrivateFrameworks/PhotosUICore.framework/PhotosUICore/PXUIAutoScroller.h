@class CADisplayLink;

@interface PXUIAutoScroller : PXAutoScroller

@property (retain, nonatomic) CADisplayLink *displayLink;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectForScrollView:(id)a0;
- (void)_handleDisplayLink:(id)a0;
- (BOOL)autoscrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)startRepeating;
- (void).cxx_destruct;
- (void)updateWithGestureRecognizer:(id)a0;
- (void)stopRepeating;

@end
