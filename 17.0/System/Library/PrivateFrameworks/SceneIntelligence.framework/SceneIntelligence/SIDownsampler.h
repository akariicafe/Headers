@protocol MTLComputePipelineState;

@interface SIDownsampler : NSObject {
    int _scaleFactor;
    id<MTLComputePipelineState> _pipelineState;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (id)initWithFactory:(id)a0 scaleFactor:(int)a1;

@end
