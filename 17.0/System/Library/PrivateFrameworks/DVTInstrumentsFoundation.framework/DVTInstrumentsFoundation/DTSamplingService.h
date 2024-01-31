@class NSString;

@interface DTSamplingService : DTXService <DTSamplingServiceAuthorizedAPI> {
    struct sampling_context_t { } *_context;
    BOOL _doCollectData;
    unsigned long long _samplingRate;
    unsigned long long _outputRate;
    unsigned long long _outputRateDelta;
    unsigned long long *_backtraceBuffer;
    unsigned long long _backtraceBufferSize;
    unsigned long long _backtraceBufferUsedSize;
    unsigned int _task;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;

- (void)setSamplingRate:(id)a0;
- (void)dealloc;
- (void)stopSampling;
- (void)_outputData;
- (id)initWithChannel:(id)a0;
- (void)startSampling;
- (void)_allocateBuffer;
- (void)addSampleWithTimeInfo:(struct __CFDictionary { } *)a0 useZeroDelta:(BOOL)a1;
- (void)collectData;
- (void)setOutputRate:(id)a0;
- (void)setTargetPid:(id)a0;

@end
