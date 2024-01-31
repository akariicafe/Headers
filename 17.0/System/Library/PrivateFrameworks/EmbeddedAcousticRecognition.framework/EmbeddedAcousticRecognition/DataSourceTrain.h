@class NSString, NoiseSampler;

@interface DataSourceTrain : NSObject <ETDataProvider> {
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _contextData;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _targetData;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _maskData;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _noiseData;
    unsigned long long _sequenceLength;
    unsigned long long _numBatches;
    unsigned long long _noiseSize;
    unsigned long long _batchSize;
    NoiseSampler *_sampler;
    NSString *_contextKey;
    NSString *_targetKey;
    NSString *_maskKey;
    NSString *_noiseKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataPointAtIndex:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)numberOfDataPoints;
- (id)initWithNumDataPoints:(unsigned long long)a0 sequenceLength:(unsigned long long)a1 noiseSize:(unsigned long long)a2 batchSize:(unsigned long long)a3 vocabSize:(unsigned long long)a4 contextKey:(id)a5 targetKey:(id)a6 maskKey:(id)a7 noiseKey:(id)a8;
- (void)setNumBatches:(int)a0;
- (void)setVectorsWithProcessor:(id)a0;

@end
