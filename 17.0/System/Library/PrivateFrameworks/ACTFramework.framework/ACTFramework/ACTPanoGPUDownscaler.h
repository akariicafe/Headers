@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface ACTPanoGPUDownscaler : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _queue;
    id<MTLComputePipelineState> _downsampleState;
}

- (id)init;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (int)downsample:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1;

@end
