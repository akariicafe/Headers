@class DYFunctionPlayer, DYExperimentOverrideEnable;

@interface DYExperimentResultsGenerator : NSObject {
    struct unique_ptr<GPUTools::RunningStatistics<unsigned long long>, std::default_delete<GPUTools::RunningStatistics<unsigned long long>>> { struct __compressed_pair<GPUTools::RunningStatistics<unsigned long long> *, std::default_delete<GPUTools::RunningStatistics<unsigned long long>>> { void *__value_; } __ptr_; } _frameTimeStatistics;
    unsigned long long _startGlobalTime;
    unsigned long long _frameTimeStart;
    unsigned long long _frameTimeEnd;
    unsigned long long _frameTime;
    unsigned int _iteration;
}

@property (readonly, nonatomic) unsigned int prevFileFunctionIndex;
@property (readonly, nonatomic) DYExperimentOverrideEnable *experiment;
@property (weak, nonatomic) DYFunctionPlayer *functionPlayer;
@property (readonly, nonatomic) BOOL isDone;

- (void)begin;
- (id)init;
- (void)dealloc;
- (id)initWithExperiment:(id)a0;
- (void)end;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)startTiming;
- (void)stopTiming;
- (void)endIteration;
- (void)beginIteration:(unsigned int)a0;
- (void)onFrameEnd;
- (void)onFrameStart;
- (void)onGraphicsFunctionEnd;
- (void)onPlatformFunctionEnd;
- (BOOL)shouldTerminateExperiment;
- (void)terminateExperiment;

@end
