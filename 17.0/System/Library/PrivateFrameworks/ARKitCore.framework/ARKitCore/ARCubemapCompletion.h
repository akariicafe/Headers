@class ARGPUCubemapConverter, ARGPUSphericalBlur;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface ARCubemapCompletion : NSObject {
    void *_espresso_ctx;
    void *_espresso_plan;
    struct { void *plan; int network_index; } _espresso_net;
    struct { float bias_r; float bias_g; float bias_b; float scale; BOOL network_wants_bgr; } _espresso_processing_params;
    BOOL _espressoInitialized;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _randomNumbers;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _vImageBuffer;
    ARGPUCubemapConverter *_cubemapConverter;
    ARGPUSphericalBlur *_sphericalBlur;
    id<MTLTexture> _roughness;
    BOOL _outdoorScene;
    double _bias_exposure_threshold;
    int _bias_mask;
    float _r_avg;
    float _g_avg;
    float _b_avg;
    float _alpha_threshold;
    unsigned long long _gan_width;
    unsigned long long _gan_height;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _queue;
    id<MTLComputePipelineState> _combineBuffersToHDR;
    BOOL _use_model_pre_A11;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _srgbToLogLUT_pre_A11;
    float _r_bias_pre_A11;
    float _g_bias_pre_A11;
    float _b_bias_pre_A11;
    int _bias_height_pre_A11;
}

@property (nonatomic) BOOL generateHDROutput;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })toVImageBuffer:(id)a0;
- (id)completeCubemap:(id)a0 cameraExposure:(double)a1 rotationWorldFromCube:(struct { void /* unknown type, empty encoding */ x0[3]; })a2;
- (id)completeLatLongImage:(id)a0;
- (id)generateSeamSmoothingTexture;
- (id)grayCubemapOfSize:(unsigned long long)a0;
- (unsigned char)srgbToLog:(unsigned char)a0;
- (id)toTexture:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0;

@end
