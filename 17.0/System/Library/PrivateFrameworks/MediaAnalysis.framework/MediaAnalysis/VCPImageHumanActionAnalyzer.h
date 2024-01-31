@class NSArray, VCPCNNModelEspresso, PHFetchResult, NSMutableArray;

@interface VCPImageHumanActionAnalyzer : VCPImageAnalyzer {
    NSMutableArray *_results;
    NSArray *_existingResults;
    VCPCNNModelEspresso *_model;
    PHFetchResult *_phFaces;
    float *_inputData;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

+ (id)sharedModel:(id)a0 outputNames:(id)a1 properties:(id)a2;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromPHFace:(id)a0;
- (int)aggregateWith:(id)a0;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 cnnInputHeight:(int)a2 cnnInputWidth:(int)a3 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (id)initWithPHFaces:(id)a0 existingResults:(id)a1;

@end
