@class CAMediaTimingFunction, RCPEventSenderProperties, NSString, RCPEventEnvironment, NSMutableArray;

@interface RCPPointerTrackingChildEventStream : NSObject <RCPChildEventStream> {
    NSMutableArray *_processingEventBuffer;
}

@property (nonatomic) struct CGPoint { double x; double y; } currentPointerLocation;
@property (nonatomic) double frequency;
@property (retain, nonatomic) CAMediaTimingFunction *pointerCurveFunction;
@property (nonatomic) double currentTimeOffset;
@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })orientedNormalPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)advanceTime:(double)a0;
- (void)_addIOHIDEventToProcessingBuffer:(struct __IOHIDEvent { } *)a0;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 duration:(double)a1;
- (void)movePointerByDelta:(struct CGVector { double x0; double x1; })a0;
- (long long)currentInterfaceOrientation;
- (id)finalizeEventStream;
- (unsigned long long)_currentMachTime;
- (void).cxx_destruct;
- (struct CGVector { double x0; double x1; })_deltaToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)moveByDelta:(struct CGVector { double x0; double x1; })a0 duration:(double)a1;
- (struct CGPoint { double x0; double x1; })orientedDestinationPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithCurrentPointerLocation:(struct CGPoint { double x0; double x1; })a0;

@end
