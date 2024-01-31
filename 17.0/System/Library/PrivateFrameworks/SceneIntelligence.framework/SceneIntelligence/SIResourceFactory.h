@protocol MTLDevice, MTLSharedEvent, MTLLibrary, MTLCommandQueue, MTLCommandQueueSPI;

@interface SIResourceFactory : NSObject {
    id<MTLLibrary> _library;
    id<MTLCommandQueue> _commandQueue;
    id<MTLCommandQueueSPI> _commandQueueSPI;
    id<MTLSharedEvent> _sharedEvent;
}

@property (readonly, nonatomic) id<MTLLibrary> library;
@property (readonly) id<MTLDevice> device;

- (id)commandBuffer;
- (id)sharedEvent;
- (id)newFunctionWithName:(id)a0;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)newFunctionWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (id)commandBufferOnCustomQueue;
- (id)commandBufferOnCustomQueueWithoutComputePreemption;
- (id)customCommandQueue;
- (id)dictionaryFromTexture:(id)a0;
- (id)newComputePipelineStateWithName:(id)a0;
- (id)newComputePipelineStateWithName:(id)a0 constantValues:(id)a1 error:(id *)a2;
- (id)newCubemapWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0;
- (id)newIOSurfaceBackedTextureWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2;
- (id)newTextureFromIOSurface:(struct __IOSurface { } *)a0;
- (id)newTextureFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)newTextureWithFormat:(struct SIImageFormat_struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned long long x3; })a0;
- (id)newTextureWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned int)a2;

@end
