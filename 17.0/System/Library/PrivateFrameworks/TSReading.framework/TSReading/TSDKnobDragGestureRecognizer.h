@class TSDAutoscroll, TSDInteractiveCanvasController, UITouch, TSDKnobTracker, TSDRep, TSDiOSCanvasViewController;

@interface TSDKnobDragGestureRecognizer : UIGestureRecognizer <TSDAutoscrollDelegate, TSDTrackerManipulator> {
    TSDiOSCanvasViewController *mCVC;
    UITouch *mTouch;
    struct CGPoint { double x; double y; } mKnobToTouchOffset;
    TSDKnobTracker *mTracker;
    BOOL mKnobTouchHasMoved;
    BOOL mDelayHasElapsed;
    struct CGPoint { double x; double y; } mOriginalPointInWindow;
    UITouch *mSecondTouch;
    TSDRep *mLastHitRep;
    BOOL mTouchesMoved;
}

@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (readonly, nonatomic) TSDInteractiveCanvasController *icc;
@property (retain, nonatomic) TSDAutoscroll *autoscroll;
@property (nonatomic) struct CGPoint { double x; double y; } autoscrollPoint;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (id)tracker;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setState:(long long)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)autoscrollWillNotStart;
- (id)initWithInteractiveCanvasController:(id)a0;
- (void)operationDidEnd;
- (BOOL)allowTrackerManipulatorToTakeControl:(id)a0;
- (int)allowedAutoscrollDirections;
- (void)cancelBecauseOfRotation;
- (void)p_cancelDelayedKnobTracking;
- (BOOL)p_hitRepIsValid:(id)a0;
- (struct CGPoint { double x0; double x1; })p_pointInUnscaledCanvas;
- (void)p_requestDelayedKnobTracking:(double)a0;
- (void)p_triggerDelayedKnobTracking:(id)a0;
- (BOOL)readyToEndOperation;
- (double)unscaledStartAutoscrollThreshold;
- (void)updateAfterAutoscroll:(id)a0;

@end
