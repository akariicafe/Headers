@class DTGPUAPSDataContainer;

@interface DTGPUCounterProfile_GPURawCountersImport : DTGPUCounterProfile {
    DTGPUAPSDataContainer *_container;
    BOOL _sampled;
}

+ (id)create:(id)a0;

- (void)stop;
- (void).cxx_destruct;
- (BOOL)prepare;
- (BOOL)_validateAndConfigureRawCounters;
- (id)counterProfileForHost;
- (id)initWithImportAPSDataPath:(id)a0;
- (BOOL)isAPS;
- (id)ringBufferCounts;
- (void)sampleAPS:(id /* block */)a0;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;
- (id)sampleSizes;
- (BOOL)start:(unsigned long long)a0 vendorFeatures:(id)a1;

@end
