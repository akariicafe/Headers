@class UIScrollViewPinchGestureRecognizer;

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {
    double _scale;
    double _velocity;
    long long _state;
}

@property (retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (double)velocity;
- (id)forwardingTargetForSelector:(SEL)a0;
- (double)scale;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (id)_activeTouchesForEvent:(id)a0;
- (void)simulateScale:(double)a0 velocity:(double)a1;

@end
