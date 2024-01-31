@class MPSUnaryImageKernel;
@protocol MTLCommandQueue, MTLDevice;

@interface ARMPSImageFilter : NSObject {
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    MPSUnaryImageKernel *_kernel;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImageKernel:(id)a0 device:(id)a1;
- (struct __CVBuffer { } *)processPixelBuffer:(struct __CVBuffer { } *)a0 format:(unsigned long long)a1;

@end
