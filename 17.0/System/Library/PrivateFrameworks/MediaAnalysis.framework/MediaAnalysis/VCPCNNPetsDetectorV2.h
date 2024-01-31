@class NSArray, NSString, VCPCNNModelEspresso;

@interface VCPCNNPetsDetectorV2 : NSObject {
    int _cnnInputWidth;
    int _cnnInputHeight;
    int _maxNumRegions;
    int _numClass;
    int _revision;
    int _srcWidth;
    int _srcHeight;
    float *_inputData;
    NSArray *_outputNames;
    NSString *_resConfig;
    VCPCNNModelEspresso *_modelEspresso;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

+ (id)detector:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 revision:(int)a3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)configForAspectRatio:(id)a0;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3;
- (int)createModel:(int)a0 srcWidth:(int)a1;
- (int)generatePetsBoxes:(id)a0;
- (int)generatePetsRegions:(const void *)a0 boxes:(id)a1 maxNumRegions:(int)a2;
- (long long)getClosestAspectRatio:(id)a0;
- (float *)getInputBuffer:(int)a0 srcWidth:(int)a1 cnnInputHeight:(int *)a2 cnnInputWidth:(int *)a3;
- (id)initWithMaxNumRegions:(int)a0 forceCPU:(BOOL)a1 sharedModel:(BOOL)a2 revision:(int)a3;
- (void)nonMaxSuppression:(id)a0;
- (int)petsDetection:(struct __CVBuffer { } *)a0 petsRegions:(id)a1 cancel:(id /* block */)a2;
- (int)retrieveBoxes:(float *)a0 outHeight:(int)a1 outWidth:(int)a2 boxes:(id)a3 anchorBox:(float[3][2])a4;

@end
