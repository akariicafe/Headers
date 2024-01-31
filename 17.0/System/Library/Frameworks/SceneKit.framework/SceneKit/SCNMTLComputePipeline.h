@protocol MTLComputePipelineState, MTLFunction;

@interface SCNMTLComputePipeline : NSObject {
    id<MTLComputePipelineState> _state;
    id<MTLFunction> _computeFunction;
}

- (id)init;
- (void)dealloc;
- (id)description;

@end
