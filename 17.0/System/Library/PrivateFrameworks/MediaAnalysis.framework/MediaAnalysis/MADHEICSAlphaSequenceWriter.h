@class NSDictionary;

@interface MADHEICSAlphaSequenceWriter : MADAlphaSequenceWriter {
    NSDictionary *_crop;
    struct CF<CMPhotoCompressionSession *> { struct CMPhotoCompressionSession *value_; } _compressionSession;
    long long _sequenceIndex;
    int _status;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _imagePixelBufferPool;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _alphaPixelBufferPool;
}

+ (int)getOutputWidth:(unsigned long long *)a0 outputHeight:(unsigned long long *)a1 sequenceData:(id)a2;
+ (id)transcodeSequenceData:(id)a0 maxDimension:(unsigned long long)a1 outputWidth:(unsigned long long *)a2 outputHeight:(unsigned long long *)a3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_addPixelBuffer420Alpha:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)_addPixelBufferBGRA:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)_createCompressionSessionLazy;
- (int)_finishWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 outputData:(id *)a1;
- (int)addPixelBuffer:(struct __CVBuffer { } *)a0 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (int)copyInputPlaneIndex:(unsigned long long)a0 inputPixelBuffer:(struct __CVBuffer { } *)a1 toOutputPlaneIndex:(unsigned long long)a2 outputPixelBuffer:(struct __CVBuffer { } *)a3 bytesPerPixel:(unsigned long long)a4;
- (int)createPixelBufferPool:(struct __CVPixelBufferPool **)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormat:(int)a3;
- (int)demuxPixelBuffer:(struct __CVBuffer { } *)a0 imagePixelBuffer:(struct __CVBuffer **)a1 alphaPixelBuffer:(struct __CVBuffer **)a2;
- (id)finishWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithFrameCount:(unsigned long long)a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
