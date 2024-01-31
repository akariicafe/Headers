@class UPLoadedModelConfiguration;

@interface UPCalibrationModel : NSObject

@property (readonly, nonatomic) UPLoadedModelConfiguration *_loadedModelConfiguration;

+ (id)modelWithLoadedModelConfiguration:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (double)forwardWithSpanLabels:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; })a0 embeddings:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; })a1 utterance:(id)a2;
- (id)initWithLoadedModelConfiguration:(id)a0;
- (id)scoreFromQuery:(id)a0 preprocessorOutput:(id)a1 error:(id *)a2;

@end
