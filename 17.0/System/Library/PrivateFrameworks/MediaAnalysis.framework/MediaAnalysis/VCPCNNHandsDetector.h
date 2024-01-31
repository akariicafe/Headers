@class NSArray, VCPCNNModelEspresso;

@interface VCPCNNHandsDetector : NSObject {
    int _cnnInputWidth;
    int _cnnInputHeight;
    int _maxNumRegions;
    int _numClass;
    int _revision;
    float *_inputData;
    NSArray *_outputNames;
    VCPCNNModelEspresso *_modelEspresso;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

+ (id)detector:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3 revision:(int)a4;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1;
- (int)createModelWithResConfig:(id)a0;
- (int)drawLine:(char *)a0 width:(int)a1 height:(int)a2 stride:(int)a3 point0:(struct CGPoint { double x0; double x1; })a4 point1:(struct CGPoint { double x0; double x1; })a5 drawPoint:(int)a6;
- (int)drawRectangle:(char *)a0 width:(int)a1 height:(int)a2 stride:(int)a3 keypoints:(struct CGPoint { double x0; double x1; } *)a4;
- (int)generateHandsBoxes:(id)a0;
- (int)generateHandsRegions:(const void *)a0 boxes:(id)a1 maxNumRegions:(int)a2;
- (int)handsDetection:(struct __CVBuffer { } *)a0 handsRegions:(id)a1 cancel:(id /* block */)a2;
- (id)initWithMaxNumRegions:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 inputConfig:(id)a3 revision:(int)a4;
- (void)nonMaxSuppression:(id)a0;
- (int)retrieveBoxes:(float *)a0 outHeight:(int)a1 outWidth:(int)a2 boxes:(id)a3 anchorBox:(float[3][2])a4;
- (int)updateMaxNumRegions:(int)a0;
- (int)updateModelWithResConfig:(id)a0;

@end
