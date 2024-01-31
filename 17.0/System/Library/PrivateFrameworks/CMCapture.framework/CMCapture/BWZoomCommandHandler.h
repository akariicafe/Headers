@class BWZoomDelayBuffer, NSArray;
@protocol BWZoomCompletionDelegate;

@interface BWZoomCommandHandler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _zoomLock;
    float _appliedZoomFactor;
    float _lastRequestedZoomFactor;
    BOOL _zoomFactorServiced;
    BWZoomDelayBuffer *_zoomDelayBuffer;
    BOOL _clientCanCompensateForDelay;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFramePTSes[2];
    int _lastFrameCaptureID;
    long long _timeForLastRequestedZoomFactor;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _rampStartTime;
    float _rampAcceleration;
    float _rampStartFactor;
    float _rampStartVelocity;
    float _rampTargetFactor;
    float _rampTargetVelocity;
    int _rampCommandID;
    BOOL _rampActive;
    int _rampType;
    int _rampTuning;
    double _rampDuration;
    float _rampSnapFraction;
    float _rampCurrentVelocity;
    float _rampZoomFactorOfInterest;
    NSArray *_fudgedZoomRanges;
    float _maxZoomFactorToApplyFudge;
    float _minZoomFactorToApplyFudge;
    float _maxFudgedZoomFactor;
    float _minFudgedZoomFactor;
    float _springRampTension;
    float _springRampFriction;
    float _earlySwitchOverScaleFactorForZoomIn;
    float _allowableMinimumDigitalZoomFactorDuringZoomOut;
    int _springRampStartFrameDelayAt30fps;
}

@property float requestedZoomFactor;
@property (readonly) float requestedZoomFactorWithoutFudge;
@property (readonly) float appliedZoomFactor;
@property (readonly) float appliedZoomFactorWithoutFudge;
@property (readonly) float rampTargetZoomFactor;
@property (readonly) float earlySwitchOverScaleFactorForZoomIn;
@property (readonly) float allowableMinimumDigitalZoomFactorDuringZoomOut;
@property (readonly) int rampTuning;
@property (readonly) float rampZoomFactorOfInterest;
@property (nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegate;
@property (nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegateForStereoAudio;

+ (void)initialize;

- (id)init;
- (void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)a0;
- (void)reset;
- (void)dealloc;
- (float)predictRampZoomFactorAfterNumberOfFrames:(int)a0 settingZoomFactorOfInterest:(float)a1;
- (void)setFudgedZoomRanges:(id)a0;
- (void)rampToVideoZoomFactor:(float)a0 usingSpringWithTension:(float)a1 friction:(float)a2 snapFraction:(float)a3 rampTuning:(int)a4 earlySwitchOverScaleFactorForZoomIn:(float)a5 allowableMinimumDigitalZoomFactorDuringZoomOut:(float)a6 rampStartFrameDelayAt30fps:(int)a7 commandID:(int)a8;
- (float)applyFudgeToZoomFactor:(float)a0;
- (long long)timeForLastRequestedZoomFactor;
- (float)updateZoomModelForNextFrameWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 captureID:(int)a1;
- (void)resetZoomFactorOfInterest;
- (void)rampToVideoZoomFactor:(float)a0 withRampType:(int)a1 rate:(float)a2 duration:(double)a3 snapToTargetZoomFactorWithinRampFraction:(float)a4 rampTuning:(int)a5 earlySwitchOverScaleFactorForZoomIn:(float)a6 allowableMinimumDigitalZoomFactorDuringZoomOut:(float)a7 commandID:(int)a8;
- (void)setTypicalISPZoomDelay:(unsigned int)a0 clientCanCompensateForDelay:(BOOL)a1;
- (float)updateZoomModelAndAppliedZoomFactorForNextFrameWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 captureID:(int)a1 delayedISPAppliedZoomFactor:(float)a2;

@end
