@class ASVWorldGestureDragOffsetCorrector;
@protocol ASVWorldTwoFingerGestureDelegate;

@interface ASVWorldTwoFingerGesture : ASVTwoFingerGesture

@property (retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector;
@property (weak, nonatomic) id<ASVWorldTwoFingerGestureDelegate> worldDelegate;

- (void).cxx_destruct;
- (void)finishGesture;
- (id)initWithFirstTouch:(id)a0 secondTouch:(id)a1 dataSource:(id)a2 worldDelegate:(id)a3;
- (void)updatePanWithFirstTouchLocation:(id)a0 secondTouchLocation:(SEL)a1 midPoint:(void /* unknown type, empty encoding */)a2;

@end
