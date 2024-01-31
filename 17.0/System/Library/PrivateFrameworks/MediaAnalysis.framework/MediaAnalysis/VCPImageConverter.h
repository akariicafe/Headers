@interface VCPImageConverter : NSObject {
    int _pixelFormat;
    int _width;
    int _height;
    struct CGColorSpace { } *_rgbColorSpace;
    struct CGContext { } *_cgContext;
    struct __CVBuffer { } *_rgbFrame;
    struct __CVPixelBufferPool { } *_yuvFrames;
    struct OpaqueVTPixelTransferSession { } *_rgbToYuv;
}

- (id)init;
- (void)dealloc;
- (int)convertImage:(struct CGImage { } *)a0 yuvFrame:(struct __CVBuffer **)a1;
- (id)initWithPixelFormat:(int)a0;
- (int)resize:(int)a0 height:(int)a1;

@end
