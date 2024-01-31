@class NSString, _PASBloomFilter;

@interface PPSmallBloomFilter : NSObject <MLCustomModel> {
    _PASBloomFilter *_bloomFilter;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSString *_inputName;
    NSString *_outputName;
}

- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
