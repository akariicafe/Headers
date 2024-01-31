@class NSMutableArray;

@interface VCPHomeKitMotionAnalyzer : VCPVideoAnalyzer {
    NSMutableArray *_regions;
    float *_diff;
    float *_ptrFirst;
    float *_ptrLast;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
    struct vector<__CVBuffer *, std::allocator<__CVBuffer *>> { struct __CVBuffer **__begin_; struct __CVBuffer **__end_; struct __compressed_pair<__CVBuffer **, std::allocator<__CVBuffer *>> { struct __CVBuffer **__value_; } __end_cap_; } _frameArray;
    int _frameWidth;
    int _frameHeight;
    int _width;
    int _height;
    int _stride;
    int _blockSize;
    int _widthBlockNum;
    int _heightBlockNum;
}

@property (readonly) float actionScore;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)setPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)calculateFrameDifference:(struct __CVBuffer { } *)a0;
- (int)computeRegionsofInterest;
- (id)regionsOfInterest;

@end
