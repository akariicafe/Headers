@class NSString;

@interface OZFxPlugTimingAPI : NSObject <FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, FxTimingInfo_Private, PROAPIObject> {
    struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock *__ptr_; struct __shared_weak_count *__cntrl_; } _fxPlugLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)scene;
- (id).cxx_construct;
- (const void *)sceneSettings;
- (void).cxx_destruct;
- (double)startTimeOfImageParm:(unsigned int)a0 forEffect:(id)a1;
- (void)sampleDuration:(union { double x0; struct *x1; } *)a0;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (void)copyFxTime:(union { double x0; struct *x1; })a0 toFxTime:(union { double x0; struct *x1; } *)a1;
- (double)durationForEffect:(id)a0;
- (void)durationFxTime:(union { double x0; struct *x1; } *)a0 ofImageParm:(unsigned int)a1;
- (void)durationFxTimeForEffect:(union { double x0; struct *x1; } *)a0;
- (void)durationFxTimeOfInputAToTransition:(union { double x0; struct *x1; } *)a0;
- (void)durationFxTimeOfInputBToTransition:(union { double x0; struct *x1; } *)a0;
- (void)durationFxTimeOfInputToFilter:(union { double x0; struct *x1; } *)a0;
- (double)durationOfImageParm:(unsigned int)a0 forEffect:(id)a1;
- (double)durationOfInputAToTransition:(id)a0;
- (double)durationOfInputBToTransition:(id)a0;
- (double)durationOfInputToFilter:(id)a0;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)a0 forEffect:(id)a1;
- (unsigned long long)fieldOrderForInputAToTransition:(id)a0;
- (unsigned long long)fieldOrderForInputBToTransition:(id)a0;
- (unsigned long long)fieldOrderForInputToFilter:(id)a0;
- (void)frameDuration:(union { double x0; struct *x1; } *)a0;
- (void)imageFxTime:(union { double x0; struct *x1; } *)a0 forParmId:(unsigned int)a1 fromTimelineTime:(union { double x0; struct *x1; })a2;
- (double)imageTimeForParmId:(unsigned int)a0 forEffect:(id)a1 fromTimelineTime:(double)a2;
- (void)inPointFxTimeOfTimelineForEffect:(union { double x0; struct *x1; } *)a0;
- (double)inPointOfTimelineForEffect:(id)a0;
- (id)initWithPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock *x0; struct __shared_weak_count *x1; })a0;
- (void)inputAFxTime:(union { double x0; struct *x1; } *)a0 fromTimelineTime:(union { double x0; struct *x1; })a1;
- (double)inputATimeForTransition:(id)a0 fromTimelineTime:(double)a1;
- (void)inputBFxTime:(union { double x0; struct *x1; } *)a0 fromTimelineTime:(union { double x0; struct *x1; })a1;
- (double)inputBTimeForTransition:(id)a0 fromTimelineTime:(double)a1;
- (void)inputFxTime:(union { double x0; struct *x1; } *)a0 fromTimelineTime:(union { double x0; struct *x1; })a1;
- (double)inputTimeForFilter:(id)a0 fromTimelineTime:(double)a1;
- (union { double x0; struct *x1; })invalidTime;
- (void)outPointFxTimeOfTimelineForEffect:(union { double x0; struct *x1; } *)a0;
- (double)outPointOfTimelineForEffect:(id)a0;
- (void)startFxTime:(union { double x0; struct *x1; } *)a0 ofImageParam:(unsigned int)a1;
- (void)startFxTimeForEffect:(union { double x0; struct *x1; } *)a0;
- (void)startFxTimeOfInputAToTransition:(union { double x0; struct *x1; } *)a0;
- (void)startFxTimeOfInputBToTransition:(union { double x0; struct *x1; } *)a0;
- (void)startFxTimeOfInputToFilter:(union { double x0; struct *x1; } *)a0;
- (double)startTimeForEffect:(id)a0;
- (double)startTimeOfInputAToTransition:(id)a0;
- (double)startTimeOfInputBToTransition:(id)a0;
- (double)startTimeOfInputToFilter:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timeOffsetForImageParameter:(unsigned int)a0;
- (double)timelineDurationForEffect:(id)a0;
- (unsigned long long)timelineFpsDenominatorForEffect:(id)a0;
- (unsigned long long)timelineFpsNumeratorForEffect:(id)a0;
- (void)timelineFxTime:(union { double x0; struct *x1; } *)a0 fromImageTime:(union { double x0; struct *x1; })a1 forParmId:(unsigned int)a2;
- (void)timelineFxTime:(union { double x0; struct *x1; } *)a0 fromInputATime:(union { double x0; struct *x1; })a1;
- (void)timelineFxTime:(union { double x0; struct *x1; } *)a0 fromInputBTime:(union { double x0; struct *x1; })a1;
- (void)timelineFxTime:(union { double x0; struct *x1; } *)a0 fromInputTime:(union { double x0; struct *x1; })a1;
- (double)timelineTimeFromImageTime:(double)a0 forParmId:(unsigned int)a1 forEffect:(id)a2;
- (double)timelineTimeFromInputATime:(double)a0 forTransition:(id)a1;
- (double)timelineTimeFromInputBTime:(double)a0 forTransition:(id)a1;
- (double)timelineTimeFromInputTime:(double)a0 forFilter:(id)a1;
- (double)transitionTimeFractionAtTime:(double)a0;
- (union { double x0; struct *x1; })zeroTime;

@end
