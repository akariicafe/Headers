@class UITouch, NSString;

@interface _UIGestureStudyMetricsGestureRecognizer : UIGestureRecognizer <_UIGestureStudyParticipating>

@property (nonatomic) double startTimestamp;
@property (nonatomic) struct CGPoint { double x; double y; } originalPosition;
@property (nonatomic) double allowableMovement;
@property (retain, nonatomic) UITouch *primaryTouch;
@property (readonly, nonatomic) long long observedTouchCount;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double movement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_affectedByGesture:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;

@end
