@class NSDictionary, VideoWriter, CIContext;

@interface VideoContext : NSObject

@property (readonly) NSDictionary *pixelAttrs;
@property (readonly) unsigned int pixelFormat;
@property BOOL colorManagement;
@property (readonly) CIContext *ciCtx;
@property (readonly) VideoWriter *writer;
@property (readonly) unsigned int pixelFormatFlags;

- (void).cxx_destruct;
- (int)appendFrame:(id)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 srcPixBuf:(struct __CVBuffer { } *)a2;
- (struct __CVBuffer { } *)createPixelBuffer;
- (struct __CVBuffer { } *)createPixelBuffer:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)initWithWriter:(id)a0 pixelFormatFlags:(unsigned int)a1;
- (id)initWithWriter:(id)a0 pixelFormatFlags:(unsigned int)a1 colorManagement:(BOOL)a2;
- (BOOL)pixelBuffer:(struct __CVBuffer { } *)a0 conformsToImage:(id)a1;
- (struct __CVBuffer { } *)pixelBufferFromImage:(id)a0;
- (struct __CVBuffer { } *)pixelBufferFromImage:(id)a0 withAttachFrom:(struct __CVBuffer { } *)a1;

@end
