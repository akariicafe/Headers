@class CAMediaTimingFunction, NSString, RCPEventSenderProperties, RPTInteractionOptions;
@protocol RCPEventStreamComposer;

@interface RPTDefaultPointerAndFingerInteroppingComposer : NSProxy <RPTComposer>

@property (readonly, nonatomic) BOOL _usePointer;
@property (nonatomic) struct CGPoint { double x; double y; } _currentlySetAbsolutePosition;
@property (retain, nonatomic) id<RCPEventStreamComposer> forwardingTarget;
@property (readonly, nonatomic) RPTInteractionOptions *interactionOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long touchFrequency;
@property (retain, nonatomic) CAMediaTimingFunction *touchCurveFunction;
@property (readonly, nonatomic) double defaultPressure;
@property (readonly, nonatomic) double defaultRadius;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (nonatomic) double pointerFrequency;
@property (retain, nonatomic) CAMediaTimingFunction *pointerCurveFunction;
@property (nonatomic) BOOL scalePointerPhaseScrollToPixels;

+ (id)composerWrapping:(id)a0 withInteractionOptions:(id)a1;

- (void)pointerOrFingerTapDown:(struct CGPoint { double x0; double x1; })a0;
- (void)forwardInvocation:(id)a0;
- (void)pointerOrFingerMoveToPoint:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)_pointerOrFingerScrollAt:(struct CGPoint { double x0; double x1; })a0 byDelta:(struct CGVector { double x0; double x1; })a1 duration:(double)a2 touchDownAndLift:(BOOL)a3;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)_pointerOrFingerFlickAt:(struct CGPoint { double x0; double x1; })a0 byDelta:(struct CGVector { double x0; double x1; })a1 duration:(double)a2;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initFromWrapping:(id)a0 interactionOptions:(id)a1;
- (void)pointerOrFingerTapUp:(struct CGPoint { double x0; double x1; })a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)pointerOrFingerDragWithStartPoint:(struct CGPoint { double x0; double x1; })a0 mask:(unsigned long long)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 mask:(unsigned long long)a3 duration:(double)a4;
- (void).cxx_destruct;
- (void)pointerMoveToPoint:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)pointerMoveDelta:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1 frequency:(long long)a2;
- (void)pointerOrFingerScrollAt:(struct CGPoint { double x0; double x1; })a0 byDelta:(struct CGVector { double x0; double x1; })a1 duration:(double)a2;
- (void)pointerOrFingerDoubleTap:(struct CGPoint { double x0; double x1; })a0;
- (void)overrideInteractionOptions:(id)a0 withEventActionsBlock:(id /* block */)a1;
- (void)pointerMoveToPointIfApplicable:(struct CGPoint { double x0; double x1; })a0;
- (void)pointerOrFingerTap:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
