@class MPSImageGaussianBlur, NSDictionary, MTLTextureDescriptor, MPSImageBilinearScale;
@protocol MTLCommandQueue, MTLDevice;

@interface VCPSpillmapMetalSession : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    MPSImageBilinearScale *_bilinearScale;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _spillBufferPoolUnprotected;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _spillBufferPoolScreenScrapingProtected;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _spillBufferPoolHDCPType0;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _spillBufferPoolHDCPType1;
    struct CF<__CFDictionary *> { struct __CFDictionary *value_; } _spillmapBufferProperties;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheBGRA;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheSpillmap;
    NSDictionary *_readAttributes;
    NSDictionary *_readWriteAttributes;
    MTLTextureDescriptor *_intermediateImageDescriptor;
    MPSImageGaussianBlur *_gaussianBlur;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)calculateDrmSpillmapMetal:(struct __CVBuffer { } *)a0 emitSpillmap:(struct __CVBuffer **)a1 setLayout:(int)a2;
- (int)configureGPU;
- (int)configureIntermediateTextureProcessing:(int)a0 setHeight:(int)a1 setSigma:(float)a2;
- (int)configureSession:(struct __IOSurface { } *)a0 setWidth:(int)a1 setHeight:(int)a2;
- (id)loadTexture:(struct __CVBuffer { } *)a0 withAttributes:(id)a1 forPlane:(unsigned int)a2 withCache:(struct __CVMetalTextureCache { } *)a3 withFormat:(unsigned long long)a4;

@end
