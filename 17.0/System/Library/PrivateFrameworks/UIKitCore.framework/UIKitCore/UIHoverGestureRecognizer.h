@class UITouch, UIHoverEvent;

@interface UIHoverGestureRecognizer : UIGestureRecognizer {
    UIHoverEvent *_currentHoverEvent;
    UITouch *_currentTouch;
}

@property (nonatomic, getter=_pausesWhilePanning, setter=_setPausesWhilePanning:) BOOL pausesWhilePanning;
@property (readonly, nonatomic) double _hoverHeight;
@property (readonly, nonatomic) double _maximumHoverHeight;
@property (readonly, nonatomic) double _hoverTouchTimestamp;
@property (readonly, nonatomic, getter=_previousTrackpadFingerDownCount) long long previousTrackpadFingerDownCount;
@property (readonly, nonatomic, getter=_trackpadFingerDownCount) long long trackpadFingerDownCount;
@property (readonly, nonatomic) double _zOffset;
@property (readonly, nonatomic) double _altitudeAngle;
@property (readonly, nonatomic) double zOffset;
@property (readonly, nonatomic) double altitudeAngle;

- (void)_hoverExited:(id)a0 withEvent:(id)a1;
- (void)_hoverEntered:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)_hoverMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_affectedByGesture:(id)a0;
- (void)_hoverCancelled:(id)a0 withEvent:(id)a1;
- (void)setAllowedTouchTypes:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_resetInternalState;
- (BOOL)_shouldReceivePress:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldReceiveTouch:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (BOOL)_shouldReceiveEvent:(id)a0;
- (BOOL)_paused;
- (double)_azimuthAngleInView:(id)a0;
- (struct CGVector { double x0; double x1; })_azimuthUnitVectorInView:(id)a0;
- (struct CAPoint3D { double x0; double x1; double x2; })_location3DInView:(id)a0;
- (struct CGPoint { double x0; double x1; })_preciseLocationInView:(id)a0;
- (BOOL)_wantsHoverEventsWhilePointerIsLocked;
- (double)azimuthAngleInView:(id)a0;
- (struct CGVector { double x0; double x1; })azimuthUnitVectorInView:(id)a0;
- (void)setRequiresExclusiveTouchType:(BOOL)a0;

@end
