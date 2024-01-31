@class NSArray, NSString, NSMutableDictionary, DTGPUAGXCounterSourceGroup;
@protocol GPURawCounterSource, MTLDevice, GPURawCounterSourceGroup;

@interface DTGPUCounterProfile_GPURawCounters : DTGPUCounterProfile {
    unsigned long long _currentIORegSamplingInterval;
    struct EMA<unsigned long long> { unsigned long long currentValue; double coefficient; } _deviceUtilization;
    id<MTLDevice> _device;
    id<GPURawCounterSourceGroup> _sourceGroup;
    id<GPURawCounterSource> _source;
    DTGPUAGXCounterSourceGroup *_agxSource;
    NSArray *_rawCounters;
    NSString *_sourceName;
    unsigned long long _startTime;
    unsigned long long _firstGpuTime;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timeBaseInfo;
    long long _gpuTimeIndex;
    unsigned int _vendor;
    NSMutableDictionary *_gpuConfigurationVariables;
}

+ (id)create:(id)a0 profile:(unsigned long long)a1;
+ (id)_sourceNameFromProfile:(unsigned long long)a0;
+ (id)_supportedProfileNameFromEnum:(unsigned long long)a0 vendor:(unsigned int)a1;
+ (unsigned int)vendorFromDevice:(id)a0;

- (void)stop;
- (void).cxx_destruct;
- (BOOL)prepare;
- (void)_releaseCounterSource;
- (void)_releaseDataSource;
- (BOOL)_validateAndConfigureRawCounters;
- (id)counterProfileForHost;
- (id)initWithDevice:(id)a0 profile:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 sourceName:(id)a1 profile:(unsigned long long)a2;
- (id)initWithLimitersProfile:(id)a0;
- (id)ringBufferCounts;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;
- (id)sampleSizes;
- (BOOL)start:(unsigned long long)a0 vendorFeatures:(id)a1;

@end
