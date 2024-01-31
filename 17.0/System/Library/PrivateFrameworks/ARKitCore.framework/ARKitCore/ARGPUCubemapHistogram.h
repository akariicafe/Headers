@protocol MTLCommandQueue, MTLDevice, MTLComputePipelineState;

@interface ARGPUCubemapHistogram : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _cubemapHistogramPipelineState;
    BOOL _gpuFamilyAtleast4;
}

- (id)init;
- (void).cxx_destruct;
- (struct ARLabHistogram { float x0; float x1[4][8][8]; })colorHistogramForCubemap:(id)a0;

@end
