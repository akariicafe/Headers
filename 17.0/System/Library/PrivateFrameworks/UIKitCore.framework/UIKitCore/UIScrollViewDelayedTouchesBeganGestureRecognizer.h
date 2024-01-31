@class UIDelayedAction, UIView;
@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_touchDelay;
    struct CGPoint { double x; double y; } _startSceneReferenceLocation;
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> *_client;
}

+ (BOOL)_shouldDefaultToTouches;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)clearTimer;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)a0;
- (void)_resetGestureRecognizer;
- (void)sendDelayedTouches;
- (id)_clientView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldMakeTimerForDelayedContentTouches:(id)a0;
- (void).cxx_destruct;
- (void)sendTouchesShouldBeginForTouches:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
