@protocol MTLBuffer, MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface ABPK2DDetectionPostprocessGPU : NSObject {
    unsigned long long _nChannels;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _pipelineStateInterpolate;
    id<MTLComputePipelineState> _pipelineStateMaxFilter;
    id<MTLBuffer> _input;
    id<MTLBuffer> _intermediate;
    id<MTLBuffer> _output;
    id<MTLLibrary> _library;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void /* unknown type, blank encoding */ *)process:(struct __IOSurface { } *)a0 counter:(unsigned int *)a1 shape:(struct CGSize { double x0; double x1; })a2;
- (void)_copyToInputAsFloat16:(float *)a0 shape:(struct CGSize { double x0; double x1; })a1;
- (id)initWithNumberOfChannels:(unsigned long long)a0;

@end
