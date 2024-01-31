@class NSString, ABPKMLModelConfiguration2D, NSArray, ABPKMLNetworkV2, ABPK2DDetectionConfiguration, NSMutableDictionary;

@interface ABPK2DDetection : NSObject {
    ABPK2DDetectionConfiguration *_config2D;
    ABPKMLModelConfiguration2D *_mlConfig;
    NSString *_previous_network_configuration;
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _network;
    NSArray *_inputTensorNames;
    NSArray *_outputTensorNames;
    long long _deviceOrientation;
    struct networkparams_t { struct inputparams_t { struct { float bias_r; float bias_g; float bias_b; float scale; BOOL network_wants_bgr; } preprocessor; struct CGSize { double width; double height; } resolution; } input; } _parameters;
    struct networkvariables_t { struct inputvariables_t { struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } imageTensor; } input; struct outputvariables_t { struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } heatmapsTensor; } output; } _variables;
    NSString *_netSubPath;
    NSString *_netPath;
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> { struct __CVBuffer **__begin_; struct __CVBuffer **__end_; struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> { struct __CVBuffer **__value_; } __end_cap_; } _outputBuffers;
    struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *__begin_; struct *__end_; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *__value_; } __end_cap_; } _espressoOutputTensors;
    struct vector<__CVPixelBufferPool *, std::allocator<__CVPixelBufferPool *>> { struct __CVPixelBufferPool **__begin_; struct __CVPixelBufferPool **__end_; struct __compressed_pair<__CVPixelBufferPool **, std::allocator<__CVPixelBufferPool *>> { struct __CVPixelBufferPool **__value_; } __end_cap_; } _espressoOutputBufferPools;
    ABPKMLNetworkV2 *_networkV2;
    NSMutableDictionary *_inputBufferDict;
    NSMutableDictionary *_outputBufferDict;
    BOOL _useEspressoV2;
}

@property (nonatomic) BOOL useEspressoZeroCopyOutput;

+ (struct CGSize { double x0; double x1; })inputDimensionsForDeviceOrientation:(id)a0;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_bindOutputTensor;
- (void)_endLoadingMLModelSignpost;
- (void)_startLoadingMLModelSignpost;
- (void)changeEspressoConfig:(id)a0;
- (id)initWithNetworkConfig:(id)a0;
- (id)runWithMLImage:(id)a0 originalImage:(id)a1 abpkOrientation:(long long)a2 atTimestamp:(double)a3 rotationOfResultTensor:(long long)a4;
- (BOOL)initMLNetwork;
- (id)_createResultDataFromImageDataForNeuralNetwork:(id)a0 originalImageData:(id)a1 outputPixelBuffer:(struct __CVBuffer **)a2 numberOfOutputTensors:(unsigned long long)a3 rotationOfResultTensor:(long long)a4;
- (void)_endEvaluateBodyPoseForImageSignpostWithTimestamp:(double)a0;
- (void)_startEvaluateBodyPoseForImageSignpostWithTimestamp:(double)a0;
- (id)createException:(void *)a0 forNetwork:(id)a1;
- (id)runWithImage:(struct __CVBuffer { } *)a0 abpkOrientation:(long long)a1 atTimestamp:(double)a2 rotationOfResultTensor:(long long)a3;
- (id)runWithImageDataForNeuralNetwork:(id)a0 originalImageData:(id)a1 abpkOrientation:(long long)a2 atTimestamp:(double)a3 rotationOfResultTensor:(long long)a4;

@end
