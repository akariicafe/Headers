@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface EspressoFDOverfeatNetwork : NSObject {
    struct vector<std::shared_ptr<Espresso::net>, std::allocator<std::shared_ptr<Espresso::net>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<Espresso::net> *, std::allocator<std::shared_ptr<Espresso::net>>> { void *__value_; } __end_cap_; } gpu_nets;
    struct vector<std::shared_ptr<Espresso::net>, std::allocator<std::shared_ptr<Espresso::net>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<Espresso::net> *, std::allocator<std::shared_ptr<Espresso::net>>> { void *__value_; } __end_cap_; } ecpu_nets;
    struct vector<std::pair<unsigned long long, unsigned long long>, std::allocator<std::pair<unsigned long long, unsigned long long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned long long, unsigned long long> *, std::allocator<std::pair<unsigned long long, unsigned long long>>> { void *__value_; } __end_cap_; } net_scales;
    struct vector<std::pair<unsigned long long, unsigned long long>, std::allocator<std::pair<unsigned long long, unsigned long long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<unsigned long long, unsigned long long> *, std::allocator<std::pair<unsigned long long, unsigned long long>>> { void *__value_; } __end_cap_; } full_scales;
    struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } scalesc;
    struct vector<std::shared_ptr<Espresso::fast_pyramid_resizer>, std::allocator<std::shared_ptr<Espresso::fast_pyramid_resizer>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<Espresso::fast_pyramid_resizer> *, std::allocator<std::shared_ptr<Espresso::fast_pyramid_resizer>>> { void *__value_; } __end_cap_; } resizers_for_batching;
    int n_resizers_for_batching;
    struct vector<std::shared_ptr<Espresso::blob<float, 3>>, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<Espresso::blob<float, 3>> *, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> { void *__value_; } __end_cap_; } probBlobs;
    struct vector<std::shared_ptr<Espresso::blob<float, 3>>, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> { void *__begin_; void *__end_; struct __compressed_pair<std::shared_ptr<Espresso::blob<float, 3>> *, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> { void *__value_; } __end_cap_; } boxBlobs;
    NSMutableDictionary *_errorForLayers;
    struct pair<unsigned long long, unsigned long long> { unsigned long long first; unsigned long long second; } cropDims;
    struct CGColorSpace { } *colorSpace;
    struct net_strides_configuration { int num_layer; struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } kernel_size; struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } stride; struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } pad; } strideConf;
    int retile_stride;
    int retile_tile_sz;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; struct __compressed_pair<int *, std::allocator<int>> { int *__value_; } __end_cap_; } retile_n_outputs_v;
    int tile_w_1;
    int tile_h_1;
    NSObject<OS_dispatch_queue> *cpu_queue_0;
    NSObject<OS_dispatch_semaphore> *cpu_semaphore;
}

@property (retain, nonatomic) NSString *basename;
@property (retain, nonatomic) NSString *weights;
@property (nonatomic) int scaleConfig;
@property (nonatomic) int mode;
@property (nonatomic) int cpin;
@property (nonatomic) struct shared_ptr<Espresso::abstract_context> { struct abstract_context *__ptr_; struct __shared_weak_count *__cntrl_; } context_metal;
@property (nonatomic) struct shared_ptr<Espresso::abstract_context> { struct abstract_context *__ptr_; struct __shared_weak_count *__cntrl_; } context_cpu;
@property (nonatomic) BOOL useGPUScaler;
@property (nonatomic) int scalingMode;
@property (nonatomic) float maxScale;
@property (nonatomic) int forceMaxNScales;

- (id)init;
- (void)reset;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer *x0; struct __shared_weak_count *x1; })resizerAtIndex:(int)a0;
- (void)processPyramid:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer *x0; struct __shared_weak_count *x1; })a0;
- (void)autoResizeForAspectRatio:(float)a0 useLowPriorityMode:(BOOL)a1 gpuPriority:(unsigned int)a2;
- (void)autoSetupNetBaseName:(id)a0 weights:(id)a1 scaleConfig:(int)a2 setupMode:(int)a3 computePath:(int)a4 autoAspectRatio:(float)a5 forceReset:(BOOL)a6 useLowPriorityMode:(BOOL)a7 gpuPriority:(unsigned int)a8;
- (struct shared_ptr<Espresso::blob<float, 3>> { void *x0; struct __shared_weak_count *x1; })boxBlobForScale:(int)a0;
- (struct shared_ptr<Espresso::net> { struct net *x0; struct __shared_weak_count *x1; })cpu_net:(int)a0;
- (int)default_retile_outputs;
- (id)errorForLayers;
- (void)forward_cpu_network_at_index:(int)a0 pyr:(const void *)a1;
- (void)generatePyramid:(const void *)a0 tex:(id)a1;
- (int)getNumScales;
- (double)getScale:(int)a0;
- (struct shared_ptr<Espresso::net> { struct net *x0; struct __shared_weak_count *x1; })gpu_net:(int)a0;
- (BOOL)needRetiling:(int)a0;
- (struct shared_ptr<Espresso::blob<float, 3>> { void *x0; struct __shared_weak_count *x1; })probBlobForScale:(int)a0;
- (void)processBlob:(const void *)a0 tex:(id)a1;
- (void)processBlobNoRotation:(const void *)a0 tex:(id)a1 doBGRA2RGBA:(BOOL)a2;
- (void)processPyramid:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer *x0; struct __shared_weak_count *x1; })a0 gpu_resizer:(id)a1;
- (void)processVimageNoRotation:(const struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 tex:(id)a1 doBGRA2RGBA:(BOOL)a2;
- (int)resizerCount;
- (void)retile_and_forward_espresso_gpu_network_at_index:(int)a0 net:(const void *)a1 pyr:(const void *)a2;
- (void)retile_and_forward_espresso_network_at_index:(int)a0 net:(const void *)a1 pyr:(const void *)a2;
- (void)retryLoadingCaffeNet:(void *)a0 name:(id)a1 weights:(id)a2 context:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context *x0; struct __shared_weak_count *x1; })a3 cp:(int)a4;
- (void)setContextCpu:(id)a0;
- (void)setContextMetal:(id)a0;
- (void)setup_retile;
- (void)storeDataForPruning:(struct shared_ptr<Espresso::blob<float, 4>> { void *x0; struct __shared_weak_count *x1; })a0 prob:(float)a1;
- (struct net_strides_configuration { int x0; struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x1; struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x2; struct vector<int, std::allocator<int>> { int *x0; int *x1; struct __compressed_pair<int *, std::allocator<int>> { int *x0; } x2; } x3; })strideConfiguration;
- (void)wipeLayersMemory;

@end
