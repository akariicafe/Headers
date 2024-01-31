@class HMIHTMLReport, NSString, HMIVideoFrameTrackerFrameCandidate, HMIBackgroundEstimator, HMIMotionDetector, NSMutableArray;
@protocol HMIVideoFrameTrackerDelegate;

@interface HMIVideoFrameTracker : HMIVideoAnalyzerProcessingNode <HMFLogging>

@property (readonly) HMIMotionDetector *motionDetector;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } expirationInterval;
@property (readonly) unsigned long long maxCandidates;
@property unsigned long long numCandidates;
@property (retain) HMIVideoFrameTrackerFrameCandidate *candidate;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } trackInterval;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } trackAnalysisPTS;
@property (retain) HMIBackgroundEstimator *backgroundEstimator;
@property struct opaqueCMSampleBuffer { } *background;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } approximationInterval;
@property (readonly) struct __CFArray { } *resizedSampleBuffers;
@property (readonly) HMIHTMLReport *report;
@property (readonly) NSMutableArray *reportBuffer;
@property (weak) id<HMIVideoFrameTrackerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (struct __CVBuffer { } *)resizePixelBuffer:(struct __CVBuffer { } *)a0;

- (void)dealloc;
- (void)flush;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_addCandidateForTarget:(struct opaqueCMSampleBuffer { } *)a0 motionScore:(float)a1 motionDetections:(id)a2 tracks:(id)a3;
- (void)_appendTarget:(struct opaqueCMSampleBuffer { } *)a0 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 motionDetections:(id)a2;
- (struct opaqueCMSampleBuffer { } *)_backgroundAtTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_drainCandidateThatExpiredBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_drainResizedBuffersThatExpiredBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_motionDetectionsFromTarget:(struct opaqueCMSampleBuffer { } *)a0 reference:(struct opaqueCMSampleBuffer { } *)a1 dynamicConfiguration:(id)a2 motionScore:(float *)a3;
- (void)_synthesizeMotionDetectionWithTarget:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_tracksFromTarget:(struct opaqueCMSampleBuffer { } *)a0 reference:(struct opaqueCMSampleBuffer { } *)a1 background:(struct opaqueCMSampleBuffer { } *)a2 dynamicConfiguration:(id)a3 motionDetections:(id)a4;
- (void)_visualizeFrames:(id)a0 targetEvents:(id)a1 backgroundEvents:(id)a2 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)_visualizeTargetEvents:(id)a0 backgroundEvents:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 targetTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)_visualizeTargetsThatExpiredBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)handleFrameAnalyzerResult:(id)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 reference:(struct opaqueCMSampleBuffer { } *)a1;
- (struct opaqueCMSampleBuffer { } *)prepareSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
