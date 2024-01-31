@class NSObject, NSMutableArray, AWSampleLogger;
@protocol OS_dispatch_queue;

@interface AWAttentionSampler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
}

@property (retain, nonatomic) AWSampleLogger *sampleLogger;
@property (copy) id /* block */ stateChangedCallback;
@property (nonatomic) int currentState;
@property (nonatomic) unsigned long long samplingSuppressedMask;
@property (nonatomic) unsigned long long lastTriggerTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime;
@property (nonatomic) unsigned long long lastPollTimeoutTime;
@property (nonatomic) BOOL lastFaceMetadataValid;
@property (nonatomic) double lastPitch;
@property (nonatomic) double lastYaw;
@property (nonatomic) double lastRoll;
@property (nonatomic) unsigned long long lastOrientation;
@property (nonatomic) double lastDistance;
@property (nonatomic) unsigned long long lastFaceState;
@property (nonatomic) double lastFrameNumber;
@property (nonatomic) unsigned long long lastMetadataType;
@property (readonly, nonatomic) BOOL unitTestSampling;
@property (retain, nonatomic) NSMutableArray *lastMotionData;

- (void)startDeadlineComputation;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)a0 ignoreDisplayState:(BOOL)a1;
- (void)setSmartCoverClosed:(BOOL)a0;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)setUnitTestMode;
- (void)shouldSample:(BOOL)a0 withDeadline:(unsigned long long)a1 withOptions:(struct { BOOL x0; BOOL x1; })a2;
- (void)updateSamplingDeadline:(unsigned long long)a0 forClient:(id)a1;
- (void)finishDeadlineComputationWithOptions:(struct { BOOL x0; BOOL x1; })a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;

@end
