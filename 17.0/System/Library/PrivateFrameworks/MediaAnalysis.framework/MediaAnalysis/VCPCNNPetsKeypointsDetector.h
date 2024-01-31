@class VCPCNNModelEspresso;

@interface VCPCNNPetsKeypointsDetector : NSObject {
    int _maxNumRegions;
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
    int _inputWidth;
    int _inputHeight;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withBox:(id)a1 keypoints:(id)a2;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3 box:(id)a4;
- (id)initWithForceCPU:(BOOL)a0 sharedModel:(BOOL)a1;
- (int)parseHeatmap2Keypoints:(id)a0;

@end
