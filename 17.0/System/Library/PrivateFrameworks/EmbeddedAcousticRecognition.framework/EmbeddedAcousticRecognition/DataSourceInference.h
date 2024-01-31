@class NSString;

@interface DataSourceInference : NSObject <ETDataProvider> {
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _contextData;
    struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } _targetData;
    unsigned long long _sequenceLength;
    NSString *_contextKey;
    NSString *_targetKey;
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
- (id)initWithLength:(unsigned long long)a0 contextKey:(id)a1 targetKey:(id)a2;
- (void)setVectorsWithProcessor:(id)a0;

@end
