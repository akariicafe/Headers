@class CAMediaTimingFunction, RCPEventSenderProperties, NSString, RCPEvent, RCPEventEnvironment, NSMutableArray;

@interface RCPScrollEventStream : NSObject <RCPChildEventStream> {
    NSMutableArray *_events;
    unsigned int _scrollOptions;
    RCPEvent *_cachedFirstEvent;
}

@property (nonatomic) double frequency;
@property (nonatomic) double deltaToPixelsScaleFactor;
@property (retain, nonatomic) CAMediaTimingFunction *pointerCurveFunction;
@property (retain, nonatomic) RCPEventEnvironment *environment;
@property (nonatomic) double currentTimeOffset;
@property (retain, nonatomic) RCPEventSenderProperties *senderProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)advanceTime:(double)a0;
- (id)finalizeEventStream;
- (void).cxx_destruct;
- (id)_eventWithDelta:(struct CGVector { double x0; double x1; })a0 phase:(unsigned short)a1;
- (void)_updateAmplitudeBy:(struct CGVector { double x0; double x1; })a0;
- (void)advanceByDelta:(struct CGVector { double x0; double x1; })a0 duration:(double)a1;

@end
