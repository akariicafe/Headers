@class VCPCNNModelEspresso;

@interface VCPCNNGazeAnalysis : NSObject {
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

+ (id)sharedModel:(id)a0;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)detectEyeOpennessForFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inBuffer:(struct __CVBuffer { } *)a1 eyeOpenness:(BOOL *)a2;

@end
