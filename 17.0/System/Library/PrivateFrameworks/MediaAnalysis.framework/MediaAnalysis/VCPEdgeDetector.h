@interface VCPEdgeDetector : NSObject {
    unsigned long long _widthPadded;
    unsigned long long _heightPadded;
    unsigned long long _width;
    unsigned long long _height;
    int _widthExt;
    int _heightExt;
    struct DSPSplitComplex { float *realp; float *imagp; } _gradient;
    float *_image;
    float *_imageFiltered;
    float *_nonMaxSuppressed;
    float *_gradientX;
    float *_gradientY;
    float *_gradientMag;
    float *_edgeMap;
}

- (void)dealloc;
- (int)detectWithSigma:(float)a0 lowThreshold:(float)a1 highThreshold:(float)a2;
- (int)gradientEstimation:(float *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 gradient:(struct DSPSplitComplex { float *x0; float *x1; })a3 gradientMag:(float *)a4;
- (id)initWithImage:(float *)a0 edgeMap:(float *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 widthExtension:(int)a4 heightExtension:(int)a5;
- (BOOL)isInImage:(int)a0 width:(int)a1 height:(int)a2;
- (int)noiseReduction:(float *)a0 sigma:(float)a1 imageFiltered:(float *)a2;

@end
