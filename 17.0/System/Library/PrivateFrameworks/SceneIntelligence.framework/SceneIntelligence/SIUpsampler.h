@protocol MTLComputePipelineState;

@interface SIUpsampler : NSObject {
    id<MTLComputePipelineState> _pipelineState;
}

- (void).cxx_destruct;
- (id)initWithFactory:(id)a0;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;

@end
