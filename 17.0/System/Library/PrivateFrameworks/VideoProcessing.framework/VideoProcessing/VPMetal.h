@class NSDictionary, MPSImageHistogram, NSMutableArray;
@protocol MTLCommandQueue, MTLDevice;

@interface VPMetal : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    MPSImageHistogram *_histogramKernel;
    struct MetalBufferPool { NSMutableArray *pool_; id<MTLDevice> device_; unsigned long long allocSize_; unsigned long long storageMode_; } _histogramBufferPool;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheRGBALuma;
    NSDictionary *_readAttributes;
}

- (id)init;
- (id).cxx_construct;
- (int)initWithDevice:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (struct future<CF<const __CFData *>> { void *x0; })generateHistogramMetal:(struct __CVBuffer { } *)a0 forRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a1 validate:(BOOL)a2;
- (id)loadTextureRGBAUnorm:(struct __CVBuffer { } *)a0 forPlane:(int)a1 withAttributes:(id)a2;

@end
