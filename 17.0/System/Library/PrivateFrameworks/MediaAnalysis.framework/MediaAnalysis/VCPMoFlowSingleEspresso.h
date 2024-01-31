@class NSArray, VCPCNNModelEspresso, NSURL, NSString;

@interface VCPMoFlowSingleEspresso : VCPImageMotionFlowAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    NSURL *_netFileUrl;
    NSArray *_inputNames;
    struct vector<float *, std::allocator<float *>> { float **__begin_; float **__end_; struct __compressed_pair<float **, std::allocator<float *>> { float **__value_; } __end_cap_; } _inputsData;
    NSString *_resConfig;
    float *_flow;
    BOOL _forceCPU;
    BOOL _sharedModel;
    BOOL _flushModel;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

+ (id)sharedModel:(id)a0 inputNames:(id)a1;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzeImages:(struct __CVBuffer { } *)a0 secondImage:(struct __CVBuffer { } *)a1 cancel:(id /* block */)a2;
- (int)configForAspectRatio:(id)a0;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1 withChannels:(int)a2;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3;
- (int)flowScalingTo:(struct __CVBuffer { } *)a0 flowBufferY:(struct __CVBuffer { } *)a1 scalerX:(float)a2 scalerY:(float)a3;
- (int)flowScalingTo:(struct __CVBuffer { } *)a0 scalerX:(float)a1 scalerY:(float)a2;
- (int)getFlowToBuffer:(struct __CVBuffer { } *)a0;
- (float *)getFlowWithHeight:(int *)a0 andWidth:(int *)a1;
- (int)prepareModel;
- (int)prepareWithLightweightOption:(BOOL)a0 aspectRatio:(id)a1 forceCPU:(BOOL)a2 sharedModel:(BOOL)a3 flushModel:(BOOL)a4;
- (int)reInitModel;
- (int)updateModelForAspectRatio:(id)a0 computationAccuracy:(unsigned int)a1;

@end
