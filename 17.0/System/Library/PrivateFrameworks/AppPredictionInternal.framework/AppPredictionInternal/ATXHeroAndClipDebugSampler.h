@class NSArray;

@interface ATXHeroAndClipDebugSampler : NSObject <ATXHeroAndClipEventSamplerProtocol> {
    NSArray *_indicesToSample;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSampleIndices:(id)a0;
- (id)sampleEvents:(id)a0 numToSample:(unsigned long long)a1;

@end
