@class NSMutableSet;
@protocol _MKUserInteractionGestureRecognizerTouchObserver;

@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer {
    NSMutableSet *_activeTouches;
}

@property (weak, nonatomic) id<_MKUserInteractionGestureRecognizerTouchObserver> touchObserver;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
