@class NSDictionary, DTGPUAGXCounterSourceGroup, NSMutableArray;
@protocol GPURawCounterSourceGroup, MTLDevice;

@interface DTGPUCounterProfile_GPURawCountersAPS : DTGPUCounterProfile {
    id<GPURawCounterSourceGroup> _sourceGroup;
    id<MTLDevice> _device;
    DTGPUAGXCounterSourceGroup *_agxSource;
    NSDictionary *_gpuConfig;
    NSMutableArray *_apsSelects;
    NSMutableArray *_rdeSelects;
}

+ (id)create:(id)a0 profile:(unsigned long long)a1;

- (void)stop;
- (void).cxx_destruct;
- (BOOL)prepare;
- (BOOL)_validateAndConfigureRawCounters;
- (id)counterProfileForHost;
- (id)initWithDevice:(id)a0 profile:(unsigned long long)a1;
- (BOOL)isAPS;
- (id)ringBufferCounts;
- (void)sampleAPS:(id /* block */)a0;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;
- (id)sampleSizes;
- (void)setAPSCounterConfig:(id)a0;
- (BOOL)start:(unsigned long long)a0 vendorFeatures:(id)a1;

@end
