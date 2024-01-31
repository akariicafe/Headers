@class CADisplayLink, UIPanGestureRecognizer;
@protocol WFDrawerDragTracking;

@interface WFDrawerDismissalPanMediator : NSObject {
    UIPanGestureRecognizer *_gestureRecognizer;
    id<WFDrawerDragTracking> _dragTracker;
    CADisplayLink *_displayLink;
    double _translation;
    double _previousVelocity;
    double _peakVelocity;
}

- (void)handleDisplayLink:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithPanGesture:(id)a0 dragTracker:(id)a1;

@end
