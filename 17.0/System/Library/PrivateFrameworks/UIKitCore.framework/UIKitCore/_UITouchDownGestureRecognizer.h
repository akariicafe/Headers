@class UIDelayedAction;

@interface _UITouchDownGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _locationInView;
    struct CGPoint { double x; double y; } _initialLocationInScreenSpace;
    UIDelayedAction *_activationDelay;
}

@property (nonatomic) double allowableMovement;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)activationDelayHandler;
- (void)recognizeOrFailForCurrentLocation;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)gestureIsStillValid;
- (void)cancelActivationDelay;
- (BOOL)locationIsMostlyInsideView:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;

@end
