@interface VCPCNNHandKeypointsDetector : NSObject {
    float _std;
    float _mean;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

+ (id)detector:(BOOL)a0 sharedModel:(BOOL)a1 modelName:(id)a2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3 box:(id)a4;
- (int)cvtHeatmaps2Keypoints:(float *)a0 outHeight:(int)a1 outWidth:(int)a2 inHeight:(int)a3 inWidth:(int)a4 outChannel:(int)a5 keypoints:(struct CGPoint { double x0; double x1; } *)a6 keypointConfidence:(float *)a7 offset:(float)a8;
- (int)generateHandKeypoints:(struct CGPoint { double x0; double x1; } *)a0 keypointConfidence:(float *)a1 offset:(float)a2;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3 offset:(float *)a4;
- (int)handKeypointsDetection:(struct __CVBuffer { } *)a0 box:(id)a1 keypoints:(struct CGPoint { double x0; double x1; }[21])a2 keypointConfidence:(float[21])a3;

@end
