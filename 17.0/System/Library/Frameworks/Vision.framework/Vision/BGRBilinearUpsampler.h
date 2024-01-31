@class NSString, MPSImageGaussianBlur, MPSImageBilinearScale;
@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

@interface BGRBilinearUpsampler : NSObject <BGRPostProcessing> {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    MPSImageGaussianBlur *_blurFilter;
    MPSImageBilinearScale *_bilinearScale;
    struct __CVMetalTextureCache { } *_metalTextureCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property double featheringSigma;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithMetalDevice:(id)a0;
- (void).cxx_destruct;
- (id)createTextureOfSize:(struct CGSize { double x0; double x1; })a0 withFormat:(unsigned long long)a1;
- (BOOL)applyEspressoMask:(const struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 toImage:(struct __CVBuffer { } *)a1 highResMaskBuffer:(struct __CVBuffer { } *)a2;
- (BOOL)applyPixelBufferMask:(struct __CVBuffer { } *)a0 toImage:(struct __CVBuffer { } *)a1 highResMaskBuffer:(struct __CVBuffer { } *)a2;
- (BOOL)applyTextureMask:(id)a0 toImage:(struct __CVBuffer { } *)a1 highResMaskBuffer:(struct __CVBuffer { } *)a2;
- (id)computePipelineStateFor:(id)a0;
- (BOOL)handlePostProcessingRequest:(struct { struct __CVBuffer *x0; struct *x1; struct __CVBuffer *x2; } *)a0;
- (id)libraryReturnError:(id *)a0;
- (id)textureFromPixelBuffer:(struct __CVBuffer { } *)a0 format:(unsigned long long)a1;

@end
