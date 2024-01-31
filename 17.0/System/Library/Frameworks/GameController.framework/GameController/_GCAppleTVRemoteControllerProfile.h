@class GCControllerDirectionPad, NSString, NSDate;

@interface _GCAppleTVRemoteControllerProfile : GCMicroGamepad <DigitizerValueChangedDelegate, CoalescableMicroGamepad> {
    double _windowX;
    double _windowY;
    double _windowSize;
    double _deadzoneSize;
    double _windowBufferSize[4];
    unsigned int _digitizerTouchState;
    unsigned int _sampleCount;
    unsigned int _accumInputSampleCount;
    double _prevLogTime;
    int _orientation;
    int _candidateOrientation;
    NSDate *_candidateOrientationTimestamp;
}

@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long owner;
@property (nonatomic) long long deviceType;

- (id)initWithController:(id)a0;
- (unsigned int)sampleRate;
- (void).cxx_destruct;
- (id)name;
- (void)setAllowsRotation:(BOOL)a0;
- (void)initCommon:(id)a0;
- (void)digitizerTouchEvent:(id)a0 x:(double)a1 y:(double)a2 timestamp:(unsigned long long)a3 forceSkipDpadRotation:(BOOL)a4;
- (void)digitizerTouchUp:(id)a0 timestamp:(unsigned long long)a1 forceSkipDpadRotation:(BOOL)a2;
- (void)getPositionInSlidingWindowForRealX:(double)a0 realY:(double)a1 outXInWindow:(double *)a2 outYInWindow:(double *)a3;
- (void)handleReport:(unsigned int)a0 data:(id)a1;
- (BOOL)ownershipClaimingElementsZero;
- (void)processOrientationData:(id)a0;
- (void)setDpad:(id)a0 x:(double)a1 y:(double)a2 timestamp:(unsigned long long)a3 forceSkipDpadRotation:(BOOL)a4;

@end
