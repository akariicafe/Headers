@protocol MTLComputePipelineState, MTLBuffer;

@interface IndirectComputeCommandEncoderState : NSObject {
    id<MTLComputePipelineState> _pipelineState;
    id<MTLBuffer> _kernelBuffers[31];
    void *_kernelBytes[31];
    unsigned long long _kernelBufferOffsets[31];
    unsigned long long _kernelBytesLength[31];
}

+ (id)saveEncoder:(id)a0 withDescriptor:(id)a1 player:(id)a2;

- (void).cxx_destruct;
- (void)restoreEncoder:(id)a0 withDescriptor:(id)a1;

@end
