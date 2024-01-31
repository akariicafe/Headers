@class NSString, CARSessionStatus, NSObject;
@protocol OS_dispatch_source, SamplingOperation;

@interface AWPearlAttentionSampler : AWAttentionSampler <PearlCameraInterfaceMessaging, CARSessionObserving> {
    id<SamplingOperation> _unitTestOperation;
    id<SamplingOperation> _currentOperation;
    id<SamplingOperation> _finishingOperation;
    CARSessionStatus *_carSessionStatus;
    NSObject<OS_dispatch_source> *_operationStalledTimer;
    unsigned long long _operationCreateTime;
    unsigned long long _lastErrorTime;
    int _displayNotifyToken;
    BOOL _displayState;
    BOOL _smartCoverClosed;
    BOOL _carPlayConnected;
    BOOL _useAVFoundation;
    BOOL _unitTest;
    struct { BOOL AWAttentionSamplerActivateAttentionDetection; BOOL AWAttentionSamplerActivateMotionDetection; } _currentOptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)a0 ignoreDisplayState:(BOOL)a1;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)setCurrentState:(int)a0;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)shouldSample:(BOOL)a0 withDeadline:(unsigned long long)a1 withOptions:(struct { BOOL x0; BOOL x1; })a2;
- (void)updateSamplingDeadline:(unsigned long long)a0 forClient:(id)a1;
- (void)cancelFaceDetect:(id)a0;
- (void)startStalledTimerForOperation:(id)a0;
- (void)cancelStalledTimer;
- (id)unitTestSampler;
- (void)setDisplayStateFromNotification;
- (void)updateSuppressedMaskWithDisplayState:(BOOL)a0 smartCoverClosed:(BOOL)a1 carPlayConnected:(BOOL)a2;
- (void)pearlAttentionSamplerErrorOccurred;
- (void)setDisplayState:(BOOL)a0;
- (id)createNewSamplingOperation;
- (void)updateFaceState:(int)a0;
- (void)faceDetectStalled:(id)a0;
- (void)updateFaceState:(int)a0 withFaceMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; double x7; unsigned long long x8; float x9[16]; } *)a1;
- (int)currentState;
- (void)sessionDidConnect:(id)a0;
- (void)finishingFaceDetect:(id)a0;
- (void)triggerFaceDetectWithDeadline:(unsigned long long)a0 options:(struct { BOOL x0; BOOL x1; })a1;
- (id)initForUnitTest:(BOOL)a0 useAVFoundation:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)cameraActivityNotification:(int)a0 data:(union { struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; unsigned long long x6; double x7; unsigned long long x8; float x9[16]; } x0; int x1; int x2; int x3; } *)a1 forOperation:(id)a2;
- (void)setCarplayStateFromNotification:(BOOL)a0;
- (void)sessionDidDisconnect:(id)a0;

@end
