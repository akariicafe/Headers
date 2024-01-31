@protocol GPURawCounterSourceGroup, GPURawCounterSource;

@interface MPSGPURawCounters : MPSCounters {
    id<GPURawCounterSourceGroup> _sourceGroup;
    id<GPURawCounterSource> _source;
    unsigned long long _sourceSampleMarker;
    void *_encoderSamples;
    unsigned long long _maxFrequency;
    unsigned long long _maxPState;
    BOOL _autoTuning;
    BOOL _pStatesInitialized;
}

- (void)dealloc;
- (void)startSampling;
- (void)disableCounters;
- (void)aggregatePerfSamples:(id)a0 commandBuffer:(id)a1;
- (int)countEncodersInWorkload:(id)a0 withExtraRequestedCounter:(id)a1 forStatistics:(id)a2 userSpecifiedIterations:(BOOL)a3 includingBlitSamples:(BOOL)a4;
- (int)enableCountersIncludingBlitSamples:(BOOL)a0;
- (id)initWithCommandQueue:(id)a0 addQeueuPerfSampleHandler:(BOOL)a1;
- (int)requestCountersWithExtraRequestedCounter:(id)a0;
- (int)requestCountersWithExtraRequestedCounter:(id)a0 fillStats:(id)a1;
- (void)setPStateAndFrequency;

@end
