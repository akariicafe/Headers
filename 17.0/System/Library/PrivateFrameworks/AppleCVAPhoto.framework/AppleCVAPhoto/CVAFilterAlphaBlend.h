@class NSObject;
@protocol MTLPipelineLibrarySPI, MTLComputePipelineState, OS_dispatch_queue, MTLLibrary, OS_dispatch_semaphore, MTLCommandQueue, MTLDeviceSPI;

@interface CVAFilterAlphaBlend : ImageSaverAndFileConfigRegistrator {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _library;
    id<MTLCommandQueue> _commandQueue;
    id<MTLPipelineLibrarySPI> _pipelineLibrary;
    id<MTLComputePipelineState> _alphaBlend_Kernel;
    NSObject<OS_dispatch_queue> *_synchronousRenderingCallbackQueue;
    NSObject<OS_dispatch_semaphore> *_renderingCallbackSemaphore;
}

- (struct pair<id<MTLTexture>, id<MTLTexture>> { id x0; id x1; })getTexturePlanesFromPixelBuffer:(struct __CVBuffer { } *)a0 usage:(unsigned long long)a1;
- (void)encodeAlphaBlendToCommandBuffer:(id)a0 inTexFirst:(id)a1 inTexSecond:(id)a2 outTex:(id)a3 alpha:(float)a4;
- (void).cxx_destruct;
- (id)initWithMetalContext:(void *)a0;
- (void)alphaBlendPixelBuffer:(struct RetainPtr<__CVBuffer *> { void *x0; })a0 inPixelBufferSecond:(struct RetainPtr<__CVBuffer *> { void *x0; })a1 outPixelBuffer:(struct RetainPtr<__CVBuffer *> { void *x0; })a2 alpha:(float)a3 callbackQueue:(id)a4 callback:(id /* block */)a5;

@end
