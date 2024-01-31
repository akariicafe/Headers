@class NSString, HMIVideoFrameSampler, MovingAverage;
@protocol HMIVideoFrameAnalyzerDelegate, HMICameraVideoFrameAnalyzer;

@interface HMIVideoFrameAnalyzer : HMIVideoAnalyzerProcessingNode <HMIVideoFrameSamplerDelegate, HMFLogging> {
    MovingAverage *_analysisTime;
}

@property (readonly) id<HMICameraVideoFrameAnalyzer> cameraVideoFrameAnalyzer;
@property (readonly) HMIVideoFrameSampler *frameSampler;
@property (weak) id<HMIVideoFrameAnalyzerDelegate> delegate;
@property (readonly) double averageAnalysisTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)flush;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)frameSampler:(id)a0 didSampleFrame:(struct opaqueCMSampleBuffer { } *)a1;
- (BOOL)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 background:(struct opaqueCMSampleBuffer { } *)a1 motionDetections:(id)a2 tracks:(id)a3;

@end
